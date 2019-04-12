#include"PiggyBank.h"
#include<iostream>
#include<cassert>
PiggyBank::PiggyBank()
{
	this->m_money = 0;
}
PiggyBank::~PiggyBank()
{

}
void PiggyBank::Save()
{
	int data = -1;

	while (data < 0)
	{
		std::cout << "“ü‚ê‚é‹àŠz‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
		std::cin >> data;
		if (data < 0)
		{
			assert(data > 0 && "‚¾‚ß‚¾");
			//std::cout << "[‚Í–³Œø‚É‚È‚è‚Ü‚·" << std::endl;
		}
	}
	this->m_money += data;
	
}
void PiggyBank::TakeOut()
{
	std::cout << "Ž‚¿o‚·‹àŠz‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	int data;
	std::cin >> data;

	if (this->m_money < data)
	{
		std::cout << "‘½‚·‚¬‚Ü‚·Ž‚¿o‚¹‚Ü‚¹‚ñ" << std::endl;
	}
	else
	{
		this->m_money -= data;
	}
}
void PiggyBank::Print() const
{
	std::cout << "Žc‚‚Í" << this->m_money <<"‰~‚Å‚·"<<  std::endl;
}
