#include <bits/stdc++.h>

using namespace std;

/*IMPORTANT STL FUNCTIONS*/
// sort(), __builtin_popcount(), __buitin_popcountll(), next_permutation(), max_element(), min_element()

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;
  if (p1.first > p2.first)
    return true;
  return false;
}

int main()
{
  /*sort() -> it requires the beginning and end address(not including)*/

  // sorting an array
  int arr[] = {7, 2, 4, 1, 9};

  int *a = arr;
  int len = size(arr);
  sort(a, a + len);

  cout << "---ARRAY-SORT----" << endl;
  for (int el : arr)
  {
    cout << el << endl;
  }

  // sorting a vector
  vector<int> vect = {2, 1, 7, 3};

  sort(vect.begin(), vect.end());

  cout << "---VECTOR-SORT----" << endl;
  for (int el : vect)
  {
    cout << el << endl;
  }

  // sorting a part of the container
  vector<int> v = {2, 1, 7, 3};

  sort(v.begin(), v.begin() + 3);

  cout << "---VECTOR-PART-SORT----" << endl;
  for (int el : v)
  {
    cout << el << endl;
  }

  // sorting in descending order

  sort(v.begin(), v.end(), greater<int>());

  cout << "---VECTOR-DESCENDING-SORT----" << endl;
  for (int el : v)
  {
    cout << el << endl;
  }

  // custom comparators

  pair<int, int> arr2[] = {{1, 2}, {2, 1}, {4, 1}};

  sort(arr2, arr2 + size(arr2), comp);

  cout << "---CUSTOM-COMPARATOR-SORT----" << endl;
  for (auto el : arr2)
  {
    cout << el.first << " " << el.second << endl;
  }

  /*__builtin_popcount(), __builtin_popcountll() -> how many set bits(1s) are there in the binary representation of that number*/
  //__builtin_popcountll() used for long long data type

  int num = 7;
  long long num2 = 154723598412;
  cout << "NUMBER OF SET BITS" << endl;
  cout << __builtin_popcount(num) << endl;
  cout << __builtin_popcountll(num2) << endl;

  /*next_permutation() ->  gives the next permutation in the dictionary order but if not present returns null*/
  // if the string is in a sorted order it gives all possible permutations but if its not sorted and in the middle of the dictionary order, then it gives back only the next possible permutations possible in the dictionary order

  string s = "213";

  cout << "ALL PERMUTATIONS" << endl;
  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  cout << s << endl; // -> "123" (it gets mutated into the smallest value in the dictionary order)

  /* *max_element() gives back the maximum element and *min_element() vice-verca */

  cout << "MAX-MIN" << endl;

  int maxi = *max_element(v.begin(), v.end());
  cout << maxi << endl;

  int mini = *min_element(v.begin(), v.end());
  cout << mini << endl;

  return 0;
}