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
  vector<int> v1 = {1, 5, 3};

  // defining vector size -> each index contains garbage value
  vector<int> v2(5);

  // defining a vector with particular size and storing same value in it
  vector<int> v3(5, 20);

  /*INSERTING*/

  // 2 ways of inserting into vector -> push_back() , emplace_back()
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
  // NOTE: v.at() method is not used as much
  cout << v1[1] << " " << v1.at(2) << endl;

  /*TRAVERSING VECTOR USING ITERATOR*/

  return 0;
}