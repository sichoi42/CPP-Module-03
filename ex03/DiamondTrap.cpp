/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:36:23 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 15:30:41 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	_name = name;
	_hit_points = F_HP;
	_energy_points = S_EP;
	_attack_damage = F_AD;
	std::cout << "DiamondTrap " << _name << " has created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " has destroyed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt) : ClapTrap("ClapTrap"), ScavTrap("ScavTrap"), FragTrap("FragTrap")
{
	_name = dt._name;
	_hit_points = dt._hit_points;
	_energy_points = dt._energy_points;
	_attack_damage = dt._attack_damage;
	std::cout << "DiamondTrap " << _name << " has created!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& dt)
{
	if (this != &dt)
	{
		_name = dt._name;
		_hit_points = dt._hit_points;
		_energy_points = dt._energy_points;
		_attack_damage = dt._attack_damage;
	}
	std::cout << "DiamondTrap " << _name << " has created!" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	FragTrap::attack(target);
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << "my name is " << _name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}
