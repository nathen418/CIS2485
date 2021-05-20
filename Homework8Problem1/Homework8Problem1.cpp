//Nate Goldsborough
//2020-7-16
#include <iostream>
#include "date.h"
#include <string>
using namespace std;

void disp1(int dow, int month, int day, int year) {
	char DOW;
	if (dow == 1) {
		DOW = 'M';
	}
	else if (dow == 2) {
		DOW = 'T';
	}
	else if (dow == 3) {
		DOW = 'W';
	}
	else if (dow == 4) {
		DOW = 'T';
	}
	else if (dow == 5) {
		DOW = 'F';
	}
	else if (dow == 6) {
		DOW = 'S';
	}
	else if (dow == 7) {
		DOW = 'S';
	}

	//M/04/23/2018

	cout << DOW << "/" << month << "/" << day << "/" << year << endl;
}

void disp2(int dow, int month, int day, int year) {
	string DOW;
	string MONTH;
	if (dow == 1) {
		DOW = "Monday";
	}
	else if (dow == 2) {
		DOW = "Tuesday";
	}
	else if (dow == 3) {
		DOW = "Wednesday";
	}
	else if (dow == 4) {
		DOW = "Thursday";
	}
	else if (dow == 5) {
		DOW = "Friday";
	}
	else if (dow == 6) {
		DOW = "Saturday";
	}
	else if (dow == 7) {
		DOW = "Sunday";
	}

	if (month == 1) {
		MONTH = "January";
	}
	else if (month == 2) {
		MONTH = "Feburary";
	}
	else if (month == 3) {
		MONTH = "March";
	}
	else if (month == 4) {
		MONTH = "April";
	}
	else if (month == 5) {
		MONTH = "May";
	}
	else if (month == 6) {
		MONTH = "June";
	}
	else if (month == 7) {
		MONTH = "July";
	}
	else if (month == 8) {
		MONTH = "August";
	}
	else if (month == 9) {
		MONTH = "September";
	}
	else if (month == 10) {
		MONTH = "October";
	}
	else if (month == 11) {
		MONTH = "November";
	}
	else if (month == 12) {
		MONTH = "December";
	}
	
	cout << DOW << ", " << MONTH << " " << day << ", " << year << endl;
	//Monday, April 23, 2018
}
 
void disp3(int dow, int month, int day, int year) {
	string DOW;
	string MONTH;
	if (dow == 1) {
		DOW = "Monday";
	}
	else if (dow == 2) {
		DOW = "Tuesday";
	}
	else if (dow == 3) {
		DOW = "Wednesday";
	}
	else if (dow == 4) {
		DOW = "Thursday";
	}
	else if (dow == 5) {
		DOW = "Friday";
	}
	else if (dow == 6) {
		DOW = "Saturday";
	}
	else if (dow == 7) {
		DOW = "Sunday";
	}

	if (month == 1) {
		MONTH = "January";
	}
	else if (month == 2) {
		MONTH = "Feburary";
	}
	else if (month == 3) {
		MONTH = "March";
	}
	else if (month == 4) {
		MONTH = "April";
	}
	else if (month == 5) {
		MONTH = "May";
	}
	else if (month == 6) {
		MONTH = "June";
	}
	else if (month == 7) {
		MONTH = "July";
	}
	else if (month == 8) {
		MONTH = "August";
	}
	else if (month == 9) {
		MONTH = "September";
	}
	else if (month == 10) {
		MONTH = "October";
	}
	else if (month == 11) {
		MONTH = "November";
	}
	else if (month == 12) {
		MONTH = "December";
	}

	// 23 April 2018 is on a Monday

	cout << day << " " << MONTH << " " << year << " is on a " << DOW << endl;
}
int main()
{
    //init date
	Date d;
	

	//send data to the class
	d.setDayOfWeek(1);
	d.setMonth(4);
	d.setDay(23);
	d.setYear(2018);

	//show the dates in different formats
	disp1(d.getDayOfWeek(), d.getMonth(), d.getDay(), d.getYear());
	disp2(d.getDayOfWeek(), d.getMonth(), d.getDay(), d.getYear());
	disp3(d.getDayOfWeek(), d.getMonth(), d.getDay(), d.getYear());

}
