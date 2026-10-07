#include<iostream>
#include<Windows.h>
int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int MaxItem = 100;
	int Choice = 0;
	int ChoiceItem = 0;
	int TradeContinue = 0;
	std::string ArrayJuceFruct[7]{ "яблочный", "апельсиновый", "абрикосовый", "грушевый" };
	std::string ArrayJuceVege[3]{ "Томатный", "Луковый", "огуречный" };
	std::string ArrayTea[2]{ "Чесночный", "петрушевый" };
	int JucePricesFruct[7]{ 10, 20, 30, 40, 50 };
	int JucePricesVege[3]{ 10, 20, 30 };
	int TeaPrices[2]{ 15, 25 };
	int JuceFructCount = 0;  
	int JuceVegeCount = 0;
	int BacketSize = 0;
	int TotalSum = 0;
	while (true)
	{
		std::cout << "\nВведите номер категории:\n";
		std::cout << "1 - Фруктовые соки\n";
		std::cout << "2 - Овощные соки\n";
		std::cout << "3 - Чаи\n";
		std::cout << "0 - Оформить заказ и выйти\n";
		std::cout << "Ваш выбор: ";
		std::cin >> Choice;
		if (Choice == 0)
		{
			break;
		}

		if (Choice == 1)
		{
			std::cout << "\nФруктовые соки\n";
			for (int i = 0; i < JuceFructCount; i++)
			{
				std::cout << "Выбор соков" << ArrayJuceFruct[i];
				std::cout << "Введите номер сока или 0 чтобы отказаться";
				std::cin >> ChoiceItem;
				
				if (ChoiceItem == 0)
				{
					std::cout << "Вы отказались, возврат в меню";
					continue;

				}
				if (ChoiceItem < 0 || ChoiceItem > JuceFructCount)
				{
					std::cout << "Вы ввели неправильный номер, попытаетесь ещё";
				}
				if (ChoiceItem == 1)
				{
					std::cout << "Сколько штук взять?" << ChoiceItem;
					std::cin >> ChoiceItem;
					for (int i = 0; i  < JuceFructCount; i++)
					{
						std::cout << "Вы взяли колличесво сока " << JuceFructCount;
					}
					std::cout << "Хотите взять ещё? (1-да, 2 - нет)";
					std::cin >> Choice;
					if (TradeContinue == 1)
					{
						for (int i = 0; i < JuceFructCount; i++)
						{
							
						}
						if (TradeContinue == 2)
						{
							
							std::cout << "Возварат";
							continue;
						    

						}
						 
					}
				}

				if (Choice == 2)
				{
					std::cout << "Овощные соки";
				}





			}
		}
    }
	

	

   
  
	
	
	
	return 0;


}