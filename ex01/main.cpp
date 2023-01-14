/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:44 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/14 22:14:45 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main()
{
	ScavTrap tst("oo");
	tst.attack("hamid");
	std::cout<<tst.get_Energy_points()<< std::endl;
	tst.guardGate();
}