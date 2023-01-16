/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:36 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:33:42 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "default constructor called" << std :: endl;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	this->Hit_points = 10;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "constructor called" << std :: endl;
	this->Name = Name;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	this->Hit_points = 10;
}
ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = ClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& ClapTrap) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->Name = ClapTrap.Name;
	this->Attack_damage = ClapTrap.Attack_damage;
	this->Energy_points = ClapTrap.Energy_points;
	this->Hit_points = ClapTrap.Hit_points;
	return (*this);
}


void ClapTrap :: attack(const std::string& target){
	
	if(this->Energy_points > 0 &&  this->Hit_points > 0)
	{
		this->Energy_points--;
		std::cout << "ClapTrap " << this->Name <<  " attacks " << target << ", causing " << this->Attack_damage
		<< " points of damage!" << std::endl;
	}
	else
		std::cout << "no energy points !" << std::endl;
}

void ClapTrap :: takeDamage(unsigned int amount)
{
	if(this->Hit_points > 0)
	{
		this->Hit_points = this->Hit_points - amount;
	}
	if(this->Hit_points <= 0)
		std::cout<< this->Name << " cannot take Damage!!" << std::endl;
	else
		std::cout << "ClapTrap " << this->Name <<  " has taken  "  << amount << " points of damage!" << std::endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
	if(this->Energy_points > 0 && this->Hit_points > 0)
	{
		this->Energy_points--;
		this->Hit_points = this->Hit_points + amount;
	}
	else
		std::cout << "no energy points !" << std::endl;
}