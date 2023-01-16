/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:47 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:32:46 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std :: endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "ScavTrap constructor with parametre  called" << std :: endl;
	this->Name = Name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl; 
}
ScavTrap::ScavTrap(const ScavTrap &ScavTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& ScavTrap) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = ScavTrap.Name;
	this->Attack_damage = ScavTrap.Attack_damage;
	this->Energy_points = ScavTrap.Energy_points;
	this->Hit_points = ScavTrap.Hit_points;
	return (*this);
}

void ScavTrap :: attack(const std::string& target){
	
	if(this->Energy_points > 0)
	{
		this->Energy_points--;
		std::cout << "ScavTrap " << this->Name <<  " attacks " << target << ", causing " << this->Attack_damage
		<< " points of damage!" << std::endl;
	}
	else
		std::cout << " ScavTrap no energy points !" << std::endl;
}

void ScavTrap :: guardGate() const
{
	std::cout<< "ScavTrap" << this->Name << " is now in Gate keeper mode." << std:: endl;
}