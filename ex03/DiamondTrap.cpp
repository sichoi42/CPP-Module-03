/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:36:23 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:52:10 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hit_points = F_HP;
	_energy_points = S_EP;
	_attack_damage = F_AD;
	std::cout << "DiamondTrap " << name << " has created!" << std::endl;
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
	std::cout << "Diamond " << _name << " has created!" << std::endl;
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
