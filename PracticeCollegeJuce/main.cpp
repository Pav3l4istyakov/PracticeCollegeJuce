#include<iostream>
#include<Windows.h>

int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int MaxItem = 10;
	int Choice = 0;
	int ItemId = 0;
	int Quality = 0;
	int TradeContinue = 0;
	std::string ArrayJuceFruct[7]{ "Яблочный", "Апельсиновый", "Абрикосовый", "Грушевый" };
	std::string ArrayJuceVege[3]{ "Томатный", "Луковый", "Огуречный" };
	std::string ArrayTea[2]{ "Чесночный", "петрушевый" };
	double JucePricesFruct[7]{ 10.45, 20.25, 30.55, 40.65, 50.76 , 60.70, 70.50 };
	double JucePricesVege[3]{ 10.25, 20.35, 30.55 };
	double TeaPrices[2]{ 15, 25 };
	int JuceFructCount = 0;
	int JuceVegeCount = 0;
	int TeaCount = 0;
	int BacketSize = 0;
	int TotalSum = 0;
	int Discount = 0;

	while (true)
	{
		std::cout << "\n\---Магазин Соки Даниил---\n";
		std::cout << "\nВведите номер категории:\n";
		std::cout << "1 - Фруктовые соки\n";
		std::cout << "2 - Овощные соки\n";
		std::cout << "3 - Чаи\n";
		std::cout << "4 - Оформить заказ и выйти\n";
		std::cout << "Ваш выбор: \n";
		std::cin >> Choice;
		if (Choice == 4)
		{
			break;
		}

		if (Choice == 1)
		{
			std::cout << "\nФруктовые соки\n";
			for (int i = 0; i < 4; i++)
			{
				std::cout << "Выбор соков" << ArrayJuceFruct[i] << "Цены:" << JucePricesFruct[i] << "\n\n\n";
			} // 11111
			std::cout << "Введите номер сока или 0 чтобы отказаться\n";
			std::cin >> ItemId;

			if (ItemId == 0)
			{
				std::cout << "Вы отказались, возврат в меню\n";
				break;

			}
			if (ItemId < 0 || ItemId > JuceFructCount)
			{
				std::cout << "Вы ввели неправильный номер, попытаетесь ещё\n";
				continue;
			}
			Quality = ItemId - 1;
			std::cout << "Сколько штук взять?" << ArrayJuceFruct[Quality];
			std::cin >> Quality;
			if (Quality < 0)
			{
				std::cout << "Колличество должно быть больше нуля\n";
				continue;
			}
			Quality++;
			std::cout << "Добавлено в корзину" << Quality << "\n";
			std::cout << "Хотите добавить ещё?( 1 - да/ 2 - нет)\n";
			std::cin >> TradeContinue;
			if (TradeContinue == 1)
			{
				continue;

			}
			if (TradeContinue == 2)
			{
				std::cout << "Продажа завершена\n";
				break;
			}
			    

			if (Choice == 2)
			{
				std::cout << "\nОвощные соки\n";
				for (int i = 0; i < JuceVegeCount; i++)
				{
					std::cout << "Выбор соков" << ArrayJuceVege[i] << "Цены" << TotalSum;
					std::cout << "Введите номер сока или 0 чтобы отказаться\n";
					std::cin >> ItemId;
				}

				if (Choice == 3)
				{
					std::cout << "\nЧаи\n";
					for (int i = 0; i < TeaCount; i++)
					{
						std::cout << "Выбор чая:" << ArrayTea[i] << "Цены" << TeaPrices[i] << "\n";
						std::cout << "Введите номер чая или 0 чтобы отказаться\n";
						std::cin >> ItemId;
						if (ItemId == 0)
						{
							std::cout << "Вы отказались, возврат в меню\n";
							break;

						}
						if (ItemId < 0 || ItemId > TeaCount)
						{
							std::cout << "Вы ввели неправильный номер, попытаетесь ещё\n";
							continue;
						}
						Quality = ItemId - 1;
						std::cout << "Сколько штук взять?" << ArrayJuceFruct[Quality];
						std::cin >> Quality;
						Quality++;
						std::cout << "Добавлено в корзину" << Quality << "\n";
						std::cout << "Хотите добавить ещё?( 1 - да/ 2 - нет)\n";
						std::cin >> TradeContinue;
						if (TradeContinue == 1)
						{
							continue;

						}
						if (TradeContinue == 2)
						{
							break;
							    
						}
					}
						
				}

			}
			
		}

	}
	if (Choice == 4)
	{
		std::cout << "Работа с магазином завершена";
		
		
	}

return 0;
}



