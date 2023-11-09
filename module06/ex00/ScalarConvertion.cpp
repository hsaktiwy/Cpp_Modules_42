#include "ScalarConvertion.hpp"

bool		ft_isdigit(char c)
{
	if (c >=  '0' && c <= '9')
		return (true);
	return (false);
}

bool		parse_error(const char *str)
{
	int signe = 0;
	int	fsigne = 0;
	int point = 0;
	std::string s(str);
	int size = s.length();
	std::string table[7] = {"inf", "inff", "-inf", "+inf", "-inff", "+inff", "nan"};

	for (int i = 0; i < 7; i++)
	{
		if (s == table[i])
			return (false);
	}
	if (str[0] == '+' || str[0] == '-')
		signe++;
	if (str[0] == '.')
		return (true);
	for (int i = 0; i < size; i++)
	{
		if (str[i] == 'f')
		{
			if (i == size - 1)
				fsigne = 1;
			else
				return (true);
		}
		if (str[i] == '.' && point == 0)
			point++;
		else if (str[i] == '.' && point == 1)
			return (true);
		if ((str[i] == '+' || str[i] == '-') && i != 0)
			signe++;
		if (!ft_isdigit(str[i]) && (str[i] != '+' && str[i] != '-' && str[i] != 'f' && str[i] != '.'))
			return (true);
	}
	if (signe > 1)
		return (true);
	return (false);
}

void		ScalarConvertion::Convert(const char *str)
{
	int				i;
	char			c;
	double			d;
	float			f;
	int				error;
	error = 0;
	error = parse_error(str);
	d =	std::atof(str);
	f = static_cast<float>(d);
	i = static_cast<int>(f);
	c = static_cast<char>(i);
	if (i > 255 || i < 0 || error)
	{
		std::cout << "char : impossible" << std::endl;
	}
	else
	{
		if (c > 32 && c < 127)
			std::cout << "char : " << c << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
	}
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() ||  !(f == f) || error)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	if (error)
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << f << "f" << std::endl;
	if (error)
		std::cout << "double : impossible" << std::endl;
	else
		std::cout << "double : " << d << std::endl; 
}
