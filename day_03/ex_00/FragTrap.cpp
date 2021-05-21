/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/21 11:19:32 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): _Name(name)
{
    srand(time(NULL));
    	_HitPoints = 100;
		_MaxHitPoints = 100;
		_EnergyPoints = 100;
		_MaxEnergyPoints = 100;
		_Level = 1;
		_MeleeAttackDamage = 30;
		_RangedAttackDamage = 20;
		_ArmorDamageReduction = 5;
    std::cout << "Hello i'm FR4G-TP("<< name <<"), and i serve Handsome Jack!" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(10))
        std::cout << "FR4G-TP " << _Name <<  " attaque " << target << " à distance, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int nb;
    std::string attack;
    int damage;
    if(this->checkEnergy(25))
    {
        nb = rand() % 5;
        if (nb == 1)
        {
           attack = "DDOS";
            damage = 10;
        }
        if (nb == 2)
        {
            attack = "demi-tour slide";
            damage = 20;
        }
        if (nb == 3)
        {
            attack = "missile guidé";
            damage = 30;
        }
        if (nb == 4)
        {
            attack = "tire chirurgical";
            damage = 40;
        }
        if (nb == 0)
        {
            attack = "charge";
            damage = 50;
        }
        std::cout << "FR4G-TP " << _Name <<  " utilise " << attack << " sur " << target << " causant " << damage << " points de dégâts !" << std::endl;
    }
}

int FragTrap::checkEnergy( unsigned int cost)
{
    if(_EnergyPoints > cost)
        return (1);
    std::cout << _Name << " est a court d'energie!" << std::endl;
    return (0);
}

void FragTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
        std::cout << "FR4G-TP " << _Name <<  " attaque " << target << " au CàC, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
}

void FragTrap::takeDamage(unsigned int val)
{
    if (_HitPoints - (val - _ArmorDamageReduction) > 0)
        _HitPoints -= val - _ArmorDamageReduction;
    else
        _HitPoints = 0;
    std::cout << "FR4G-TP " << _Name <<  " a pris " << val << " point de degats, il lui reste " << _HitPoints << "HP!" << std::endl;

}
void FragTrap::beRepaired(unsigned int val)
{
    if (_HitPoints + val < _MaxHitPoints)
        _HitPoints += val;
    else
        _HitPoints = _MaxHitPoints;
    std::cout << "FR4G-TP " << _Name <<  " a recuperé " << val << " points de vie, il a maintenant " << _HitPoints << "HP!" << std::endl;
}