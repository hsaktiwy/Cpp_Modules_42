/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:10:00 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/23 19:05:10 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
	#include <iostream>
	class Fixed
	{
		private:
			int	fixed;
			static const int NUM_FRACTION_NITS = 8;
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
			
			// 6 comparison op < > <= >= == !=
			bool operator<=(const Fixed& other) const;
			bool operator<(const Fixed& other) const;
			bool operator>=(const Fixed& other) const;
			bool operator>(const Fixed& other) const;
			bool operator==(const Fixed& other) const;
			bool operator!=(const Fixed& other) const;
			
			// 4 arithmetic operators + / * -
			Fixed	operator+(const Fixed& other) const;
			Fixed	operator-(const Fixed& other) const;
			Fixed	operator*(const Fixed& other) const;
			Fixed	operator/(const Fixed& other) const;
			
			
	};
	std::ostream& operator<<(std::ostream& os, const Fixed& object);
#endif