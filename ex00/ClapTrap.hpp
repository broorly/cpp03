/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:02:33 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/14 18:35:26 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

class ClapTrap
{
private:
	std::string Name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;
public:
	ClapTrap(std::string Name);
	ClapTrap();
	~ClapTrap();

	void set_Hit_points(int hit);
	int get_Hit_points() const;
	int get_Energy_points() const ;
	void set_Energy_points(int hit);
	int get_Attack_damaget() const;
	void set_Attack_damage(int hit);
	std::string get_Name() const;
	void set_Name(std::string Name);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};




