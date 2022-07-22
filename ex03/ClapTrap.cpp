/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:09:18 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 16:18:33 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << name << " has created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has destroyed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& ct)
{
	_name = ct.getName();
	_hit_points = ct.getHitPoints();
	_energy_points = ct.getEnergyPoints();
	_attack_damage = ct.getAttackDamage();
	std::cout << "ClapTrap " << _name << " has created!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& ct)
{
	if (this != &ct)
	{
		_name = ct.getName();
		_hit_points = ct.getHitPoints();
		_energy_points = ct.getEnergyPoints();
		_attack_damage = ct.getAttackDamage();
	}
	return (*this);
}

void	ClapTrap::print(void)
{
	std::cout << "name: " << _name << std::endl;
	std::cout << "hit points: " << _hit_points << std::endl;
	std::cout << "energy points: " << _energy_points << std::endl;
	std::cout << "attack damage: " << _attack_damage << std::endl;
}

void	ClapTrap::attack(const std::string& target)
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
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= amount)
		_hit_points = 0;
	else
		_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " take " << amount << " damage!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
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
		if (_hit_points > 10)
			_hit_points = 10;
		std::cout << "ClapTrap " << _name << " repair itself, getting " << amount << " hit points back!!" << std::endl;
	}
}

std::string	ClapTrap::getName(void) const
{
	return ( _name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hit_points)
{
	_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(unsigned int energy_points)
{
	_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(unsigned int attack_damage)
{
	_attack_damage = attack_damage;
}
