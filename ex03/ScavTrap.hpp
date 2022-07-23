/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:01:02 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 15:28:46 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		explicit ScavTrap(std::string name);
		virtual ~ScavTrap();
		ScavTrap(const ScavTrap& st);

		ScavTrap&		operator=(const ScavTrap& st);
		virtual void	attack(const std::string& target);
		virtual void	beRepaired(unsigned int amount);
		void			guardGate(void);
};

#endif
