/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:50:48 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/28 18:10:12 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon( void );
		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string newtype);
		std::string gType();
	private:
		std::string type;
};
#endif
