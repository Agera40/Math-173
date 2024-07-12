/*
#include <iostream>
#include <string>
#include <vector>
//#include <chrono>
//#include <thread>
//using namespace std::chrono_literals;

//Function to check if the year is a leap year or not.
bool is_leap_year(int year) {
    return (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0);
}

//Function to get how many days there are in this month.
int get_days_in_month(int month, int year) {
    if (month == 0 || month == 2 || month == 4 || month == 6 || month == 7 || month == 9 || month == 11) {
        return 31;
    }
    else if (month == 1) {
        return (is_leap_year(year)) ? 29 : 28;
    }
    else {
        return 30;
    }
}

void print_consecutive_dates(int num) {

    std::vector<std::string> day_name = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    std::vector<std::string> months_name = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    int day = 1, month = 0, year = 2000; //Setting the initial values Saturday, January 1, 2000

    for (int i = 0; (i < num) || (num == 0); i++) {

        std::cout << day_name[i % 7] << ", " << months_name[month] << " " << day << ", " << year << std::endl;

        day++;

        if (day > get_days_in_month(month, year)) {
            month++;
            day = 1;
        }

        if (month > 11) {
            year++;
            month = 0;
        }
    }
}

int main() {
    print_consecutive_dates(10); //Date should be Thursday, October 22, 2043
}
*/