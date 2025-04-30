/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:05:36 by chtan             #+#    #+#             */
/*   Updated: 2025/04/30 12:12:33 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

// virtual public here is mean scavtrap inherit from claptrap
// and claptrap is a virtual base class(parent base class)
class	ScavTrap : virtual public ClapTrap
{
	
	private:
		void	status(void);
	
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & input);
		ScavTrap & operator=(ScavTrap const & input);
		~ScavTrap(void);

		void	attack(const std::string & target);
		void	guardGate(void);

	protected:
		static unsigned int const _initHitPoints = 100;
		static unsigned int const _initEnergyPoints = 50;
		static unsigned int const _initAttackDamage = 20;

};

#endif
