/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:56:48 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 15:31:26 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap a("a");
	FragTrap b("b");
	DiamondTrap c("c");

	a.print();
	b.print();
	c.print();
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	b.attack("c");
	c.takeDamage(b.getAttackDamage());
	c.attack("a");
	a.takeDamage(c.getAttackDamage());
	a.print();
	b.print();
	c.print();
	a.beRepaired(10);
	b.beRepaired(10);
	c.beRepaired(10);
	a.print();
	b.print();
	c.print();
	a.guardGate();
	b.highFivesGuys();
	c.whoAmI();
	return (0);
}
