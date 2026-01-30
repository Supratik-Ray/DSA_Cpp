#include <bits/stdc++.h>

using namespace std;

int main()
{
  // all the elements stored in the array needs to be of same data type
  // int arr[3];
  // cin >> arr[0] >> arr[1] >> arr[2];
  // arr[1] += 5;
  // cout << arr[1];
  // return 0;

  /*LENGTH OF ARRAY*/
  //-> we can get arra length using size() function and passing array into it

  /*2D arrays*/
  // first index is row index and second column index
  int arr[3][4];
  arr[2][2] = 45;
  cout << arr[2][2] << endl;
  // garbage value
  cout << arr[1][3];
}