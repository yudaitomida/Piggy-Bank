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
		std::cout << "�������z����͂��Ă�������" << std::endl;
		std::cin >> data;
		if (data < 0)
		{
			assert(data > 0 && "���߂�");
			//std::cout << "�[�͖����ɂȂ�܂�" << std::endl;
		}
	}
	this->m_money += data;
	
}
void PiggyBank::TakeOut()
{
	std::cout << "�����o�����z����͂��Ă�������" << std::endl;
	int data;
	std::cin >> data;

	if (this->m_money < data)
	{
		std::cout << "�������܂������o���܂���" << std::endl;
	}
	else
	{
		this->m_money -= data;
	}
}
void PiggyBank::Print() const
{
	std::cout << "�c����" << this->m_money <<"�~�ł�"<<  std::endl;
}
