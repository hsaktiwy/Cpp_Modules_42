/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:37:17 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/21 14:31:05 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
class Zombie{
	private:
		std::string	name;
	public:
		Zombie(std::string n);
		~Zombie();
		void	announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif