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

Time Time::operator++(int)
{
		// save the orignal value
		Time T(hours, minutes);
		// increment this object
		++minutes;
		if (minutes >= 60)
		{
			++hours;
			minutes -= 60;
		}
		// return old original value
		return T;
}