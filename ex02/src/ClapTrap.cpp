/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:23:08 by chtan             #+#    #+#             */
/*   Updated: 2025/04/28 10:21:18 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(_initHitPoints), _energyPoints(_initEnergyPoints), _attackDamage(_initAttackDamage)
{
	constructorCall("set");
}

ClapTrap::ClapTrap(ClapTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	constructorCall("copied");
}

ClapTrap & ClapTrap::operator=(ClapTrap const & input)
{
	this->_name = input._name;
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	constructorCall("assigned");
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << RED_H << this->_name << RESET_H << " has been destroyed\n";
}

void	ClapTrap::attack(const std::string & target)
{
	std::cout	<< "ClapTrap " << YELLOW_H << this->_name << RESET_H;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout	<< "ClapTrap " << RED_H << this->_name << RESET_H;
	status();
	std::cout	<< " has taken " << RED_H << amount << RESET_H << " points of damage!\n";
	if (this->_hitPoints <= 0)
	{
		std::cout	<< "ClapTrap " << RED_H << this->_name << RESET_H;
		status();
		std::cout	<< " has taken to much damage and has been destroyed!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "ClapTrap " << GREEN_H << this->_name << RESET_H;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		if (amount + _hitPoints >= _initHitPoints)
			this->_hitPoints = _initHitPoints;
		else
			this->_hitPoints += amount;
		std::cout	<< " repaired by " << GREEN_H << amount << RESET_H << " hit points!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to repair by " << YELLOW_H << amount << RESET_H << " hit points"
					<< ", but has no energyPoints left to perform repair!\n";
	}
	else
	{
		std::cout	<< " tried to repair by "
					<< YELLOW_H << amount << RESET_H << " hit points"
					<< ", but is already destroyed!\n";
	}
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

void		ClapTrap::constructorCall(std::string type)
{
	std::cout	<< "ClapTrap " << GREEN_H << this->_name << RESET_H << " was " << type << " with";
	status();
	std::cout << std::endl;
}

void	ClapTrap::status(void)
{
	std::cout	<< " =<[HP (" << GREEN_H << this->_hitPoints << RESET_H << "/" << GREEN_H << _initHitPoints << RESET_H
				<< ") EP (" << YELLOW_H << this->_energyPoints << RESET_H << "/" << YELLOW_H << _initEnergyPoints << RESET_H
				<< ") AD (" << RED_H << this->_attackDamage << RESET_H << ")]>=";
}
