/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:06 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:45:56 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std :: endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "FragTrap constructor with parametre  called" << std :: endl;
	this->Name = Name;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl; 
}
FragTrap::FragTrap(const FragTrap &FragTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap& FragTrap) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = FragTrap.Name;
	this->Attack_damage = FragTrap.Attack_damage;
	this->Energy_points = FragTrap.Energy_points;
	this->Hit_points = FragTrap.Hit_points;
	return (*this);
}
void FragTrap:: highFivesGuys(void) const
{
	std::cout<< "FragTrap" << this->Name << " high five" << std::endl;
}