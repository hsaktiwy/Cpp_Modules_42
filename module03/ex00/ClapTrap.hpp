/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:42:17 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/27 12:56:10 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
	class ClapTrap{
		private:
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