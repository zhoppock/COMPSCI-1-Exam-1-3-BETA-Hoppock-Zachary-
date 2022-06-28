//Hoppock, Zachary
//10/21/2020
//studentID.cpp
//Input your first and last name and student ID number and program will output the ID number with your initials in front
//Version #1

/*
example:  rl000000  length =8
Input  - Robert Loya
Output   -  RL
Input  - 000000
Output - RL000000
Output - Length = 8
*/

#include <iostream>
using namespace std;

int main()
{
  string first_name;
  string last_name;
  string initials = "";
  string number_ID;
  string student_ID = "";

  cout << "Please enter your first and last name." << endl;
  cin >> first_name >> last_name;
  cout << "\n";

  initials = first_name.substr(0,1) + last_name.substr(0,1);

  cout << "Your initials are " << initials << "." << endl;

  cout << "Please enter your student ID number." << endl;
  cin >> number_ID;
  cout << "\n";
  
  student_ID = initials + number_ID;

  cout << "Your full student ID is " << student_ID << "." << endl;

  cout << "The total length of your student ID is " << student_ID.length() << "." << endl;

  return 0;
}