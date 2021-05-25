/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/22 17:24:52 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap david("david");
    ScavTrap claude("claude");
    david.meleeAttack("jean");
    claude.challengeNewcomer();
    david.vaulthunter_dot_exe("benoit");
    david.takeDamage(40);
    david.rangedAttack( "philippe");
    david.beRepaired(34);
}
