#include<iostream>
#include <Windows.h> 
#include <string>


enum Month { ������ = 1, �������, ����, ������, ���, ����, ����, 
	������, ��������, �������, ������, ������� };

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Month mon = ������; 
	int num = mon;

	do
	{
		std::cout << "������� ����� ������: ";
		std::cin >> num;

		switch (num)
		{
		case 0:
			std::cout << "�� ��������.";
			exit(0);
		case (������):
			std::cout << "������" << "\n";
			break;
		case (�������):
			std::cout << "�������" << "\n";
			break;
		case (����):
			std::cout << "����" << "\n";
			break;
		case (������):
			std::cout << "������" << "\n";
			break;
		case (���):
			std::cout << "���" << "\n";
			break;
		case (����):
			std::cout << "����" << "\n";;
			break;
		case (����):
			std::cout << "����" << "\n";
			break;
		case (������):
			std::cout << "������" << "\n";
			break;
		case (��������):
			std::cout << "��������" << "\n";
			break;
		case (�������):
			std::cout << "�������" << "\n";
			break;
		case (������):
			std::cout << "������" << "\n";
			break;
		case (�������):
			std::cout << "�������" << "\n";
			break;
		default:
			std::cout << "������������ �����!" << "\n";
			break;
		}
	}
	while (num != 0);
	{
		
	}
	return 0;
}
