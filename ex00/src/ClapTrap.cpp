/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:18:02 by chtan             #+#    #+#             */
/*   Updated: 2025/04/18 11:54:40 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/**
 * @brief Default constructor
 * @param name Name of the ClapTrap
 */
ClapTrap::ClapTrap(void) {
	std::cout << GREEN_H <<"ClapTrap default constructor called" << RESET_H <<std::endl;
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
		std::cout << "ClapTrap " << this->_name << " is dead, it can't attack" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't attacks" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << std::flush;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead, it can't takes damages" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damages" << std::endl;
		if (this->_hitPoints > amount) {
			this->_hitPoints -= amount;
			std::cout << "Now his life is " << this->_hitPoints << " points." << std::endl;
		}
		else {
			this->_hitPoints = 0;
			std::cout << "ClapTrap " << this->_name << " is now dead" << std::endl;
		}
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead, it can't be repaired" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired" << std::endl;
	else {
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " point of life" << std::endl;
		this->_hitPoints += amount;
		std::cout << "Now his life is " << this->_hitPoints << " points." << std::endl;
		this->_energyPoints--;
	}
	return ;
}
