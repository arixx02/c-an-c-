#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    do{cin>>n;}while(n<1 || n>1000);
    int arr[n],i;
    for(i=0;i<n;i++)
        {
        do{cin>>arr[i];}while(arr[i]<1 || arr[i]>10000);
        }
    for(i=n-1;i>=0;i--)
        {
        printf("%d ",arr[i]);
        }
    return 0;
}
