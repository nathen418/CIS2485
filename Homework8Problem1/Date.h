#pragma once

class Date {

public:

	//Get Functions
	int getDayOfWeek() const;
	int getMonth() const;
	int getDay() const;
	int getYear() const;

	//Set Functions
	void setDayOfWeek(int DayOfWeek);
	void setMonth(int Month);
	void setDay(int Day);
	void setYear(int Year);

private:
	//private data only available to this class
	int dayOfWeek;
	int month;
	int day;
	int year;
};
