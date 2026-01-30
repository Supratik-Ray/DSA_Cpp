#include <bits/stdc++.h>

using namespace std;

int main()
{
  /*FOR LOOP*/

  // the i in for loop is scoped to the loop block

  // for (int i = 1; i <= 10; i++)
  // {
  //   cout << i;
  // }

  // we can also do this to be able to access i or the counter variable

  // int i;

  // for (i = 1; i <= 10; i++)
  // {
  //   cout << i;
  // }
  // cout << i;

  /*REVERSED FOR LOOP*/

  // for (int i = 5; i > 0; i--)
  // {
  //   cout << i;
  // }

  /*WHILE LOOP*/
  int i = 1;

  while (i <= 10)
  {
    cout << i << endl;
    i++;
  }

  /*DO WHILE LOOP*/
  // atleast runs the code once

  int j = 5;

  do
  {
    cout << j;

  } while (j < 3);

  return 0;
}