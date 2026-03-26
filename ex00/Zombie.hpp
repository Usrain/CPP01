/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:44:47 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/24 14:19:53 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cctype>
# include <string>

class Zombie
{
	public :
		void announce(void);
		Zombie(std::string name);
		~Zombie();
	private :
		std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
