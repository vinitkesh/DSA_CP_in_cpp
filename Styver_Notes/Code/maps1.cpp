#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //precompute
    map<int,int> mp;
    // or map<long long int,int> mp; if number is large

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    //queries
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch 
        cout<<num<<":"<<mp[num]<<"| ";
    }
    return 0;
}