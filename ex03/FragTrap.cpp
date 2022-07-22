/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:08:44 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:37:43 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FraTrap " << name << " has created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap("FragTrap")
{
	_name = ft._name;
	_hit_points = ft._hit_points;
	_energy_points = ft._energy_points;
	_attack_damage = ft._attack_damage;
	std::cout << "FragTrap " << _name << " has created!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ft)
{
	if (this != &ft)
	{
		_name = ft._name;
		_hit_points = ft._hit_points;
		_energy_points = ft._energy_points;
		_attack_damage = ft._attack_damage;
	}
	std::cout << "FragTrap " << _name << " has created!" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (_hit_points < 1)
	{
		std::cout << "FragTrap You don't have hit points!!" << std::endl;
	}
	else if (_energy_points < 1)
	{
		std::cout << "FragTrap You don't have energy points!!" << std::endl;
	}
	else
	{
		--_energy_points;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
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
		std::cout << "FragTrap " << _name << " repair itself, getting " << amount << " hit points back!!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " Hey high five guys!! 🤚" << std::endl;
}
