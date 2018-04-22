#include "Patient.h"

int TaskNumb()
{
	int task;
	cout << "Введите номер здания (для выхода введите 0)\n--->";
	cin >> task;
	return task;
}

void NameCreation(Patient *patient, int countOfPeople)
{
	int length;
	char *name;
	for (int i = 0; i < countOfPeople; i++)
	{
		length = 4 + rand() % 2;
		name = new char[length];
		for (int j = 0; j < length; j++)
		{
			name[j] = (char)97 + rand() % 26;
		}
		name[length] = '\0';
		name[0] = toupper(name[0]);
		patient[i].setFname(name);

		length = 4 + rand() % 2;
		//name = new char[length];
		for (int j = 0; j < length; j++)
		{
			name[j] = (char)97 + rand() % 26;
		}
		name[length] = '\0';
		name[0] = toupper(name[0]);
		patient[i].setlName(name);

		length = 4 + rand() % 2;
		//name = new char[length];
		for (int j = 0; j < length; j++)
		{
			name[j] = (char)97 + rand() % 26;
		}
		name[length] = '\0';
		name[0] = toupper(name[0]);
		patient[i].setmName(name);
	}
}

void Diagnose(Patient* patient, int countofPeople)
{
	int n;
	for (int i = 0; i < countofPeople; i++)
	{
		n = 0 + rand() % 3;
		switch (n)
		{
		case 0: { patient[i].setDiagnose("Varix");
		}break;
		case 1: {patient[i].setDiagnose("Influenza");
		}break;
		case 2: {patient[i].setDiagnose("Tachyardia"); 
		}break;
		}
	}
}

void CardNumb(Patient * patient, int countofPeople)
{	
	int n;
	for (int i = 0; i < countofPeople; i++)
	{	
		n = 1000 + rand() % 8999;
		patient[i].setCard(n);
	}
}


void DiagnoseIndex(Patient * patient, int countofPeople)
{
	cout << "Введите 1, если хотите увидеть пациентов с диагнозом Варикозное расширение вен" << endl;
	cout << "Введите 2, для отображения пациентов с ГРИППом" << endl;
	cout << "Или введите 3, - пациенты с Такихардией" << endl;
	cout << "---->  ";
	int n;
	int count = 0;
	cin >> n;
	switch (n)
	{
		case 1:
		{	
			system("cls");
			string diagnose = "Varix";
			for (int i = 0; i < countofPeople; i++)
			{
				patient[i].Show(diagnose, count);
			}
			if (count == 0)
				cout << "Пациентов с таким диагнозом нет" << endl;
		} break;
		case 2:
		{	
			system("cls");
			string diagnose = "Influenza";
			for (int i = 0; i < countofPeople; i++)
			{
				patient[i].Show(diagnose, count);
			}
			if (count == 0)
				cout << "Пациентов с таким диагнозом нет" << endl;
		} break;
		case 3:
		{	
			system("cls");
			string diagnose = "Tachyardia";
			for (int i = 0; i < countofPeople; i++)
			{
				patient[i].Show(diagnose, count);
			}
			if (count == 0)
				cout << "Пациентов с таким диагнозом нет" << endl;
		} break;
	}
}


void CardNumbCheck(Patient * patient, int countofPeople)
{
	int from;
	int to;
	system("pause");
	system("cls");
	do
	{
		cout << "Введите номер 1й точки\n-->  ";
		cin >> from;
		cout << "Введите номер 2й точки\n-->  ";
		cin >> to;
	} while (to < from);
	int count = 0;
	for (int i = 0; i < countofPeople; i++)
	{
		patient[i].Show2(from, to, count);
	}
	if (count == 0)
		cout << "По Вашему запросу ничего не найдено" << endl;
}
