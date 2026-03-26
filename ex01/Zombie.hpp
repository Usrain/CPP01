/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:44:47 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/24 14:48:05 by malebrun         ###   ########.fr       */
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
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce();
		void setName(std::string name);
		
	private :
		std::string name;
};
Zombie* zombieHorde( int N, std::string name );
#endif
