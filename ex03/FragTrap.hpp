/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:06:56 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:47:02 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define F_HP 100
# define F_EP 100
# define F_AD 30
# define S_HP 100
# define S_EP 50
# define S_AD 20

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		explicit FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& ft);

		FragTrap&	operator=(const FragTrap& ft);
		void		attack(const std::string& target);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys(void);
};

#endif
