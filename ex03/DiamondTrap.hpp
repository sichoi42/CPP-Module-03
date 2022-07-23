/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:32:54 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/23 15:30:32 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# define F_HP 100
# define F_EP 100
# define F_AD 30
# define S_HP 100
# define S_EP 50
# define S_AD 20

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		explicit DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& dt);

		DiamondTrap&	operator=(const DiamondTrap& dt);
		void			attack(const std::string& target);
		void			beRepaired(unsigned int amount);
		void			whoAmI(void);

};

#endif
