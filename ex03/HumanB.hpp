/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:25:55 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/24 22:25:17 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
class HumanB
{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon *w);
		void attack();
	private:
		std::string name;
		Weapon *wType;
};
#endif
