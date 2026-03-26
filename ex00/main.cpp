/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:05:12 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/24 14:21:50 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "Creation with Zombie (no allocation)" << std::endl;
    std::string name1;
    std::cout << "first zombie name: ";
    std::cin >> name1;
    Zombie z(name1);
    z.announce();

    std::cout << "Creation with NewZombie (allocation)" << std::endl;
    std::string name2;
    std::cout << "second zombie name: ";
    std::cin >> name2;
    Zombie* sz = newZombie(name2);
	sz->announce();

    std::cout << "Creation with randomChump (no allocation)" << std::endl;
    std::string name3;
    std::cout << "third zombie name: ";
    std::cin >> name3;
    randomChump(name3);

    std::cout << "Destruction of the allocated should happen" << std::endl;
    delete sz;
}
