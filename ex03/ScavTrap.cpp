/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:15 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/14 22:14:16 by mrafik           ###   ########.fr       */
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

void ScavTrap::set_Hit_points(int hit)
{
	this->Hit_points = hit;
}

int ScavTrap::get_Hit_points() const
{
	return(this->Hit_points);
}

void ScavTrap::set_Attack_damage(int hit)
{
	this->Attack_damage = hit;
}

int ScavTrap::get_Attack_damaget() const
{
	return(this->Attack_damage);
}

void ScavTrap::set_Energy_points(int hit)
{
	this->Energy_points = hit;
}

int ScavTrap::get_Energy_points() const
{
	return(this->Energy_points);
}


void ScavTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

std::string ScavTrap::get_Name() const
{
	return(this->Name);
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