#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int arr[t];
    int hasharr[1000000]={0};
    
    while(t--){
       cin>>arr[t];
       hasharr[arr[t]]++;
    }
    for(int i=0;i<1000000;i++){
        if(hasharr[i]>0){
            cout<<i<<": "<<hasharr[i]<<endl;
        }
    }
    return 0;
}