#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

# define GREEN_H "\033[0;32m" //constructor called
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m" //destructor called
# define BLUE_H "\033[0;34m" // getrawbit
# define YELLOW_H "\033[0;33m" //N/A
# define PURPLE_H "\033[0;35m" //N/A

// # define GREEN_H "\033[0m" //constructor called
// # define RESET_H "\033[0m"
// # define RED_H "\033[0m" //destructor called
// # define BLUE_H "\033[0m" // getrawbit
// # define YELLOW_H "\033[0m" //N/A
// # define PURPLE_H "\033[0m" //N/A

class	ClapTrap
{
	
	private:
		void		constructorCall(std::string type);
		void		status(void);

		static unsigned int const _initHitPoints = 10;
		static unsigned int const _initEnergyPoints = 10;
		static unsigned int const _initAttackDamage = 0;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & input);
		ClapTrap & operator=(ClapTrap const & input);
		~ClapTrap(void);

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void);

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
