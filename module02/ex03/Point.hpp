/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:49:29 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/17 10:55:28 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
	#include "Fixed.hpp"
	class Point{
		private:
			const Fixed x;
			const Fixed y;
		public:
			Point();
			Point(const Point& object);
			Point(const float a, const float b);
			Point& operator=(const Point& object);
			~Point();
			Fixed getX() const;
			Fixed getY() const;
	};
#endif