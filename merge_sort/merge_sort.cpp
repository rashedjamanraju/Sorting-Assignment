#include <bits/stdc++.h>
using namespace std;

string student_name = "Rashed Jaman Raju";
string student_id = "C251100";
string algorithm = "Merge Sort";

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
}

void merge_part(vector<int> &a, int l, int m, int r) {
  vector<int> left, right;

  for (int i = l; i <= m; i++) left.push_back(a[i]);
  for (int i = m + 1; i <= r; i++) right.push_back(a[i]);

  int i = 0, j = 0, k = l;

  while (i < left.size() && j < right.size()) {
    if (left[i] <= right[j]) {
      a[k] = left[i];
      i++;
    } else {
      a[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < left.size()) {
    a[k++] = left[i++];
  }

  while (j < right.size()) {
    a[k++] = right[j++];
  }
}

void mergeSort(vector<int> &a, int l, int r) {
  if (l >= r) return;

  int mid = (l + r) / 2;

  mergeSort(a, l, mid);
  mergeSort(a, mid + 1, r);

  merge_part(a, l, mid, r);
}

int main() {
  fast_io();

  freopen("input.in", "r", stdin);

  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  auto start = chrono::high_resolution_clock::now();

  mergeSort(v, 0, n - 1);

  auto end = chrono::high_resolution_clock::now();
  auto time = chrono::duration_cast<chrono::milliseconds>(end - start);

  cout << "Student Name   : " << student_name << "\n";
  cout << "Student ID     : " << student_id << "\n";
  cout << "Algorithm Name : " << algorithm << "\n";
  cout << "Input Size     : " << n << "\n";
  cout << "Execution Time : " << time.count() << " ms\n";
  cout << "-----------------------------\n";

  return 0;
}
