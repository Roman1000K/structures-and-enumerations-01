#include<iostream>
#include <Windows.h> 
#include <string>


enum Month { Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, 
	Август, Сентябрь, Октябрь, Ноябрь, Декабрь };

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Month mon; 
	int num;
	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> num;

		switch (num)
		{
		case 0:
			std::cout << "До свидания." ;
			exit(0);
		case 1:
			mon = Январь;
			break;
		case 2:
			mon = Февраль;
			break;
		case 3:
			mon = Март;
			break;
		case 4:
			mon = Апрель;
			break;
		case 5:
			mon = Май;
			break;
		case 6:
			mon = Июнь;
			break;
		case 7:
			mon = Июль;
			break;
		case 8:
			mon = Август;
			break;
		case 9:
			mon = Сентябрь;
			break;
		case 10:
			mon = Октябрь;
			break;
		case 11:
			mon = Ноябрь;
			break;
		case 12:
			mon = Декабрь;
			break;
		default:
			std::cout << "Неправильный номер!" << "\n";
			break;
		}
		switch (mon)
		{
		case Январь:
			std::cout << "Январь" << "\n";
			break;
		case Февраль:
			std::cout << "Февраль" << "\n";
			break;
		case Март:
			std::cout << "Март" << "\n";
			break;
		case Апрель:
			std::cout << "Апрель" << "\n";
			break;
		case Май:
			std::cout << "Май" << "\n";
			break;
		case Июнь:
			std::cout << "Июнь" << "\n";
			break;
		case Июль:
			std::cout << "Июль" << "\n";
			break;
		case Август:
			std::cout << "Август" << "\n";
			break;
		case Сентябрь:
			std::cout << "Сентябрь" << "\n";
			break;
		case Октябрь:
			std::cout << "Октябрь" << "\n";
			break;
		case Ноябрь:
			std::cout << "Ноябрь" << "\n";
			break;
		case Декабрь:
			std::cout << "Декабрь" << "\n";
			break;
		default:
			
			break;
		}
	} 
	while (num != 0);
	{
		
	}
	return 0;
}
