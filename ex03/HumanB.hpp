/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:25:55 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/28 18:16:07 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon *wType);
		void setWeapon(Weapon *w);
		void attack();
	private:
		std::string name;
		Weapon *wType;
};
#endif
