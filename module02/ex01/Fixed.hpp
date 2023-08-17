/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:10:00 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/17 15:58:30 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
	#include <iostream>
	class Fixed
	{
		private:
			int	fixed;
			static const int NUM_FRACTION_INTS;
		public:
			Fixed();
			Fixed(const int value);
			Fixed(const float value);
			Fixed(const Fixed& to_copy);
			~Fixed();
			float	toFloat( void ) const;
			int		toInt( void ) const;
			Fixed& operator=(const Fixed& other);
			int getRawBits( void ) const;
			void setRawBits( int const raw );
	};
	std::ostream& operator<<(std::ostream& os, const Fixed& object);
#endif