#include "House.h"

void AddressCreation(House * house, int &countOfHouses)
{
	int length;
	char *name;
	for (int i = 0; i < countOfHouses; i++)
	{
		length = 8 + rand() % 5;
		name = new char[length + 2];
		if (name == NULL)
		{
			cerr << "ERROR" << endl;
			system("pause");
			exit(1);
		}
		for (int i = 0; i < length - 3; i++)
			name[i] = (char)97 + rand() % 26;
		name[0] = toupper(name[0]);
		name[length - 3] = ' ';
		for (int i = length - 2; i < length; i++)
			name[i] = 48 + rand() % 9;
		name[length] = '\0';
		house[i].setAddress(name);
	}
}

void FloorCreation(House * house, int &countOfHouses)
{
	int n;
	for (int i = 0; i < countOfHouses; i++)
	{
		n = 1 + rand() % 20;
		house[i].setFloor(n);
	}
}

void CountOfRooms(House * house, int &countOfHouses)
{
	int n;
	for (int i = 0; i < countOfHouses; i++)
	{
		n = 1 + rand() % 8;
		house[i].setRooms(n);
	}
}

void SquareCreation(House * house, int &countOfHouses)
{
	int n;
	for (int i = 0; i < countOfHouses; i++)
	{
		n = 60 + rand() % 180;
		house[i].setSquare(n);
	}
}

void ShowInform1(House * house, int &countOfHouses)
{
	printf("������� ��������� �������� �� ������?\n--->  ");
	int n;
	int count = 0;
	cin >> n;
	for (int i = 0; i < countOfHouses; i++)
	{
		house[i].show(n, count);
	}
	if (count == 0)
		cout << "�� ������ ������� ������ �� �������" << endl;
}

void ShowInform2(House * house, int &countOfHouses)
{
	printf("������� ��������� �������� �� ������?\n--->  ");
	int n, to, from;
	int count = 0;
	cin >> n;
	do
	{
		cout << "� � ������ �� ����� ����??\n C -->  ";
		cin >> from;
		cout << "�� --->  ";
		cin >> to;
	} while (to < from);
	
	for (int i = 0; i < countOfHouses; i++)
	{
		house[i].show2(from, to, n, count);
	}
	if (count == 0)
		cout << "�� ������ ������� ������ �� �������" << endl;
}

void ShowInfrom3(House * house, int &countOfHouses)
{
	cout << "������� ����������� ���������� ��������� �����\n---->  ";
	int n;
	int count = 0;
	cin >> n;
	for (int i = 0; i < countOfHouses; i++)
	{
		house[i].show3(n, count);
	}
	if (count == 0)
		cout << "�� ������ ������� ������ �� �������" << endl;
}

void YourChoice(House * house, int &countOfHouses)
{
	cout << "�� ����� ��������� ������ ������ ������??" << endl;
	cout << "1 - �� ���������� ������." << endl;
	cout << "2 - �� ���������� ������ � �����" << endl;
	cout << "3 - �� ������� �����" << endl;
	cout << "--->  ";
	int res;
	cin >> res;
	switch (res)
	{
		case 1: { ShowInform1(house, countOfHouses);
		} break;
		case 2: { ShowInform2(house, countOfHouses);
		} break;
		case 3: {ShowInfrom3(house, countOfHouses);
		} break;
		default: 
		{
			cerr << "Error";
			system("pause");
			exit(1);
		}break;
	}
}