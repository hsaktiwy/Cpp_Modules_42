/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:27:13 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/27 13:33:14 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
	#include "FragTrap.hpp"
	#include "ScavTrap.hpp"
	#include <iostream>
	class DiamondTrap : public FragTrap, public ScavTrap{
		private:
			std::string Name;
		public:
			DiamondTrap();
			DiamondTrap(std::string t_Name);
			DiamondTrap(const DiamondTrap& object);
			DiamondTrap& operator=(const DiamondTrap& object);
			~DiamondTrap();
			void attack(const std::string& target);
			void whoAmI();
	};
#endif