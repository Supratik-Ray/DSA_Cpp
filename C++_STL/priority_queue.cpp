#include <bits/stdc++.h>

using namespace std;

/*PRIORITY_QUEUE*/
// The largest element is found at top
// push() and pop() has a time complexity of O(n);
// top() -> O(1)
// internally its implmented using tree data structure
// Its also known as max heap

int main()
{
  priority_queue<int> pq;

  // push
  pq.push(5);
  pq.push(14);
  pq.push(12);
  pq.emplace(10);

  // top
  cout << pq.top() << endl; //-> 14

  // pop
  pq.pop();

  cout << pq.top() << endl; //-> 12

  // size(), swap() and empty() same as others

  /*MIN HEAP*/
  // smallest element at top
  priority_queue<int, vector<int>, greater<int>> pq2;
  pq2.push(5);
  pq2.push(14);
  pq2.push(12);
  pq2.emplace(10);

  cout << pq2.top() << endl; //-> 5

  return 0;
}