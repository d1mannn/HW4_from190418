#include "Patient.h"
#include "House.h"
#include "Header.h"


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{
				/*1. Patient: �������, ���, ��������, �����, ����� ����������� �����, �������.
					������� ������ ��������.������� :
					a) ������ ���������, ������� ������ �������;
					b) ������ ���������, ����� ����������� ����� � ������� ��������� � �������� ���������.*/
				int countOfPeople = 40 + rand() % 50;
				Patient * patient = new Patient[countOfPeople];
				if (patient == NULL)
				{
					cerr << "Error";
					system("pause");
					exit(1);
				}
				NameCreation(patient, countOfPeople);
				Diagnose(patient, countOfPeople);
				CardNumb(patient, countOfPeople);
				DiagnoseIndex(patient, countOfPeople);
				CardNumbCheck(patient, countOfPeople);
				delete[]patient;
			}break;

			case 2:
			{
				/*5.House: �����, ����, ���������� ������, �������.
					������� ������ ��������.������� :
					a) ������ �������, ������� �������� ����� ������;
					b) ������ �������, ������� �������� ����� ������, � ������������� �� �����, ������� ��������� � �������� ����������;
					c) ������ �������, ������� �������, ������������� ��������.*/
				int countofHouses = 40 + rand() % 40;
				House * house = new House[countofHouses];
				if (house == NULL)
				{
					cerr << "Error";
					system("pause");
					exit(1);
				}
				AddressCreation(house, countofHouses);
				FloorCreation(house, countofHouses);
				CountOfRooms(house, countofHouses);
				SquareCreation(house, countofHouses);
				YourChoice(house, countofHouses);
				delete[]house;
			} break;
		}
	} while (task != 0);

	system("pause");
}