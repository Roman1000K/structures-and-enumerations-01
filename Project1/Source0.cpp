#include<iostream>
#include <Windows.h> 
#include <string>


enum Month { ������ = 1, �������, ����, ������, ���, ����, ����, 
	������, ��������, �������, ������, ������� };

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Month mon; 
	int num;
	do
	{
		std::cout << "������� ����� ������: ";
		std::cin >> num;

		switch (num)
		{
		case 0:
			std::cout << "�� ��������." ;
			exit(0);
		case 1:
			mon = ������;
			break;
		case 2:
			mon = �������;
			break;
		case 3:
			mon = ����;
			break;
		case 4:
			mon = ������;
			break;
		case 5:
			mon = ���;
			break;
		case 6:
			mon = ����;
			break;
		case 7:
			mon = ����;
			break;
		case 8:
			mon = ������;
			break;
		case 9:
			mon = ��������;
			break;
		case 10:
			mon = �������;
			break;
		case 11:
			mon = ������;
			break;
		case 12:
			mon = �������;
			break;
		default:
			std::cout << "������������ �����!" << "\n";
			break;
		}
		switch (mon)
		{
		case ������:
			std::cout << "������" << "\n";
			break;
		case �������:
			std::cout << "�������" << "\n";
			break;
		case ����:
			std::cout << "����" << "\n";
			break;
		case ������:
			std::cout << "������" << "\n";
			break;
		case ���:
			std::cout << "���" << "\n";
			break;
		case ����:
			std::cout << "����" << "\n";
			break;
		case ����:
			std::cout << "����" << "\n";
			break;
		case ������:
			std::cout << "������" << "\n";
			break;
		case ��������:
			std::cout << "��������" << "\n";
			break;
		case �������:
			std::cout << "�������" << "\n";
			break;
		case ������:
			std::cout << "������" << "\n";
			break;
		case �������:
			std::cout << "�������" << "\n";
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
