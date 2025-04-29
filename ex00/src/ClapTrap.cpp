/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:02 by chtan             #+#    #+#             */
/*   Updated: 2025/04/29 21:10:52 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/**
 * @brief Default constructor
 * @param name Name of the ClapTrap
 */
ClapTrap::ClapTrap(void) {
	std::cout << GREEN_H << "ClapTrap default constructor called" << RESET_H <<std::endl;
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

/**
 * @brief parameterized constructor
 * @param beside of name all set to default
 */
ClapTrap::ClapTrap(std::string name) {
	std::cout << GREEN_H <<"ClapTrap set name constructor called" << RESET_H << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

/**
 * @brief Copy constructor
 * @param toCopy ClapTrap object to copy
 */
ClapTrap::ClapTrap(const ClapTrap& toCopy)
	: _name(toCopy._name), _hitPoints(toCopy._hitPoints), _energyPoints(toCopy._energyPoints), _attackDamage(toCopy._attackDamage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

// ClapTrap::ClapTrap(const ClapTrap& toCopy) {
// 	std::cout << "ClapTrap copy constructor called" << std::endl;
// 	*this = toCopy;
// 	return ;
// }

/**
 * @brief Copy assignment operator
 */
ClapTrap& ClapTrap::operator=(const ClapTrap &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->_name = toCopy._name;
	this->_hitPoints = toCopy._hitPoints;
	this->_energyPoints = toCopy._energyPoints;
	this->_attackDamage = toCopy._attackDamage;
	return (*this);
}

// @brief Destructor
ClapTrap::~ClapTrap(void) {
	std::cout << RED_H <<"ClapTrap destructor called" << RESET_H <<std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << ATTACK_H << " is dead, it can't attack" << RESET_H <<std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << ATTACK_H << " can't attacks" << RESET_H <<std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << ATTACK_H <<" attacks " << RESET_H <<target << std::flush;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << TAKEDAMAGE << " is dead, it can't takes damages" << RESET_H <<std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << TAKEDAMAGE <<" takes " <<  RESET_H << amount << " of damages" << std::endl;
		if (this->_hitPoints > amount) {
			this->_hitPoints -= amount;
			std::cout << "Now his life is " << this->_hitPoints << TAKEDAMAGE << " points." << RESET_H << std::endl;
		}
		else {
			this->_hitPoints = 0;
			std::cout << "ClapTrap " << this->_name << TAKEDAMAGE << " is now dead" << RESET_H << std::endl;
		}
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << REPAIRED_H << " is dead, it can't be repaired" << RESET_H << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << REPAIRED_H << " can't be repaired" << RESET_H << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << REPAIRED_H << " repaired " << RESET_H <<amount << " point of life" << std::endl;
		this->_hitPoints += amount;
		std::cout << "Now his life is " << this->_hitPoints  << REPAIRED_H << " points." << RESET_H << std::endl;
		this->_energyPoints--;
	}
	return ;
}
