#include <bits/stdc++.h>

using namespace std;

/*QUEUE*/
// FIFO Data structure
// all operations having in O(1) time

int main()
{
  queue<int> q;

  // push
  q.push(5);
  q.push(10);
  q.emplace(12);

  // front and back

  cout << "FRONT: " << q.front() << endl;
  cout << "BACK: " << q.back() << endl;

  // pop
  q.pop();
  cout << "FRONT: " << q.front() << endl;

  // size(), swap() and empty() same as stack

  return 0;
}