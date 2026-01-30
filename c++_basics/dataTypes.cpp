#include<bits/stdc++.h>

using namespace std;

int main(){
  //int, long, long long, float, double
  int a = 10;
  long b = 100000;
  long long c = 999999999;
  float d = 3.14;
  double e = 41.65558;
  //strings
  string one, two;
  //each cin takes only the input before the empty space so we need 2 variables
  // cin >> one >> two;
  // cout << one << " " << two;

  //but to get the entire line, we can use getline()
  string myName;
  getline(cin,myName);
  cout << myName;

  //char
  char ch = 'a';

  return 0;
}