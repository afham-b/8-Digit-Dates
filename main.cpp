#include <iostream>
using namespace std; 

void get_ymd ( int date, int& year, int& month, int& day); 

int main() {
  int date; 
  int y, m ,d; 
  cout << "Ener a 8 digit date: " <<endl; 
  cin >> date; 
  get_ymd (date, y, m, d); 
  cout << m << "/" << d << "/" << y << endl; 
  return 0;  
}

void get_ymd (int date, int& year, int& month, int& day) { 
  day= date % 100; 
  month = date /100 % 100; 
  year = date / 10000; 

}