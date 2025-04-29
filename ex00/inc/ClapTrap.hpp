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
#include <string>

# define GREEN_H	"\033[0;32m" // constructor called
# define RESET_H	"\033[0m"
# define RED_H		"\033[0;31m" // destructor called
# define TAKEDAMAGE	"\033[0;34m" // 
# define REPAIRED_H	"\033[0;33m" //  
# define ATTACK_H	"\033[0;95m" // purple

typedef std::string string;

class	ClapTrap {

	private:
		string			_name;
		unsigned int	_hitPoints; //life
		unsigned int	_energyPoints; //mana
		unsigned int	_attackDamage; //damage

	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(string name);
		ClapTrap(const ClapTrap &toCopy);
		ClapTrap &operator = (const ClapTrap &toCopy);

	// Destructor
		~ClapTrap(void);

	// Public methods
		void	attack(const string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
