/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:25:47 by chtan             #+#    #+#             */
/*   Updated: 2025/04/28 10:23:20 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = _initHitPoints;
	this->_energyPoints = _initEnergyPoints;
	this->_attackDamage = _initAttackDamage;
	std::cout << "FragTrap " << GREEN_H << name << RESET_H << " was set";
	status();
	std::cout << std::endl;
}

FragTrap::FragTrap(FragTrap const & input) : ClapTrap(input._name)
{
	this->_hitPoints = input._hitPoints;
	this->_energyPoints = input._energyPoints;
	this->_attackDamage = input._attackDamage;
	std::cout << "FragTrap " << GREEN_H << input._name << RESET_H << " was copied and set";
	status();
	std::cout << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & input)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << RED_H << this->_name << RESET_H << " has been destroyed\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << PURPLE_H << this->_name << RESET_H;
	status();
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout	<< " is giving high fives!\n";
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< " tried to give high fives, but has no energyPoints left to perform guardGate!\n";
	}
	else
	{
		std::cout	<< " tried to give high fives, but is already destroyed!\n";
	}
}

void	FragTrap::status(void)
{
	std::cout	<< " =<[HP (" << GREEN_H << this->_hitPoints << RESET_H << "/" << GREEN_H << _initHitPoints << RESET_H
				<< ") EP (" << YELLOW_H << this->_energyPoints << RESET_H << "/" << YELLOW_H << _initEnergyPoints << RESET_H
				<< ") AD (" << RED_H << this->_attackDamage << RESET_H << ")]>=";
}
