/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lol <lol@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:10:00 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/24 13:46:58 by lol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
	#include <iostream>
	class Fixed
	{
		private:
			int	fixed;
			static const int NUM_FRACTION_INTS = 8;
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
			
			// posfix/prefix ++ --
			Fixed&	operator++();
			Fixed&	operator--();
			Fixed	operator++(int);
			Fixed	operator--(int);
			

	};
	std::ostream& operator<<(std::ostream& os, const Fixed& object);
#endif