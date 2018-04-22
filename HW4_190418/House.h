#pragma once
#include <iostream>
#include <string>
using namespace std;
class House
{
public:
	House() = default;
	void setAddress(const string &address) {
		this->address = address;
	}
	void setFloor(const int &floor) {
		this->floor = floor;
	}
	void setRooms(const int &rooms) {
		this->rooms = rooms;
	}
	void setSquare(const int &square) {
		this->square = square;
	}

	void print() {
		cout << address << endl;
	}

	void show(const int &room, int &count) {
		if (this->rooms == room)
		{
			cout <<"Адрес: " << address << endl;
			printf("Этаж: %d\t Кол-во комнат: %d\tПлощадь: %d\n\n", floor, rooms, square);
			count++;
		}
	}

	void show2(const int &from, const int &to, const int &room, int &count)
	{
		if (this->rooms == room && (this->floor >= from && this->floor <= to))
		{
			cout << "Адрес: " << address << endl;
			printf("Этаж: %d\t Кол-во комнат: %d\tПлощадь: %d\n\n", floor, rooms, square);
			count++;
		}
	}

	void show3(const int &square, int & count)
	{
		if (this->square > square)
		{
			cout << "Адрес: " << address << endl;
			printf("Этаж: %d\t Кол-во комнат: %d\tПлощадь: %d\n\n", floor, rooms, square);
			count++;
		}
	}

private:
	string address;
	int floor;
	int rooms;
	int square;
};

