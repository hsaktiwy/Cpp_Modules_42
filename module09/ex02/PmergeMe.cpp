#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

// static void valid_args(const char **argv, std::vector<int> &vector)
// {
//     int plus;
//     std::string  error = "Invalide arguments ";;

//     for(int i = 0; argv[i]; i++)
//     {    
//         plus = 0;
//         for (int j = 0; argv[i][j]; j++)
//         {
//             if (!std::isdigit(argv[i][j]))
//             {
//                 if (argv[i][j] == '+' && !plus)
//                     plus++;
//                 else
//                     throw std::logic_error(error + argv[i]);
//             }
//         }
//         // fill our containers with this arguments
//         long    integer = std::atol(argv[i]);
//         if (integer >= INT_MIN && integer <= INT_MAX)
//             vector.push_back(integer);
//         else
//             throw std::logic_error(error + argv[i]);
//     }
// }

template <typename T> void display(T &container)
{
    typedef typename T::iterator iter;
    for(iter it = container.begin(); it != container.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void display(std::vector<std::pair<int , int> > &container)
{
    for(std::vector<std::pair<int , int> >::iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << it->first << "_" << it->second<< " ";
    }
    std::cout << std::endl;
}

PmergeMe::PmergeMe(char **argv)
{
    // check our argument validitie and fill our containers
    // valid_args((const char **)argv, vector);
    size_t size = 1000000;
    (void )argv;
    std::srand(std::time(NULL));
    for(size_t i = 0; i < size; i++)
    {
        vector.push_back((std::rand() % 1000000));
    }
    // just for diaplying the arguments, i think we need to chsnge this before pushing to not make people confused
    // display(vector);
}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
    *this = copy;
}

static void creat_pairs_vect(std::vector<int> &data, std::vector<std::pair<int, int> > &pairs)
{
    size_t size = (data.size() % 2 == 0) ?  data.size():data.size() - 1;
    for (size_t i = 0; i < size; i+=2)
    {
        if (data[i] > data[i + 1])
            pairs.push_back(std::make_pair(data[i], data[i + 1]));
        else
            pairs.push_back(std::make_pair(data[i + 1], data[i]));
    }
}

static void creat_pairs_deque(std::vector<int> &data, std::deque<std::pair<int, int> > &pairs)
{
    size_t size = (data.size() % 2 == 0) ?  data.size():data.size() - 1;
    for (size_t i = 0; i < size; i+=2)
    {
        if (data[i] > data[i + 1])
            pairs.push_back(std::make_pair(data[i], data[i + 1]));
        else
            pairs.push_back(std::make_pair(data[i + 1], data[i]));
    }
}

static void merge_vect(std::vector<std::pair<int, int> > &pairs, size_t begin, size_t mid, size_t end)
{
    // this  2 vector will define the first hald and the second half
    std::vector<std::pair<int, int> > v1;
    std::vector<std::pair<int, int> > v2;
    // fill this vectors
    for (size_t i = begin; i <= mid; i++)
        v1.push_back(pairs[i]);
    for (size_t i = mid + 1;  i <= end; i++)
        v2.push_back(pairs[i]);
    // let us check now and modifie our real paire vector
    size_t index_v1 = 0, index_v2 = 0;
    while(index_v1 < v1.size() && index_v2 < v2.size())
    {
        if (v1[index_v1].first < v2[index_v2].first)
            pairs[begin++] = v1[index_v1++];
        else
            pairs[begin++] = v2[index_v2++];
    }
    // now we need to make sure that there is no left over that we never check (v1.size != v2.size), don't forget  the v1 and v2 are already some sort off sorted i mean increassinly
    while (index_v1 < v1.size())
        pairs[begin++] = v1[index_v1++];
    while (index_v2 < v2.size())
        pairs[begin++] = v2[index_v2++];
}

static void merge_deque(std::deque<std::pair<int, int> > &pairs, size_t begin, size_t mid, size_t end)
{
    // this  2 deque will define the first hald and the second half
    std::deque<std::pair<int, int> > v1;
    std::deque<std::pair<int, int> > v2;
    // fill this deques
    for (size_t i = begin; i <= mid; i++)
        v1.push_back(pairs[i]);
    for (size_t i = mid + 1;  i <= end; i++)
        v2.push_back(pairs[i]);
    // let us check now and modifie our real paire deque
    size_t index_v1 = 0, index_v2 = 0;
    while(index_v1 < v1.size() && index_v2 < v2.size())
    {
        if (v1[index_v1].first < v2[index_v2].first)
            pairs[begin++] = v1[index_v1++];
        else
            pairs[begin++] = v2[index_v2++];
    }
    // now we need to make sure that there is no left over that we never check (v1.size != v2.size), don't forget  the v1 and v2 are already some sort off sorted i mean increassinly
    while (index_v1 < v1.size())
        pairs[begin++] = v1[index_v1++];
    while (index_v2 < v2.size())
        pairs[begin++] = v2[index_v2++];
}

static void merge_sort_deque(std::deque<std::pair<int, int> > &pairs, size_t begin, size_t end)
{
    // avoid invalide cases like begin == end in our last recursive call plus the invalide end < begin ?? wtf is that could this happen explore the possibilities 
    if (begin < end)
    {
        size_t mid = begin + (end - begin) / 2;

        // std::cout << "begin:"<< begin << ", mid :" << mid << ", end :"  << end << std::endl;
        // display(pairs);
        merge_sort_deque(pairs, begin, mid);
        merge_sort_deque(pairs, mid + 1, end);
        merge_deque(pairs, begin, mid, end);
    }
}

static void merge_sort_vect(std::vector<std::pair<int, int> > &pairs, size_t begin, size_t end)
{
    // avoid invalide cases like begin == end in our last recursive call plus the invalide end < begin ?? wtf is that could this happen explore the possibilities 
    if (begin < end)
    {
        size_t mid = begin + (end - begin) / 2;

        // std::cout << "begin:"<< begin << ", mid :" << mid << ", end :"  << end << std::endl;
        // display(pairs);
        merge_sort_vect(pairs, begin, mid);
        merge_sort_vect(pairs, mid + 1, end);
        merge_vect(pairs, begin, mid, end);
    }
}

static void add_sequense_vector(std::vector<int>& sequence, std::vector<std::pair<int, int> > &pairs)
{
    for(size_t i = 0; i < pairs.size(); i++)
    {
        sequence.push_back(pairs[i].first);
    }
    sequence.insert(sequence.begin(), pairs[0].second);
}

static void add_sequense_deque(std::deque<int>& sequence, std::deque<std::pair<int, int> > &pairs)
{
    for(size_t i = 0; i < pairs.size(); i++)
    {
        sequence.push_back(pairs[i].first);
    }
    sequence.push_front(pairs[0].second);
}

static double timer(bool reset)
{
    static clock_t start;
    clock_t current;
    if (reset == true)
        start = std::clock();
    current = std::clock();
    return ((static_cast<double>(current - start) / CLOCKS_PER_SEC) * 1000.0);
}
template <typename T> bool my_is_sorted(T container)
{
    typedef typename T::iterator iter;
    iter it = container.begin();
    iter second = container.begin();
    second++;
    while (second != container.end())
    {
        if ((*it) > (*second))
            return (false);
        it++;
        second++;
    }
    return (true);
}

static void FJAOnVector(std::vector<int> vector,int *Jacobsthal, int size)
{
    // this will hold the last value in our conatiner if it odd 2k + 1
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int odd = -1;
    std::vector<std::pair<int, int> > pairs;
    std::vector<int> sequence;

    // generate_pairs + make the beger element in the each pair as the first
    timer(true);
    if (vector.size() % 2 == 1)
        odd = vector[vector.size() - 1];
    creat_pairs_vect(vector, pairs);
    std::cout << "vector :" << timer(false) << std::endl;
    merge_sort_vect(pairs, 0, pairs.size() - 1);
    std::cout << "vector :" << timer(false) << std::endl;
    add_sequense_vector(sequence, pairs);
    size_t number = pairs.size() - 1;
    int Jindex = 0;
    size_t index = 1;
    while (number != 0 && Jindex < size)
    {
        for (size_t i = Jacobsthal[Jindex] - 1; index <= i; i--)
        {
            // std::cout << Jindex << "->" << Jacobsthal[Jindex] << " NUMBERS LEFTS :" << number<< std::endl;
            if (i < pairs.size())
            {
                // std::cout << pairs[i].second << std::endl;
                int value = pairs[i].second;
                std::vector<int>::iterator it = std::lower_bound(sequence.begin(), sequence.end(), value);
                if (it == sequence.end())
                    sequence.push_back(value);
                else
                    sequence.insert(it, value);
                number--;
            }
            else
            {
                // in case where jacops number where beger then the size of our pairs
                // vector we can use this in our adventige to add the odd variable value 
                // if it is != -1
                if (odd != -1)
                {
                    std::vector<int>::iterator it = std::lower_bound(sequence.begin(), sequence.end(), odd);
                    if (it == sequence.end())
                        sequence.push_back(odd);
                    else
                        sequence.insert(it, odd);
                    odd = -1;
                }
                i = pairs.size();
            }
        }
        index = Jacobsthal[Jindex];
        Jindex++;
    }
    // in case where jacops number where exacly as the size of our pairs,
    // so we have the probability off the odd variable would be != -1
    if (odd != -1)
    {
        std::vector<int>::iterator it = std::lower_bound(sequence.begin(), sequence.end(), odd);
        if (it == sequence.end())
            sequence.push_back(odd);
        else
            sequence.insert(it, odd);
    }
    std::cout << " Time took using Jacops number as indexs : " << timer(false)  << " ms" << std::endl;
    // display(sequence);
    if (!my_is_sorted(sequence))
    {
        std::cout << "Not Sorted\n" << std::endl;
    }
    else
        std::cout << "Sorted\n" << std::endl;
}

static void FJAOnDeque(std::vector<int> deque,int *Jacobsthal, int size)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int odd = -1;
    std::deque<std::pair<int, int> > pairs;
    std::deque<int> sequence;

    // generate_pairs + make the beger element in the each pair as the first
    timer(true);
    if (deque.size() % 2 == 1)
        odd = deque[deque.size() - 1];
    creat_pairs_deque(deque, pairs);
    std::cout << "deque :" << timer(false) << std::endl;
    merge_sort_deque(pairs, 0, pairs.size() - 1);
    std::cout << "deque :" << timer(false) << std::endl;
    add_sequense_deque(sequence, pairs);
    size_t number = pairs.size() - 1;
    int Jindex = 0;
    size_t index = 1;
    while (number != 0 && Jindex < size)
    {
        for (size_t i = Jacobsthal[Jindex] - 1; index <= i; i--)
        {
            // std::cout << Jindex << "->" << Jacobsthal[Jindex] << " NUMBERS LEFTS :" << number<< std::endl;
            if (i < pairs.size())
            {
                // std::cout << pairs[i].second << std::endl;
                int value = pairs[i].second;
                std::deque<int>::iterator it = std::lower_bound(sequence.begin(), sequence.end(), value);
                if (it == sequence.end())
                    sequence.push_back(value);
                else
                    sequence.insert(it, value);
                number--;
            }
            else
            {
                // in case where jacops number where beger then the size of our pairs
                // deque we can use this in our adventige to add the odd variable value 
                // if it is != -1
                if (odd != -1)
                {
                    std::deque<int>::iterator it = std::lower_bound(sequence.begin(), sequence.end(), odd);
                    if (it == sequence.end())
                        sequence.push_back(odd);
                    else
                        sequence.insert(it, odd);
                    odd = -1;
                }
                i = pairs.size();
            }
        }
        index = Jacobsthal[Jindex];
        Jindex++;
    }
    // in case where jacops number where exacly as the size of our pairs,
    // so we have the probability off the odd variable would be != -1
    if (odd != -1)
    {
        std::deque<int>::iterator it = std::lower_bound(sequence.begin(), sequence.end(), odd);
        if (it == sequence.end())
            sequence.push_back(odd);
        else
            sequence.insert(it, odd);
    }
    std::cout << " Time took using Jacops number as indexs : " << timer(false)  << " ms" << std::endl;
    // display(sequence);
    if (!my_is_sorted(sequence))
    {
        std::cout << "Not Sorted\n" << std::endl;
    }
    else
        std::cout << "Sorted\n" << std::endl;
}

void PmergeMe::run( void )
{
    int Jacobsthal[] = {3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845, 43691, 87381, 174763, 349525, 699051, 1398101, 2796203, 5592405, 11184811, 22369621, 44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};
    if (vector.size() > 1 && !my_is_sorted(vector))
    {
        FJAOnVector(vector , Jacobsthal, 30);
        FJAOnDeque(vector , Jacobsthal, 30);
    }
}


PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
    if (this != &obj)
    {
        vector = obj.vector;
    }
    return (*this);
}