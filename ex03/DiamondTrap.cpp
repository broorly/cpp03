/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:01 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/14 23:43:38 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout <<"DiamondTrap default constructor called" << std::endl;
	this->Name = Name;
	this->Hit_points = this->FragTrap::get_Hit_points();
	this->Energy_points = this->ScavTrap::get_Energy_points();
	this->Attack_damage = this->FragTrap::get_Attack_damaget();
}

DiamondTrap::~DiamondTrap()
{
	std::cout <<"DiamondTrap deafult destructor called" << std::endl;
}
void DiamondTrap :: whoAmI() const
{

}
void DiamondTrap :: attack(std :: string target)
{
	this->ScavTrap::attack(target);
}
void DiamondTrap::set_Hit_points(int hit)
{
	this->Hit_points = hit;
}

int DiamondTrap::get_Hit_points() const
{
	return(this->Hit_points);
}

void DiamondTrap::set_Attack_damage(int hit)
{
	this->Attack_damage = hit;
}

int DiamondTrap::get_Attack_damaget() const
{
	return(this->Attack_damage);
}

void DiamondTrap::set_Energy_points(int hit)
{
	this->Energy_points = hit;
}

int DiamondTrap::get_Energy_points() const
{
	return(this->Energy_points);
}


void DiamondTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

std::string DiamondTrap::get_Name() const
{
	return(this->Name);
}