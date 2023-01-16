/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:02:33 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:28:22 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include<iostream>
#include<string>
class ClapTrap
{
protected:
	std::string Name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;
public:
	ClapTrap(std::string Name);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &ClapTrap);
  	ClapTrap &operator=(const ClapTrap& ClapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};




