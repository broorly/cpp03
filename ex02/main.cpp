/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:14:25 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/15 13:20:36 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

int main()
{
	FragTrap tst("BROOLY");

	tst.highFivesGuys();
	tst.attack("TARGET");
	std::cout << tst.get_Energy_points()<<std::endl;
	tst.beRepaired(40);
	tst.takeDamage(5);
}