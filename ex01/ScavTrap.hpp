/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:01:13 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:35:25 by mrafik           ###   ########.fr       */
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

		void guardGate() const ;
		void attack(const std::string& target);
	
};