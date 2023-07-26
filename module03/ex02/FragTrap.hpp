/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:58:57 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:38:22 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
	#include "ClapTrap.hpp"
	class FragTrap : public ClapTrap{
		public:
			FragTrap();
			FragTrap(std::string Name);
			FragTrap(const FragTrap& object);
			FragTrap& operator=(const FragTrap& object);
			~FragTrap();
			void highFivesGuys(void);
	};
#endif