/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:58:01 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/24 22:23:04 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

const std::string& Weapon::getType()
{
	std::string& reftype = Weapon.type;
	return (reftype);
}

void Weapon::setType(std::string newtype)
{
	this->Type = newtype;
}

std::string Weapon::getType()
{
	return (this->type);
}
