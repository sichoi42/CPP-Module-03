/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:01:02 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:01:02 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap& st);

		ScavTrap&	operator=(const ScavTrap& st);
		void		attack(const std::string& target);
		void		beRepaired(unsigned int amount);
		void		guardGate(void);
};

#endif
