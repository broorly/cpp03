#include<iostream>
#include"ClapTrap.hpp"

class ScavTrap : public  ClapTrap
{
private:
	std::string Name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;
public:
	ScavTrap(std::string Name);
	ScavTrap();
	~ScavTrap();

	void set_Hit_points(int hit);
	int get_Hit_points() const;
	int get_Energy_points() const ;
	void set_Energy_points(int hit);
	int get_Attack_damaget() const;
	void set_Attack_damage(int hit);
	std::string get_Name() const;
	void set_Name(std::string Name);
	
	void guardGate() const ;
	void attack(const std::string& target);
	
};