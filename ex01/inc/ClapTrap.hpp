#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# define COLOR_DEFAULT "\x1b[0m"
# define COLOR_RED "\x1b[31m"
# define COLOR_GREEN "\x1b[32m"
# define COLOR_YELLOW "\x1b[33m"
# define COLOR_BLUE "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_WHITE "\x1b[37m"

# define GREEN_H "\033[0;32m" //constructor called
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m" //destructor called
# define BLUE_H "\033[0;34m" // getrawbit
# define YELLOW_H "\033[0;33m" //N/A

class	ClapTrap
{

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

private:

	void		constructorCall(std::string type);
	void		status(void);

	static unsigned int const _initHitPoints = 10;
	static unsigned int const _initEnergyPoints = 10;
	static unsigned int const _initAttackDamage = 0;
};

#endif
