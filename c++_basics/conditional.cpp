#include <bits/stdc++.h>

using namespace std;

/* multiline comment */
// single line

int main()
{
  /*GRADING PROGRAM*/

  // int marks;
  // cout << "Enter your marks";
  // cin >> marks;

  // if(marks >= 80){
  //   cout << "A";
  // }else if(marks >= 60){
  //   cout << "B";
  // }else if(marks >= 50){
  //   cout << "C";
  // }else if(marks >= 45){
  //   cout << "D";
  // }else if(marks >= 25){
  //   cout << "E";
  // }else{
  //   cout << "F";
  // }
  // return 0;

  /*AGE PROGRAM*/

  // int age;
  // cout << "Enter your age: ";
  // cin >> age;

  // if(age < 18){
  //   cout << "Not eligible for jobs";
  // }else if(age <= 54){
  //   cout << "Eligible for jobs";
  // }else if(age <= 57){
  //   cout << "Eligible for jobs but retirement soon";
  // }else{
  //   cout << "retirement soon";
  // }

  /*NESTED IF version*/
  // if(age < 18){
  //   cout << "Not eligible for jobs";
  // }else if (age <= 57){
  //   cout << "Eligible for jobs";
  //   if(age >= 55){
  //     cout << "retirement soon";
  //   }
  // }else{
  //   cout << "retirement soon";
  // }

  /*SWITCH CASE PROGRAM*/
  int day;
  cout << "Enter the day number";
  cin >> day;

  switch (day)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Enter valid day number";
  }
}