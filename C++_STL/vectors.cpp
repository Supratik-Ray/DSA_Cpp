#include <bits/stdc++.h>

using namespace std;

/*VECTORS -> container with dynamic size*/
/*ITERATORS -> An iterator in C++ is an object that acts like a pointer and lets you traverse elements of a container (vector, list, map, etc.) without knowing how the container is implemented.*/

int main()
{
  /*DECLARING AND INITIALIZING*/

  // declaring a vector
  vector<int> v;

  // declaring and initializing a vector
  vector<int> v1 = {1, 5, 3, 4, 7, 8};

  // defining vector size -> each index contains garbage value
  vector<int> v2(5);

  // defining a vector with particular size and storing same value in it
  vector<int> v3(5, 20);

  /*INSERTING AT END*/

  // 2 ways of inserting at end into vector -> push_back() , emplace_back()
  // push_back() -> first creates the element in memory then copies it into vector
  v.push_back(5);

  // emplace_back() -> directly create the element into the vector (faster)
  v1.emplace_back(10);

  // we can have vector of pairs
  vector<pair<int, int>> vect;

  vect.push_back({5, 2});
  // to insert a pair using emplace_back() we need to remove the curly braces
  vect.emplace_back(5, 2);

  /*RETRIEVING*/

  // we can retrieve an element by using either index or v.at() method
  // v.back() -> gets last element in vector
  // NOTE: v.at() method is not used as much
  cout << v1[1] << " " << v1.at(2) << endl;
  cout << v1.back() << endl;

  /*TRAVERSING VECTOR USING ITERATOR*/

  // v.begin() -> returns an iterator pointing at the memory address of the first element
  // v.end() -> returns an iterator pointing at the memory address right after the last element

  // NOTE: not used much!
  //  v.rbegin()
  //  v.rend()
  // rbegin() returns a reverse iterator to the last element, and rend() returns a reverse iterator to one before the first element, allowing backward traversal of a container.

  cout << "----TRAVERSING begin()-----" << endl;
  vector<int>::iterator it = v1.begin();
  cout << *it << endl;

  it++;

  cout << *it << endl;

  cout << "----TRAVERSING end()-----" << endl;
  vector<int>::iterator it2 = v1.end();
  it2--;

  cout << *it2 << endl;

  cout << *it2 << endl;

  cout << "----TRAVERSING rbegin()-----" << endl;
  vector<int>::reverse_iterator it3 = v1.rbegin();

  cout << *it3 << endl;

  it3++;

  cout << *it3 << endl;

  cout << "----TRAVERSING rend()-----" << endl;
  it3 = v1.rend();

  it3--;

  cout << *it3 << endl;

  it3--;

  cout << *it3 << endl;

  // LOOPING THROUGH VECTOR
  // auto -> auto keyword lets the compiler automatically deduce and assign the type of variable based on the value assigned to it
  cout << "----LOOPING USING ITERATOR" << endl;

  for (auto i = v1.begin(); i != v1.end(); i++)
  {
    cout << *i << endl;
  }

  cout << "----LOOPING USING FOREACH LOOP" << endl;

  for (auto el : v1)
  {
    cout << el << endl;
  }

  /*DELETING FROM A VECTOR*/

  // we can use v.erase() to delete an element in a vector
  // we need to provide the address of the element we want to delete
  // to delete a range of elements we provide (starting address) and (end address + 1 )

  // deleting second element
  v1.erase(v1.begin() + 1);

  cout << "AFTER DELETING SINGLE ELEMENT" << endl;

  for (auto el : v1)
  {
    cout << el << endl;
  }

  v1.erase(v1.begin() + 1, v1.begin() + 4);

  cout << "AFTER DELETING RANGE OF ELEMENTS" << endl;

  for (auto el : v1)
  {
    cout << el << endl;
  }

  /*INSERTING ELEMENT IN BETWEEN*/
  // NOTE: the vector resuffles after the insertion

  // inserting one value at the beginning
  v1.insert(v1.begin(), 50);

  // inserting multiple elements of same value(e.g: here we inserted two 9s at index 1)
  v1.insert(v1.begin() + 1, 2, 9);

  cout << "AFTER INSERTING" << endl;

  for (auto el : v1)
  {
    cout << el << endl;
  }

  /*COPYING*/

  // inserting a range of elements from one vector to another
  vector<int> original(10, 100);
  vector<int> copy(5, 50);

  original.insert(original.begin(), copy.begin(), copy.end());

  cout << "AFTER COPYING" << endl;

  for (auto el : original)
  {
    cout << el << endl;
  }

  // copying a complete vector while declaring a new vector
  vector<int> vec(copy);

  cout << "COPYING DURING VECTOR DUCLARATION" << endl;

  for (auto el : vec)
  {
    cout << el << endl;
  }

  /*OTHER USEFUL VECTOR METHODS*/
  // v.size() -> gives size of the vector
  // v.pop_back() -> pops off the last element in the vector
  // v1.swap(v2) -> swaps 2 vectors
  // v.clear() -> erases the entire vector
  // v.empy() -> tells whether the vector is empty or not

  cout << v1.size() << endl;

  v3.pop_back();

  cout << "--AFTER pop_back()" << endl;

  for (auto el : v3)
  {
    cout << el << endl;
  }

  original.swap(copy);

  cout << "--AFTER swap()" << endl;

  for (auto el : original)
  {
    cout << el << endl;
  }

  original.clear();

  cout << "--AFTER clear()" << endl;

  for (auto el : original)
  {
    cout << el << endl;
  }

  if (original.empty())
    cout
        << "vector empty";
  else
    cout << "vector not empty";

  return 0;
}