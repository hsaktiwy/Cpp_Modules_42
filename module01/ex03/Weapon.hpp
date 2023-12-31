/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:19:17 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/27 14:08:41 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
class Weapon{
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string t_type);
		std::string getType();
		void	setType(std::string n_type);
};
#endif