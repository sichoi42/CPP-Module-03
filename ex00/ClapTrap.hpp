/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:09:21 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/20 18:58:58 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap& ct);

		ClapTrap&		operator=(ClapTrap& ct);
		void			print(void);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		void			setName(void);
		void			setHitPoints(unsigned int hit_points);
		void			setEnergyPoints(unsigned int energy_points);
		void			setAttackDamage(unsigned int attack_damage);
};

#endif
