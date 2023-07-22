/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileshifting.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:37:43 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/22 08:52:56 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESHIFTING_HPP
#define FILESHIFTING_HPP
	#include <string>
	class fileshifting{
		private:
			std::string filename;
			std::string needle;
			std::string newstring;
		public:
			fileshifting();
			fileshifting(std::string file, std::string search, std::string newStr);
			void	setFilename(std::string file);
			void	setNeedle(std::string str);
			void	setNewString(std::string str);
			bool	shiftReplace();
	};
#endif