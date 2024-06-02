#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  int n,q,u,i,j,k;
    cin>>n>>q;
    vector<int> arr[n];
    int num;
    for(u=0;u<n;u++)
        {
        cin>>k;
        for(i=0;i<k;i++)
            {
            cin>>num;
            arr[u].push_back(num);
            }
        }
    for(u=0;u<q;u++)
        {
        cin>>i>>j;
        printf("%d\n",arr[i][j]);
        }
    return 0;
}
