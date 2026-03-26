/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:52:09 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/26 16:02:27 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon wType&)
{
	this->name = name;
	this->wType = wType;
}

void HumanA::attack()
{
	std::string tmpstr;

	if (this->weapon)
		tmpstr = weapon->getType;
	else
		tmpstr = "NULL";
	std::cout << this->name <<" attacks with their " << this->Weapon->getType() 
	<< std::endl;
}
