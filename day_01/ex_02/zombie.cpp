/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:17 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 15:41:19 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{
	this->announce();
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
