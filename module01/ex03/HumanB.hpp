/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:34:56 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/21 16:49:31 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
	#include "Weapon.hpp"
	#include <string>
	class HumanB{
		private:
			Weapon		*weapon;
			std::string	name;
		public:
			HumanB(std::string t_name);
			~HumanB();
			void	setWeapon(Weapon& t_weapon);
			void	attack();
	};
#endif