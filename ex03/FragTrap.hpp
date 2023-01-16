/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:09 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/16 19:38:30 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"ClapTrap.hpp"

class FragTrap :virtual public  ClapTrap
{
public:
	FragTrap(std::string Name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &FragTrap);
  	FragTrap &operator=(const FragTrap& FragTrap);


	
	void highFivesGuys(void) const;
};