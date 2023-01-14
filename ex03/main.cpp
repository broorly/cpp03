/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:12 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/14 23:45:03 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

int main(void)
{
	DiamondTrap tst("ananan");

	tst.attack("hamid");
	std::cout<<tst.get_Attack_damaget()<<std::endl;
	std::cout<<tst.get_Energy_points()<<std::endl;
	std::cout<<tst.get_Hit_points()<<std::endl;
	
}