/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:47 by chtan             #+#    #+#             */
/*   Updated: 2025/04/26 11:05:23 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void) {
	std::cout << "### CONSTRUCTORS ###" << std::endl;
	ClapTrap	a("Jackie Chan");
	ClapTrap	b("Mike Tyson");

	std::cout << "\n### TESTS ###" << std::endl;
	a.attack("Mike Tyson");
	std::cout << std::endl;
	b.takeDamage(5);
	std::cout << std::endl;
	b.beRepaired(7);
	std::cout << std::endl;
	b.attack("Jackie Chan");
	std::cout << std::endl;
	a.takeDamage(8);
	std::cout << std::endl;
	b.attack("Jackie Chan");
	std::cout << std::endl;
	a.takeDamage(4);
	std::cout << std::endl;
	a.beRepaired(6);
	std::cout << std::endl;
	for (int i = 0; i <= 8; i++){
		b.attack("Jackie Chan");
		std::cout << std::endl;
	}
	std::cout << "Program end!!" << std::endl;
	return (0);
}

// int	main(void) {
// 	std::cout << BLUE_H <<"ex00: testing version start\n" << RESET_H << std::endl;
// 	std::cout << "### CONSTRUCTORS ###" << std::endl;
// 	ClapTrap	a("ladies");
// 	ClapTrap	b("guy");

// 	std::cout << "\n### TESTS ###" << std::endl;
// 	a.attack("Mike Tyson");
// 	b.takeDamage(5);
// 	b.beRepaired(7);
// 	b.attack("Jackie Chan");
// 	a.takeDamage(8);
// 	b.attack("Jackie Chan");
// 	a.takeDamage(4);
// 	a.beRepaired(6);
// 	for (int i = 0; i <= 8; i++)
// 		b.attack("Jackie Chan");
// 	std::cout << std::endl;
// 	return (0);
// }
