/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 15:18:29 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Zombie{

	public:
		Zombie(std::string name, std::string type);
		~Zombie( void );
        void advert( void );
        void announce( void );
		std::string	name;
		std::string type;

};

#endif
