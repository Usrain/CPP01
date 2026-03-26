/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:40:02 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/24 14:51:04 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Creation of a horde of 10 edi-maio :" << std::endl;
	Zombie *myHorde = zombieHorde(10, "edi-maio");
	int i = 0;
	while (i < 10)
	{
		std::cout << "index=" << i  << "    ";
		myHorde[i].announce();
		i++;
	}
	delete[] myHorde;
}
