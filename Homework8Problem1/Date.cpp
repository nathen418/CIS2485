#include "Date.h"
int Date::getDayOfWeek() const {
	return dayOfWeek;
}

void Date::setDayOfWeek(int DayOfWeek) {
	dayOfWeek = DayOfWeek;
}

int Date::getMonth() const
{
	return month;
}

void Date::setMonth(int Month)
{
	month = Month;
}

int Date::getDay() const
{
	return day;
}


void Date::setDay(int Day)
{
	day = Day;
}

int Date::getYear() const
{
	return year;
}

void Date::setYear(int Year)
{
	year = Year;
}

