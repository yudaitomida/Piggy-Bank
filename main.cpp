#include"PiggyBank.h"
#include<iostream>	
int main()
{
	int num_choice = 0;
	PiggyBank *my_piggy = new PiggyBank();
	while (num_choice !=4)
	{
		std::cout << "1�͓���,2�͏o��,3�͎c����\��,4�͑���I��" << std::endl;
		std::cin >> num_choice;
		switch (num_choice)
		{
		case 1:
			my_piggy->Save();
			break;
		case 2:	
			my_piggy->TakeOut();
			break;
		case 3:
			my_piggy->Print();
			break;
		default:
			break;
		}
	}
	//my_piggy->Print();
	//my_piggy->Print();
	//my_piggy->TakeOut();
	//my_piggy->Print();

	delete my_piggy;

	return 0;
}