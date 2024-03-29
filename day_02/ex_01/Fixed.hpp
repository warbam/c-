/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 18:58:21 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>       // std::cout
#include <ostream>
#include <cmath>

class Fixed{

	public:
		Fixed( void );
		Fixed( int const val );
		Fixed( float const val );
		Fixed(Fixed const &fixed);
		int toInt() const;
		float toFloat() const;
		~Fixed( void );
		void setRawBits(int const raw);
		Fixed& operator=( Fixed const & f );
		int getRawBits(void) const;

	private:
		int _value;
		static const int _bits = 8;
};
		std::ostream& operator<<(std::ostream& os, Fixed const &f);

#endif
