/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 21:52:09 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/28 18:27:19 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wType) : wType(wType)
{
	this->name = name;
}

void HumanA::attack()
{
	std::string tmpstr;

	tmpstr = wType.getType();
	std::cout << name <<" attacks with their " << wType.getType() 
	<< std::endl;
}
