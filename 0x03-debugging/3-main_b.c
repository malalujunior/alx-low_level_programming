#include <stdio.h>

i/**
 * day_of_year - calculates the day of the year for a given date
 * @month: the month of the date
 * @day: the day of the date
 * @year: the year of the date
 *
 * Return: the day of the year for the given date
 */

void day_of_year(int month, int day, int year);
{
	int i, leap;
	int day_of_year = 0;

	int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	if (leap == 1 && month == 2)
		days_in_month[month] = 29;

	for (i = 1; i < month; i++)
		day_of_year += days_in_month[i];

	day_of_year += day;
	return (day_of_year);
}
