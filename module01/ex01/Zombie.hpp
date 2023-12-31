/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:37:17 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/21 15:22:56 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void	announce( void );
		void	setName(std::string t_name);
};

Zombie* zombieHorde( int N, std::string name );
#endif