#include <bits/stdc++.h>

using namespace std;

/*MAP (unique, sorted)*/
// data structure that stores key value pairs
// the key must be unique but the value can be duplicate
// the key is in sorted order
// internally implemented using balanced binary search tree
// insert, access, find, delete -> O(log n)

/*MULTIMAP (duplicate, sorted)*/
// everything same as map, only it can store multiple keys of same value
// only mpp[key] cannot be used here

/*UNORDERED MAP* (unique, unsorted)*/
// same as set and unordered_set difference
// insert,access,find, delete -> O(1) ,worst case-> O(n)

int main()
{

  /*DECLARING A MAP*/
  map<int, int> mpp;
  map<int, pair<int, int>> mpp2;
  map<pair<int, int>, int> mpp3;

  /*INSERTING INTO MAP*/

  // 1)
  mpp[1] = 5;
  mpp2[4] = {4, 7};
  mpp3[{1, 2}] = 12;

  // 2)
  mpp.insert({3, 10});
  mpp2.insert({2, {1, 7}});
  mpp3.insert({{2, 1}, 45});

  // 3)
  mpp.emplace(2, 6);
  mpp2.emplace(5, make_pair(2, 5));
  mpp3.emplace(make_pair(7, 2), 69);

  /*LOOPING OVER MAP*/

  // el -> holds a pair containing key and value
  for (auto el : mpp3)
  {
    cout << el.first.second << " " << el.second << endl;
  }

  // we can also loop using iterator e.g mpp.begin();

  /*RETRIEVING VALUE*/

  cout << mpp[1] << endl;
  cout << mpp3[{7, 2}] << endl;
  // if key doesn't exist it return null which prints 0 in terminal
  cout << mpp[9] << endl;

  /*FINDING VALUE*/

  // find() takes the key and returns an iterator that holds the memory address of the key value pair
  auto it = mpp.find(3);

  //*it evaluates to a pair containing key-value
  cout << (*it).second << endl;

  // if key doesn't exist it2 holds the memory location right after the memory location of last item in the map
  auto it2 = mpp.find(45);

  /*OTHER*/

  auto it3 = mpp.lower_bound(2);
  auto it4 = mpp.upper_bound(3);

  // erase, swap, size, empty are same as others

  return 0;
}