// C++ program two find number of
// days between two given dates
#include <iostream>
using namespace std;

// A date has day 'd', month 'm' and year 'y'
struct Date {
	int d, m, y;
};

// To store number of days in
// all months from January to Dec.
const int monthDays[12]
	= { 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };

// This function counts number of
// leap years before the given date
int countLeapYears(Date d)
{
	int years = d.y;

	// Check if the current year needs to be
	// considered for the count of leap years
	// or not
	if (d.m <= 2)
		years--;

	// An year is a leap year if it
	// is a multiple of 4,
	// multiple of 400 and not a
	// multiple of 100.
	return years / 4
		- years / 100
		+ years / 400;
}

// This function returns number of
// days between two given dates
int getDifference(Date dt1, Date dt2)
{
	// COUNT TOTAL NUMBER OF DAYS
	// BEFORE FIRST DATE 'dt1'

	// initialize count using years and day
	long int n1 = dt1.y * 365 + dt1.d;

	// Add days for months in given date
	for (int i = 0; i < dt1.m - 1; i++)
		n1 += monthDays[i];

	// Since every leap year is of 366 days,
	// Add a day for every leap year
	n1 += countLeapYears(dt1);

	// SIMILARLY, COUNT TOTAL NUMBER OF
	// DAYS BEFORE 'dt2'

	long int n2 = dt2.y * 365 + dt2.d;
	for (int i = 0; i < dt2.m - 1; i++)
		n2 += monthDays[i];
	n2 += countLeapYears(dt2);

	// return difference between two counts
	return (n2 - n1);
}

// Driver code
int main()
{
	Date dt1 = { 1, 2, 2000 };
	Date dt2 = { 1, 2, 2004 };

	// Function call
	cout << "Difference between two dates is "
		<< getDifference(dt1, dt2);

	return 0;
}
/* Let the given two dates be "1-Feb-2000" and "1-Feb-2004"
dt1 = {1, 2, 2000};
dt2 = {1, 2, 2004};
Count number of days before dt1. Let this count be n1.
Every leap year adds one extra day (29 Feb) to total days.
n1 = 2000*365 + 31 + 1 + Number of leap years 
Count of leap years for a date 'd/m/y' can be calculated 
using the following formula:
Number leap years 
 = floor(y/4) - floor(y/100) + floor(y/400) if m > 2
  = floor((y-1)/4) - floor((y-1)/100) + floor((y-1)/400) if m <= 2
All above divisions must be done using integer arithmetic
So that the remainder is ignored.
For 01/01/2000, leap year count is 1999/4 - 1999/100 
+ 1999/400 which is 499 - 19 + 4 = 484
Therefore n1 is 2000*365 + 31 + 1 + 484

Similarly, the count number of days before dt2. 
Let this the count be n2.Finally, return n2-n1   */