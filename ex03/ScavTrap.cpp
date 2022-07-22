/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:01:06 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:21:42 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << name << " has created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap("ScavTrap")
{
	_name = st._name;
	_hit_points = st._hit_points;
	_energy_points = st._energy_points;
	_attack_damage = st._attack_damage;
	std::cout << "ScavTrap " << _name << " has created!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& st)
{
	if (this != &st)
	{
		_name = st._name;
		_hit_points = st._hit_points;
		_energy_points = st._energy_points;
		_attack_damage = st._attack_damage;
	}
	std::cout << "ScavTrap " << _name << " has created!" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hit_points < 1)
	{
		std::cout << "ScavTrap You don't have hit points!!" << std::endl;
	}
	else if (_energy_points < 1)
	{
		std::cout << "ScavTrap You don't have energy points!!" << std::endl;
	}
	else
	{
		--_energy_points;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_hit_points < 1)
	{
		std::cout << "You don't have hit points!!" << std::endl;
	}
	else if (_energy_points < 1)
	{
		std::cout << "You don't have energy points!!" << std::endl;
	}
	else
	{
		--_energy_points;
		_hit_points += amount;
		if (_hit_points > 100)
			_hit_points = 100;
		std::cout << "ScavTrap " << _name << " repair itself, getting " << amount << " hit points back!!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
