#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Hashing of charecters
    int t;cin>>t;

    char arr[t];
    int hasharr[26]={0};
    //a is 76

    cin>>arr;

    for (int i=0; i < t; i++){
        hasharr[arr[i]-'a']++;
    }
    for(int i=0;i<26;i++){
            cout<<char('a'+i)<<": "<<hasharr[i]<<endl;
    }
    return 0;
}