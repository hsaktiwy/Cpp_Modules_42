/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:28:01 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/27 14:16:06 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
	#include "Weapon.hpp"
	class HumanA{
		private:
			Weapon		&weapon;
			std::string	name;
		public:
			HumanA(std::string t_name, Weapon& t_w);
			~HumanA();
			void	attack();
	};
#endif