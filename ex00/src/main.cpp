/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:47 by chtan             #+#    #+#             */
/*   Updated: 2025/04/29 20:59:01 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void) {
	std::cout << "### SIMPLE TEST ###" << std::endl;

	ClapTrap bot("SimpleBot");

	std::cout << "\n-- Attack --" << std::endl;
	bot.attack("Target");

	std::cout << "\n-- Take Damage --" << std::endl;
	bot.takeDamage(3);

	std::cout << "\n-- Repair --" << std::endl;
	bot.beRepaired(5);

	std::cout << "\nTest complete!" << std::endl;
	return 0;
}

// int	main(void) {
// 	std::cout << "### CONSTRUCTORS ###" << std::endl;
// 	ClapTrap	a("Jackie Chan");
// 	ClapTrap	b("Mike Tyson");

// 	std::cout << "\n### TESTS ###" << std::endl;
// 	a.attack("Mike Tyson");
// 	std::cout << std::endl;
// 	b.takeDamage(5);
// 	std::cout << std::endl;
// 	b.beRepaired(7);
// 	std::cout << std::endl;
// 	b.attack("Jackie Chan");
// 	std::cout << std::endl;
// 	a.takeDamage(8);
// 	std::cout << std::endl;
// 	b.attack("Jackie Chan");
// 	std::cout << std::endl;
// 	a.takeDamage(4);
// 	std::cout << std::endl;
// 	a.beRepaired(6);
// 	std::cout << std::endl;
// 	for (int i = 0; i <= 8; i++){
// 		b.attack("Jackie Chan");
// 		std::cout << std::endl;
// 	}
// 	std::cout << "Program end!!" << std::endl;
// 	return (0);
// }
