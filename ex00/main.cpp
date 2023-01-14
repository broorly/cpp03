/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:02:35 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/14 16:48:47 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main()
{
	ClapTrap tst("amine");
	ClapTrap tst2("hamid");
	tst.attack(tst2.get_Name());
	tst.takeDamage(5);
	tst.takeDamage(5);
	tst.beRepaired(40);
	tst.takeDamage(5);
	//std :: cout << tst.get_Hit_points();
	
}