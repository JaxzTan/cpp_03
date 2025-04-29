/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:25:39 by chtan             #+#    #+#             */
/*   Updated: 2025/04/29 11:48:25 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const & input);
	FragTrap & operator=(FragTrap const & input);
	~FragTrap(void);

	void	highFivesGuys(void);

private:

	void	status(void);

protected:

	static unsigned int const _initHitPoints = 100;
	static unsigned int const _initEnergyPoints = 100;
	static unsigned int const _initAttackDamage = 30;

};

#endif
