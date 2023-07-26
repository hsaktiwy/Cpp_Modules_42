/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:42:17 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:40:36 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
	class ClapTrap{
		protected:
			std::string Name;
			int			HitPoint;
			int			Energie_p;
			int			Attack_damage;
		public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& object);
			ClapTrap& operator=(const ClapTrap& object);
			~ClapTrap();
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
	};
#endif