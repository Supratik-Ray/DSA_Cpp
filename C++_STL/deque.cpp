#include <bits/stdc++.h>

using namespace std;

/*DEQUE -> Similar data structure as vector and list*/

int main()
{
  deque<int> dq;

  dq.push_back(5);
  dq.emplace_back(10);

  dq.push_front(3);
  dq.emplace_front(20);

  for (auto el : dq)
  {
    cout << el << endl;
  }

  dq.pop_back();
  dq.pop_front();

  for (auto el : dq)
  {
    cout << el << endl;
  }

  cout << dq.back() << endl;
  cout << dq.front() << endl;

  // rest functions same as vector
  // begin, end, rbegin, rend, insert, clear, size, swap, empty
  return 0;
}