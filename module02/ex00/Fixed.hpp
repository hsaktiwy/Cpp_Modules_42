/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:10:00 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/17 15:53:55 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
	class Fixed
	{
	private:
		int	fixed;
		static const int NUM_FRACTION_INTS;
	public:
		Fixed();
		Fixed(const Fixed& to_copy);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	};
#endif