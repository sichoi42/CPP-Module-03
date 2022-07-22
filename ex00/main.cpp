/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:56:48 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 16:17:54 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("a");
	ClapTrap b("b");
	a.print();
	b.print();
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	a.print();
	b.print();
	b.beRepaired(5);
	b.print();
	return (0);
}
