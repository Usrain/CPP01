/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:58:01 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/28 18:12:46 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	std::string& reftype = type;
	return (reftype);
}

void Weapon::setType(std::string newtype)
{
	this->type = newtype;
}

Weapon::Weapon( void)
{
	this->type = "";
}

Weapon::Weapon(std::string atype)
{
	this->type = atype;
}
