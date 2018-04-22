#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//1. Patient: Фамилия, Имя, Отчество, Адрес, Номер медицинской карты, Диагноз.
//Создать массив объектов.Вывести :
//	a) список пациентов, имеющих данный диагноз;
//	b) список пациентов, номер медицинской карты у которых находится в заданном интервале.


class Patient
{
public:
	//Patient() :fName(0), lName(0), mName(0), card(0), address(0), diagnose(0) {};
	Patient() = default;

	void setNames(const string & fName, const string & lName, const string & mName)
	{
		this->fName = fName;
		this->lName = lName;
		this->mName = mName;
	}

	void setFname(const string & fName)
	{
		this->fName = fName;
	}

	void setlName(const string & lName)
	{
		this->lName = lName;
	}

	void setmName(const string & mName)
	{
		this->mName = mName;
	}
	//~Patient();
	void setAdress(const string & address)
	{
		this->address = address;
	}

	void setCard(const int &card)
	{
		this->card = card;
	}

	void setDiagnose(const string &diagnose)
	{
		this->diagnose = diagnose;
	}

	void print()
	{
		cout << fName << "\t" << mName << "\t" << lName << endl;
		cout << "Карточа № " << card << "\t" << endl;
		cout << "Диагноз - " << diagnose << endl << endl;
		
	}

	void FromClassToStr(string & fName, string & lName, string & mName)
	{
		fName = this->fName;
		lName = this->lName;
		mName = this->mName;
	}

	void Show(string diagnose, int &count)
	{	
		if (this->diagnose == diagnose)
		{
			print();
			count++;
		}
	}

	void Show2(const int &from, const int &to, int & count)
	{
		if (this->card >= from && this->card <= to)
		{
			print();
			count++;
		}
	}

private:
	string fName;
	string lName;
	string mName;
	string address;
	int card;
	string diagnose;
};
