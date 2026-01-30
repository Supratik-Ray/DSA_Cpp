#include <bits/stdc++.h>

using namespace std;

/*SET -> container that stores values in sorted and unique fashion*/
// internally implemented using tree data structure

int main()
{
  set<int> st;

  /*INSERTING INTO SET*/

  //(duplicate values are ignored)
  // time complexity -> O(log n)
  st.insert(5);
  st.insert(2);
  st.insert(5);
  st.insert(7);
  st.insert(1);
  st.emplace(6);

  // functionality of insert in vector can be used also, that only increases efficiency e.g(st.insert(st.begin(),el))
  // it increases efficiency because if the memory adress we insert at is the correct position then the time complexity will be O(1)
  // begin(), end(), rbegin(), rend(), size() , empty(), swap() are same as those of vectors

  for (auto el : st)
  {
    cout << el << endl;
  }

  /*FINDING A VALUE*/

  // time complexity -> O(log n)

  // st.find() returns an iterator pointing to the found element if found
  auto it = st.find(5);

  // st.find() returns an iterator holding the memory address right after the address of the last element if not found
  auto it2 = st.find(25);

  /*COUNT*/
  cout << "COUNT OF 5 " << st.count(5) << endl;   //-> 1
  cout << "COUNT OF 60 " << st.count(60) << endl; //-> 0

  /*DELETING A VALUE*/

  // takes O(log n) time to delete
  st.erase(5);

  auto it3 = st.find(2);

  // takes O(1) to delete
  st.erase(it3);

  // we can also delete a range of values just like in vector
  // NOTE: The iterator returned in vector and set are different types of iterators and st.begin() + 2 doesnt work
  // st.erase(it1,it2) //not including end address
  st.erase(st.begin(), st.end());

  /*lower_bound() and upper_bound() function works in the same way as in vector*/
  // syntax
  // auto it = st.lower_bound(5);
  // auto it = st.upper_bound(10);

  return 0;
}