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
				/*1. Patient: Фамилия, Имя, Отчество, Адрес, Номер медицинской карты, Диагноз.
					Создать массив объектов.Вывести :
					a) список пациентов, имеющих данный диагноз;
					b) список пациентов, номер медицинской карты у которых находится в заданном интервале.*/
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
				/*5.House: Адрес, Этаж, Количество комнат, Площадь.
					Создать массив объектов.Вывести :
					a) список квартир, имеющих заданное число комнат;
					b) список квартир, имеющих заданное число комнат, и расположенных на этаже, который находится в заданном промежутке;
					c) список квартир, имеющих площадь, превосходящую заданную.*/
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