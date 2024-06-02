#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> vec(n);
    int numEntries, num;

    for (int i = 0; i < n; i++) {
        cin >> numEntries;
        for (int j = 0; j < numEntries; j++) {
            cin >> num;
            vec[i].push_back(num);
        }
    }

    int first, second;
    for (int i = 0; i < q; i++) {
        cin >> first >> second;
        cout << vec[first][second] << endl;
    }
    return 0;
}

/*Consider an n-element array,a ,
where each index i  in the array contains a reference to an array of  integers ki
(where the value i of  varies from array to array).

Given a , you must answer q queries. Each query is in the format i j,
where i denotes an index in a array  and j denotes an index in the array  located at a[1] .
For each query, find and print the value of element j in the array at location a[i]  on a new line.*/
