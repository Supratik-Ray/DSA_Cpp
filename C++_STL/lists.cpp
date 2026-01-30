#include <bits/stdc++.h>

using namespace std;

/*LIST -> a list is a similar dynamic container to vector but has some front side operations like push_front() and emplace_front(). In vectors to insert something at the beginning, we needed to use insert() but its more costly than push_front() in list. This is bcoz list is implemented using  doubly linked list so insert opertation in the beginning is not as costly*/

int main()
{
  list<int> ls;

  ls.push_back(5);
  ls.emplace_back(10);

  ls.push_front(3);
  ls.emplace_front(20);

  for (auto el : ls)
  {
    cout << el << endl;
  }

  // rest functions same as vector
  // begin, end, rbegin, rend, insert, clear, size, swap, empty
  return 0;
}