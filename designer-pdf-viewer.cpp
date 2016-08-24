#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ar[26],maxi=0;
    for(int i=0;i<=25;i++)
        {
        cin>>ar[i];
    }
    string s;
    cin>>s;
    for(int i=0;s[i];i++)
        {
        maxi=max(maxi,ar[s[i]-'a']);
    }
    cout<<maxi*(s.size());
    return 0;
}