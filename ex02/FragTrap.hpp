/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:06:56 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/22 17:21:20 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& ft);

		FragTrap&	operator=(const FragTrap& ft);
		void		attack(const std::string& target);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys(void);
};

#endif
