#include "ScalarConvertion.hpp"

ScalarConvertion::ScalarConvertion()
{

}

ScalarConvertion::~ScalarConvertion()
{

}

ScalarConvertion::ScalarConvertion(const ScalarConvertion& copy)
{
	*this = copy;
}

ScalarConvertion& ScalarConvertion::operator=(const ScalarConvertion& obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}

static bool		ft_isdigit(char c)
{
	if (c >=  '0' && c <= '9')
		return (true);
	return (false);
}

static bool		not_special_case(std::string &str)
{
	std::string table[7] = {"inf", "inff", "-inf", "+inf", "-inff", "+inff", "nan"};
	for (int i = 0; i < 7; i++)
	{
		if (str == table[i])
			return (false);
	}
	return (true);
}

static bool		parse_error(std::string &str)
{
	int signe = 0;
	int point = 0;
	int size = str.length();
	std::string table[7] = {"inf", "inff", "-inf", "+inf", "-inff", "+inff", "nan"};
	if (size == 0)
		return (true);
	for (int i = 0; i < 7; i++)
	{
		if (str == table[i])
			return (false);
	}
	if (str[0] == '+' || str[0] == '-')
		signe++;
	if (str[0] == '.' || str[size - 1] == '.' || ((str[0] == 'f' || str[0] == '+' || str[0] == '-') && size == 1))
		return (true);
	for (int i = 0; i < size; i++)
	{
		if (str[i] == 'f')
		{
			if (!(i == size - 1))
				return (true);
		}
		if (str[i] == '.' && point == 0)
			point++;
		else if (str[i] == '.' && point == 1)
			return (true);
		if ((str[i] == '+' || str[i] == '-') && i != 0)
			return  (true);
		if (!ft_isdigit(str[i]) && (str[i] != '+' && str[i] != '-' && str[i] != 'f' && str[i] != '.'))
			return (true);
	}
	return (false);
}

static bool 	zero_fraction(const std::string &str)
{
	size_t	pos = str.find(".");
	size_t	i = pos + 1;
	int		j = 0;

	if (pos == std::string::npos)
		return (true);
	while (str[i])
	{
		if (str[i] == '0')
		{
			i++;
			if (j == 4)
				return(true);
			j++;
		}
		else
			return (false);
	}
	if (i - pos > 1)
		return (true);
	return (false);
}

void		ScalarConvertion::Convert(const std::string &str)
{
	int				i;
	char			c;
	long double		d;
	float			f;
	int				error;
	bool 			fraction;

	fraction = zero_fraction(str);
	error = 0;
	error = parse_error((std::string &)str);
	d =	std::atof(str.c_str());
	fraction = ((fraction && (d <= 999999 && d >= -999999)) ? 1 : 0);
	f = static_cast<float>(d);
	i = static_cast<int>(f);
	c = static_cast<char>(i);
	if ((i > 127 || i < -128) || error)
		std::cout << "char : impossible" << std::endl;
	else
	{
		if (c >= 32 && c < 127)
			std::cout << "char : " << c << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
	}
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() ||  !(f == f) || error)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	if ((d <= std::numeric_limits<float>::max() && d >= -std::numeric_limits<float>::max() && !error) || !not_special_case((std::string &)str))
		std::cout << "float : " << f << ((fraction) ? ".0f": "f") << std::endl;
	else
		std::cout << "float : impossible" << std::endl;
	if ((d <= std::numeric_limits<double>::max() && d >= -std::numeric_limits<double>::max() && !error) || !not_special_case((std::string &)str))
		std::cout << "double : " << d << ((fraction) ? ".0": "") << std::endl; 
	else
		std::cout << "double : impossible" << std::endl;
}		
