/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:20 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:38:07 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"ClapTrap.hpp"

class ScavTrap : public  ClapTrap
{
	
public:
	ScavTrap(std::string Name);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &ScavTrap);
  	ScavTrap &operator=(const ScavTrap& ScavTrap);
	

	void set_Hit_points(int hit);
	int get_Hit_points() const;
	int get_Energy_points() const ;
	void set_Energy_points(int hit);
	int get_Attack_damaget() const;
	void set_Attack_damage(int hit);
	std::string get_Name() const;
	void set_Name(std::string Name);
	
	void guardGate() const ;
	void attack(const std::string& target);
	
};