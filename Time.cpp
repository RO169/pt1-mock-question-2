#include "Time.h"
using namespace std;

Time::Time()
{
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

Time::~Time()
{
}

void Time::set(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::get(int &h, int &m)
{
	h = hours;
	m = minutes;
}

ostream& operator<<(ostream &out, const Time &T)
{
	return out << T.hours << " : " << T.minutes << endl;
}

Time &Time::operator++()
{
	++minutes;
	if (minutes > 60)
	{
		minutes = 0;
		++hours;
	}
	return *this;
}

Time Time::operator++(int)
{
	Time t(*this);
	operator++();
	return t;
}