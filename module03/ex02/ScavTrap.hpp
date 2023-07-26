/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:57:26 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:38:36 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
	#include "ClapTrap.hpp"
	class ScavTrap : public ClapTrap{
		public:
			ScavTrap();
			ScavTrap(std::string Name);
			ScavTrap(const ScavTrap& object);
			ScavTrap& operator=(const ScavTrap& object);
			~ScavTrap();
			void attack(const std::string& target);
			void guardGate();
	};
#endif