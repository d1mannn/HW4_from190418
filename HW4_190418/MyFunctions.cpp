#include "Patient.h"

int TaskNumb()
{
	int task;
	cout << "������� ����� ������ (��� ������ ������� 0)\n--->";
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
	cout << "������� 1, ���� ������ ������� ��������� � ��������� ���������� ���������� ���" << endl;
	cout << "������� 2, ��� ����������� ��������� � �������" << endl;
	cout << "��� ������� 3, - �������� � �����������" << endl;
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
				cout << "��������� � ����� ��������� ���" << endl;
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
				cout << "��������� � ����� ��������� ���" << endl;
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
				cout << "��������� � ����� ��������� ���" << endl;
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
		cout << "������� ����� 1� �����\n-->  ";
		cin >> from;
		cout << "������� ����� 2� �����\n-->  ";
		cin >> to;
	} while (to < from);
	int count = 0;
	for (int i = 0; i < countofPeople; i++)
	{
		patient[i].Show2(from, to, count);
	}
	if (count == 0)
		cout << "�� ������ ������� ������ �� �������" << endl;
}
