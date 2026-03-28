/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:31:53 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/28 18:14:28 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon *w)
{
	this->wType = w;
}

void HumanB::attack()
{
	std::cout << name <<" attacks with their " << wType->getType() << std::endl;
}

HumanB::HumanB(std::string name, Weapon *wType)
{
	this->name = name;
	this->wType = wType;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wType = NULL;
}
