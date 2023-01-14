#include"ScavTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "default constructor called" << std :: endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "constructor called" << std :: endl;
	this->Name = Name;
	this->Attack_damage = 0;
	this->Energy_points = 10;
	this->Hit_points = 10;
}
ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl; 
}

void ClapTrap::set_Hit_points(int hit)
{
	this->Hit_points = hit;
}

int ClapTrap::get_Hit_points() const
{
	return(this->Hit_points);
}

void ClapTrap::set_Attack_damage(int hit)
{
	this->Attack_damage = hit;
}

int ClapTrap::get_Attack_damaget() const
{
	return(this->Attack_damage);
}

void ClapTrap::set_Energy_points(int hit)
{
	this->Energy_points = hit;
}

int ClapTrap::get_Energy_points() const
{
	return(this->Energy_points);
}


void ClapTrap::set_Name(std::string Name)
{
	this->Name = Name;
}

std::string ClapTrap::get_Name() const
{
	return(this->Name);
}

void ClapTrap :: attack(const std::string& target){
	
	if(this->Energy_points > 0)
	{
		this->Energy_points--;
		std::cout << "ClapTrap " << this->Name <<  " attacks " << target << ", causing " << this->Attack_damage
		<< " points of damage!" << std::endl;
	}
	else
		std::cout << "no energy points !" << std::endl;
}

void ClapTrap :: takeDamage(unsigned int amount)
{
	if(this->Hit_points > 0)
	{
		this->Hit_points = this->Hit_points - amount;
	}
	if(this->Hit_points <= 0)
		std::cout<< this->Name << " cannot take Damage!!" << std::endl;
	else
		std::cout << "ClapTrap " << this->Name <<  " has taken  "  << amount << " points of damage!" << std::endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
	if(this->Energy_points > 0)
	{
		this->Energy_points--;
		this->Hit_points = this->Hit_points + amount;
	}
	else
		std::cout << "no energy points !" << std::endl;
}