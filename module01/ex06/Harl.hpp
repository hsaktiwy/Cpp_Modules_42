/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:50:58 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/22 15:50:59 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARAL_HPP
#define HARAL_HPP
	#include <string>
	class Harl{
		private:
			void	debug( void );
			void	info( void );
			void	warning( void );
			void	error( void );
		public:
			void	complaine(std::string level);
	};
#endif