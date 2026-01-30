#include <bits/stdc++.h>

using namespace std;

/*STL library -> algorithms , functions , containers, iterators*/

/*PAIRS -> Pair is a generic data type that lets us logically group two values together. It belongs to the utility library*/

int main()
{
  // creating a pair
  pair<int, int> p = {2, 5};

  // getting the elements from a pair
  cout << p.first << " " << p.second << endl;

  // storing more than 2 values in a pair using nested pairs
  pair<int, pair<int, int>> p2 = {1, {2, 3}};

  // getting elements from a nested pair
  cout << p2.second.first << endl;

  // we can store different data types in a pair
  pair<int, float> p3 = {1, 5.5};
  cout << p3.second << endl;

  // we can have an array of pairs
  pair<int, int> arr[3] = {{1, 2}, {2, 3}, {5, 8}};
  cout << arr[1].second;

  return 0;
}