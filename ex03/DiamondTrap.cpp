/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:01 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 20:54:22 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name)
{
	std::cout <<"DiamondTrap constructor with parametre  called" << std::endl;
	this->Name = Name;
	ClapTrap::Name = Name+ "_clap_name";
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout <<"DiamondTrap deafult destructor called" << std::endl;
}
void DiamondTrap :: whoAmI() const
{
	std::cout<<"DiamondTrap Name  " << Name << std::endl;
	std::cout<< "ClapTrap Name  "<<ClapTrap::Name << std::endl;

}
DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) {
	std::cout << "Copy constructor called" << std::endl;
	*this = DiamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& DiamondTrap) {
	std::cout << "Copy assignment operator called" << std::endl;
	Name = DiamondTrap.Name;
	Attack_damage = DiamondTrap.Attack_damage;
	Energy_points = DiamondTrap.Energy_points;
	Hit_points = DiamondTrap.Hit_points;
	return (*this);
}

void DiamondTrap :: attack(std :: string target)
{
	this->ScavTrap::attack(target);
}