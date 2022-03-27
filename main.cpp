#include <iostream>
using namespace std; 

void get_ymd ( int date, int& year, int& month, int& day); 

int main() {
  int date; 
  int year, month ,day; 
  cout << "Ener a 8 digit date: " <<endl; 
  cin >> date; 
  get_ymd (date, year, month, day); 
  cout << month << "/" << day << "/" << year << endl; 
  return 0;  
}

void get_ymd (int date, int& year, int& month, int& day) { 
  day= date % 1000000 / 10000; 
  month = date /1000000; 
  year = date % 10000; 

}