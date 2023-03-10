/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:18 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 20:35:48 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"ClapTrap.hpp"

class ScavTrap : virtual public  ClapTrap
{
public:
	ScavTrap(std::string Name);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &ScavTrap);
  	ScavTrap &operator=(const ScavTrap& ScavTrap);


	
	void guardGate() const ;
	void attack(const std::string& target);
	
};