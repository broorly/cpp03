#include"ScavTrap.hpp"

int main()
{
	ScavTrap tst("oo");
	tst.attack("hamid");
	std::cout<<tst.get_Energy_points()<< std::endl;
	tst.guardGate();
}