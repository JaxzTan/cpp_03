/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:09:00 by chtan             #+#    #+#             */
/*   Updated: 2025/04/18 12:09:11 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");

	trapB.guardGate();
	trapA.attack(trapB.getName());
	trapB.takeDamage(20);
	trapA.attack(trapB.getName());
	trapB.takeDamage(20);
	trapB.attack(trapA.getName());
	trapA.takeDamage(7);
	trapA.beRepaired(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());
	trapA.takeDamage(7);
	trapA.attack(trapA.getName());
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);
	trapA.attack(trapB.getName());
	trapB.beRepaired(5);
	trapA.beRepaired(3);

	return (0);
}
