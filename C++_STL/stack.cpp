#include <bits/stdc++.h>

using namespace std;

/*STACK*/
// LIFO Data structure
// cannot access elements using index e.g st[2]
// push(), pop(), top() have a time complexity of O(1)

int main()
{
  stack<int> st;

  // push
  st.push(5);
  st.push(10);
  st.push(25);
  st.emplace(12);

  // get top
  cout << st.top() << endl;

  // pop
  st.pop();

  cout << st.top() << endl;

  // size(),empty(),swap()
  cout << st.size() << endl;

  cout << st.empty() << endl;

  stack<int> s1, s2;

  s1.swap(s2);

  return 0;
}