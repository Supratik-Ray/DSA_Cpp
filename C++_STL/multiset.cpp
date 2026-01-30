#include <bits/stdc++.h>

using namespace std;

/*MULTISET*/
// everything is same as set
// only stores duplicate element also

int main()
{
  multiset<int> ms;

  /*INSERTION (ALLOWS DUPLICATE)*/
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(7);

  /*COUNT*/
  cout << "COUNT OF 1: " << ms.count(1) << endl;

  /*DELETION*/
  ms.erase(1); // -> erases all 1s

  ms.erase(ms.find(1)); // erases first 1

  // deletes range
  ms.erase(ms.find(2), ms.end());

  // rest all functions same as set
  return 0;
}