 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:14:15 by chtan             #+#    #+#             */
/*   Updated: 2025/02/20 13:17:50 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define GREEN_H "\033[0;32m" //constructor called
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m" //destructor called
# define BLUE_H "\033[0;34m" // getrawbit
# define YELLOW_H "\033[0;33m" //N/A

class	ClapTrap {

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
	// Constructors
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &toCopy);

	// Destructor
		~ClapTrap(void);

	// Overload operator
		ClapTrap &operator = (const ClapTrap &toCopy);

	// Public methods
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
