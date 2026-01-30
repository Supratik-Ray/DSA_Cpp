#include <bits/stdc++.h>

using namespace std;

/*FUNCTIONS*/
//-> functions are named block of codes that we can execute as many times as we want by calling the function name
//-> functions are made to perform a specific task
//-> function help us organize and modularize code
//-> functions help us encapsulate repetitive code and make our code more readable

/*TYPES OF FUNCTIONS*/
//-> void funtion / return type funtion
//-> parameterized / non-parameterized function

// there are many inbuilt functions too. e.g -> min(), max()

/*2 WAYS TO PASS ARGUMENTS TO FUNCTION -> pass by value and pass by reference*/
// -> arrays are always passed by reference
// -> other data types are by default passed by value unless we specify using the '&' before parameter name

void printName(string name)
{
  cout << name;
}

int sum(int a, int b)
{
  return a + b;
}

int maxx(int num1, int num2)
{
  if (num1 > num2)
    return num1;
  // if we give a int return type but dont return back any value, we will get garbage value
  return num1;
}

// PASS BY VALUE

void doSomething(int num)
{
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
}

// PASS BY REFERENCE

void doAnotherThing(int &num)
{
  num += 5;
  cout << num << endl;
  num += 5;
  cout << num << endl;
}

void changeArrItem(int arr[])
{
  arr[2] += 5;
}

int main()
{
  // string userName;
  // cin >> userName;
  // printName(userName);

  // int a, b, result;
  // cin >> a >> b;
  // result = sum(a, b);
  // cout << result;
  // cout << maxx(a, b);

  // int num;
  // cin >> num;
  // doSomething(num);
  // cout << "Inside main function: " << num << endl;
  // doAnotherThing(num);
  // cout << "Inside main function: " << num;

  // ARRAYS(always passed by reference)
  int arr[5];

  // array + loop
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }

  cout << "CHANGE ORIGINAL ARRAY ITEM BY REFERENCE" << endl;

  changeArrItem(arr);

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}