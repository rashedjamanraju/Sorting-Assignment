#include <bits/stdc++.h>
using namespace std;

string student_name = "Rashed Jaman Raju";
string student_id = "C251100";
string algorithm = "Quick Sort";

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}


int partitionFunc(vector<int> &a, int low, int high) {
    int pivot = a[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            swap(a[i], a[j]);
            i++;
        }
    }

    swap(a[i], a[high]);
    return i;
}
void quickSort(vector<int> &a, int low, int high) {
    if (low < high) {
        int p = partitionFunc(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main() {
    fast_io();

    freopen("input.in", "r", stdin);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    auto start = chrono::high_resolution_clock::now();

    quickSort(v, 0, n - 1);

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
