// Problem Link: Insertion sort

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;

const int MOD = 1e9 + 7;
const double PI = 3.141592653589793;

string student_name = "Rashed Jaman Raju";
string student_id = "C251100";
string algorithm = "Insertion Sort";

// ---------- Fast IO ----------
void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

// ---------- Insertion Sort -------------
void insertion_sort(vector<int> &v, int n) {
  for (int i = 1; i < n; i++) {
    int key = v[i];
    int j = i - 1;

    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      j--;
    }

    v[j + 1] = key;
  }
}

void solve() {
  // Write your solution here
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; ++i) {
    /* code */
    cin >> v[i];
  }

  // ⏱️ Start time
  auto start = chrono::high_resolution_clock::now();

  insertion_sort(v, n);

  // ⏱️ End time
  auto end = chrono::high_resolution_clock::now();

  // ⏱️ Duration in milliseconds
  auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

  // for (auto each : v) {
  //   cout << each << " ";
  // }
  // cout << endl;

  cout << "Student Name   : " << student_name << "\n";
  cout << "Student ID     : " << student_id << "\n";
  cout << "Algorithm Name : " << algorithm << "\n";
  cout << "Input Size     : " << n << "\n";
  cout << "Execution Time : " << duration.count() << " ms\n";
  cout << "-----------------------------\n";
}

int main() {
  fast_io();

  freopen("input.in", "r", stdin);

  solve();

  return 0;
}
