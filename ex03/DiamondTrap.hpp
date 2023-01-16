/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:13:51 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 20:34:22 by mrafik           ###   ########.fr       */
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
public:
	DiamondTrap(std::string Name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &DiamondTrap);
  	DiamondTrap &operator=(const DiamondTrap& DiamondTrap);


	void whoAmI()const;
	void attack(std:: string target);
};


