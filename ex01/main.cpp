/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:56:48 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:03:54 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("a");
	ScavTrap b("b");
	a.print();
	b.print();
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	a.print();
	b.print();
	b.beRepaired(b.getAttackDamage());
	b.print();
	b.guardGate();
	return (0);
}
