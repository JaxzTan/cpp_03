/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:09:00 by chtan             #+#    #+#             */
/*   Updated: 2025/04/18 15:26:28 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");
	FragTrap	trapC("Paul");

	trapC.highFivesGuys();
	trapA.attack(trapB.getName());
	
	trapB.guardGate();
	trapC.attack(trapA.getName());
	trapB.takeDamage(20);
	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapC.getName());
	trapC.takeDamage(7);
	trapC.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapC.attack(trapB.getName());
	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapC.getName());
	trapC.takeDamage(7);
	trapC.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapC.attack(trapB.getName());
	trapC.beRepaired(5);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	trapA.beRepaired(3);
	return (0);
}
