#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int, int);
	~Time();
	void set(int, int);
	void get(int &, int &);
	friend ostream &operator<<(ostream &, const Time &);
	Time operator++(int);

};

