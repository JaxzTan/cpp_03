/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:09:00 by chtan             #+#    #+#             */
/*   Updated: 2025/04/29 21:04:54 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main(void)
{
	std::cout << "### SIMPLE TEST WITH CLAPTRAP & SCAVTRAP ###" << std::endl;

	ClapTrap	trapA("Alice");
	ScavTrap	trapB("Bob");

	std::cout << "\n-- ScavTrap special mode --" << std::endl;
	trapB.guardGate();

	std::cout << "\n-- ClapTrap attacks ScavTrap --" << std::endl;
	trapA.attack(trapB.getName());
	trapB.takeDamage(5);

	std::cout << "\n-- ScavTrap attacks ClapTrap --" << std::endl;
	trapB.attack(trapA.getName());
	trapA.takeDamage(7);

	std::cout << "\n-- Both repair themselves --" << std::endl;
	trapA.beRepaired(4);
	trapB.beRepaired(6);

	std::cout << "\n### TEST END ###" << std::endl;
	return 0;
}

// int	main(void)
// {
// 	ClapTrap	trapA("Hugo");
// 	ScavTrap	trapB("Tom");

// 	trapB.guardGate();
// 	trapA.attack(trapB.getName());
// 	trapB.takeDamage(20);
// 	trapA.attack(trapB.getName());
// 	trapB.takeDamage(20);
// 	trapB.attack(trapA.getName());
// 	trapA.takeDamage(7);
// 	trapA.beRepaired(5);
// 	trapB.attack(trapA.getName());
// 	trapA.takeDamage(5);
// 	trapA.beRepaired(5);
// 	trapB.attack(trapA.getName());
// 	trapA.takeDamage(2);
// 	trapA.attack(trapB.getName());
// 	trapB.takeDamage(2);
// 	trapB.attack(trapA.getName());
// 	trapA.takeDamage(7);
// 	trapA.attack(trapA.getName());
// 	trapA.takeDamage(5);
// 	trapA.beRepaired(3);
// 	trapB.attack(trapA.getName());
// 	trapA.takeDamage(2);
// 	trapA.attack(trapB.getName());
// 	trapB.beRepaired(5);
// 	trapA.beRepaired(3);

// 	return (0);
// }
