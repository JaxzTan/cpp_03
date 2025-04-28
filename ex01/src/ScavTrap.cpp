/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:05:33 by chtan             #+#    #+#             */
/*   Updated: 2025/04/28 10:28:30 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = _initHitPoints;
	this->_energyPoints = _initEnergyPoints;
	this->_attackDamage = _initAttackDamage;
	std::cout << "ScavTrap " << GREEN_H << name << RESET_H << " was set";
	status();
	std::cout << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & input) : ClapTrap(input._name)
{
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "ScavTrap " << GREEN_H << input._name << RESET_H << " was copied and set";
	status();
	std::cout << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "ScavTrap " << GREEN_H << input._name << RESET_H << " was assigned and set";
	status();
	std::cout << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << RED_H << this->_name << RESET_H << " has been destroyed\n";
}

void	ScavTrap::attack(const std::string & target)
{
	std::cout	<< "ScavTrap " << YELLOW_H << this->_name << RESET_H;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< " attacks " << RED_H << target << RESET_H
					<< ", causing " << RED_H << this->_attackDamage << RESET_H << " points of damage!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to attack " << target << ", but has no energyPoints left to perform attack!\n";
	}
	else
	{
		std::cout	<< " tried to attack " << target << ", but is already destroyed!\n";
	}
}

//gate status mode
void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap " << PURPLE_H << this->_name << RESET_H;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< " is now in Gate keeper mode\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to go in Gate keeper mode, but has no energyPoints left to perform guardGate!\n";
	}
	else
	{
		std::cout	<< " tried to go in Gate keeper mode, but is already destroyed!\n";
	}
}

//prints status
void	ScavTrap::status(void)
{
	std::cout	<< " =<[HP (" << GREEN_H << this->_hitPoints << RESET_H << "/" << GREEN_H << _initHitPoints << RESET_H
				<< ") EP (" << YELLOW_H << this->_energyPoints << RESET_H << "/" << YELLOW_H << _initEnergyPoints << RESET_H
				<< ") AD (" << RED_H << this->_attackDamage << RESET_H << ")]>=";
}
