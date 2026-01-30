#include <bits/stdc++.h>

using namespace std;

int main()
{
  // strings are just array of characters
  string myName = "supratik";
  // accessing a character in string
  cout << myName[1] << endl;

  // modifying a character in string
  myName[1] = 'o';
  cout << myName << endl;

  // getting length of string
  int len = size(myName);
  cout << len << endl;

  // getting last character in a string
  char last = myName[len - 1];
  cout << last << endl;
}