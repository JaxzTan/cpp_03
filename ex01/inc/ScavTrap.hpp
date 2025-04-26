/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:05:36 by chtan             #+#    #+#             */
/*   Updated: 2025/04/26 15:33:57 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{

	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & input);
		ScavTrap & operator=(ScavTrap const & input);
		~ScavTrap(void);

		void	attack(const std::string & target);
		void	guardGate(void);

	private:
		void	status(void);

	protected:
		static unsigned int const _initHitPoints = 100;
		static unsigned int const _initEnergyPoints = 50;
		static unsigned int const _initAttackDamage = 20;

};

#endif
