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
		std::cout << "入れる金額を入力してください" << std::endl;
		std::cin >> data;
		if (data < 0)
		{
			assert(data > 0 && "だめだ");
			//std::cout << "ーは無効になります" << std::endl;
		}
	}
	this->m_money += data;
	
}
void PiggyBank::TakeOut()
{
	std::cout << "持ち出す金額を入力してください" << std::endl;
	int data;
	std::cin >> data;

	if (this->m_money < data)
	{
		std::cout << "多すぎます持ち出せません" << std::endl;
	}
	else
	{
		this->m_money -= data;
	}
}
void PiggyBank::Print() const
{
	std::cout << "残高は" << this->m_money <<"円です"<<  std::endl;
}
