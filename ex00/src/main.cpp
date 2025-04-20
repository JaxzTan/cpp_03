/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:47 by chtan             #+#    #+#             */
/*   Updated: 2025/04/20 22:56:53 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void) {
	std::cout << BLUE_H <<"ex00: ClapTrap start\n" << RESET_H << std::endl;
	std::cout << "### CONSTRUCTORS ###" << std::endl;
	ClapTrap	a("Amelie Nothomb");
	ClapTrap	b("Jean-Pierre Raffarin");

	std::cout << "\n### TESTS ###" << std::endl;
	a.attack("Jean-Pierre Raffarin");
	b.takeDamage(5);
	b.beRepaired(7);
	b.attack("Amelie Nothomb");
	a.takeDamage(8);
	b.attack("Amelie Nothomb");
	a.takeDamage(4);
	a.beRepaired(6);
	for (int i = 0; i <= 8; i++)
		b.attack("Amelie Nothomb");
	std::cout << std::endl;
	return (0);
}

// int	main(void) {
// 	std::cout << BLUE_H <<"ex00: testing version start\n" << RESET_H << std::endl;
// 	std::cout << "### CONSTRUCTORS ###" << std::endl;
// 	ClapTrap	a("ladies");
// 	ClapTrap	b("guy");

// 	std::cout << "\n### TESTS ###" << std::endl;
// 	a.attack("Jean-Pierre Raffarin");
// 	b.takeDamage(5);
// 	b.beRepaired(7);
// 	b.attack("Amelie Nothomb");
// 	a.takeDamage(8);
// 	b.attack("Amelie Nothomb");
// 	a.takeDamage(4);
// 	a.beRepaired(6);
// 	for (int i = 0; i <= 8; i++)
// 		b.attack("Amelie Nothomb");
// 	std::cout << std::endl;
// 	return (0);
// }
