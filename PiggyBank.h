#pragma once
class PiggyBank
{
private:
	int m_money;
public:
	PiggyBank();
	~PiggyBank();
	void Save();
	void TakeOut();
	void Print() const;
};