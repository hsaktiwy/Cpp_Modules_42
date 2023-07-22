/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileshifting.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:53:35 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/22 11:14:14 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileshifting.hpp"
#include <fstream>
#include <iostream>

fileshifting::fileshifting()
{
	filename = "";
	needle = "";
	newstring = "";
}

fileshifting::fileshifting(std::string file, std::string search, std::string newStr)
{
	filename = file;
	needle = search;
	newstring = newStr;
}

void	fileshifting::setFilename(std::string file)
{
	filename = file;
}

void	fileshifting::setNeedle(std::string str)
{
	needle = str;
}

void	fileshifting::setNewString(std::string str)
{
	newstring = str;
}

static void	shiftReplace_helper(std::ifstream& myfile, std::ofstream& newfile, std::string& needle, std::string& newstring, size_t needleSize)
{
	std::string	line;
	size_t		current;
	size_t		lineLength;
	std::string t_line;
	size_t 		pos;

	while (std::getline(myfile, line))
	{
		lineLength = line.length();
		current = 0;
		while (current < lineLength)
		{
			t_line = &line[current];
			pos = t_line.find(needle, 0);
			if (pos < ((size_t) -1))
			{
				if (pos != 0)
					newfile << t_line.substr(0, pos) << newstring;
				else
					newfile << newstring;
				current += pos + needleSize;
			}
			else
			{
				newfile << t_line;
				break;
			}
		}
		if (!myfile.eof())
			newfile << std::endl;
	}
}

bool	fileshifting::shiftReplace()
{
	size_t needleSize = needle.length();
	
	if (filename.compare("") != 0)
	{
		std::ifstream myfile(filename);
		if (myfile.is_open())
		{
			std::string re_file = filename;
			re_file += ".replace";
			std::ofstream newfile(re_file);
			if (newfile.is_open())
			{
				shiftReplace_helper(myfile, newfile, needle, newstring, needleSize);
				newfile.close();
			}
			else
				return (myfile.close(), false);
			myfile.close();
		}
		else
			return (false);
	}
	else
		return (false);
	return (true);
}
