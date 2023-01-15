/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:31 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/15 13:19:49 by mrafik           ###   ########.fr       */
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

void FragTrap::set_Hit_points(int hit)
{
	this->Hit_points = hit;
}

int FragTrap::get_Hit_points() const
{
	return(this->Hit_points);
}

void FragTrap::set_Attack_damage(int hit)
{
	this->Attack_damage = hit;
}

int FragTrap::get_Attack_damaget() const
{
	return(this->Attack_damage);
}

void FragTrap::set_Energy_points(int hit)
{
	this->Energy_points = hit;
}

int FragTrap::get_Energy_points() const
{
	return(this->Energy_points);
}


void FragTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

std::string FragTrap::get_Name() const
{
	return(this->Name);
}
void FragTrap:: highFivesGuys(void) const
{
	std::cout<< "FragTrap " << this->Name << " high five" << std::endl;
}