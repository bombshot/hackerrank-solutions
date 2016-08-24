#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int sum=0;
int ar[100006],arr[100008];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
        {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<m;i++)
        {
        if(i==0)
            {
            for(int j=0;j<arr[i]-1;j++)
                {
                ar[j]=min(ar[j],arr[i]-j-1);
            }
        }
        else
            {
            for(int j=arr[i-1]-1;j<arr[i]-1;j++)
                {
                ar[j]=min(ar[j],arr[i]-j-1);
            }
        }
    }
    for(int i=0;i<n;i++)
        {
        sum+=ar[i];
     //   cout<<ar[i]<<" ";
    }
    cout<<sum;
    return 0;
}