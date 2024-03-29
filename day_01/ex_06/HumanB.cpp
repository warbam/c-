/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:38:38 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/18 09:31:30 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB( std::string name):_name(name)
{
}

HumanB::~HumanB( void )
{

}

void HumanB::attack( void )
{
    std::cout << _name << "  attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &weapon )
{
    _weapon = &weapon;
}