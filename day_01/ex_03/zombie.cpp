/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:17 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/27 10:57:42 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


Zombie::Zombie( void )
{
	srand(time(NULL));
	std::string names[10] = {"Jean", "Bizon", "Lara", "Maxime", "Francois", "Pichon", "Thomas", "Juan", "Jacques", "Franck"};
	std::string types[4] = {"Runner", "Walker", "Crawler", "Ghouls"};
	this->name = names[rand() % 10];
	this->type = types[rand() % 4];
}

Zombie::~Zombie( void )
{
	std::cout <<this->name << " le "<< this->type <<  " est mort de nouveau." << std::endl;
}

void Zombie::advert( void )
{
	std::cout << "<" <<this->name << " (" << this->type << ")>" << " BRAAAAAAAAIIINS.." << std::endl;
}
void Zombie::announce( void )
{
	std::cout << "Salut je m'appelle "<< this->name << ", et je suis un " << this->type << "." << std::endl;
}

