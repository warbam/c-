/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/24 10:12:02 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class FragTrap{

	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const & f );
		FragTrap& operator=( FragTrap const & f );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~FragTrap( void );
	private:
		int _HitPoints;
		int _MaxHitPoints;
		int _EnergyPoints;
		int _MaxEnergyPoints;
		int _Level;
		std::string _Name;
		int _MeleeAttackDamage;
		int _RangedAttackDamage;
		int _ArmorDamageReduction;
		int checkEnergy(int cost);
};

#endif
