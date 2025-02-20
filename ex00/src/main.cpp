/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:12:47 by chtan             #+#    #+#             */
/*   Updated: 2025/02/20 13:14:14 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void) {
	ClapTrap	a("Amelie Nothomb");
	ClapTrap	b("Jean-Pierre Raffarin");

	std::cout << "\n### TESTS ###\n" << std::endl;
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
