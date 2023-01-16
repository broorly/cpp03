/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:13:51 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:38:47 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>
#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class DiamondTrap : public  FragTrap , public ScavTrap
{
private:
	std::string Name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;
public:
	DiamondTrap(std::string Name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &DiamondTrap);
  	DiamondTrap &operator=(const DiamondTrap& DiamondTrap);

	void set_Hit_points(int hit);
	int get_Hit_points() const;
	int get_Energy_points() const ;
	void set_Energy_points(int hit);
	int get_Attack_damaget() const;
	void set_Attack_damage(int hit);
	std::string get_Name() const;
	void set_Name(std::string Name);

	void whoAmI()const;
	void attack(std:: string target);
};


