/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:44 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/15 13:16:16 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
	ScavTrap tst("BROOLY");
	
	tst.attack("TARGET");
	tst.beRepaired(40);
	tst.takeDamage(5);
	tst.guardGate();
}