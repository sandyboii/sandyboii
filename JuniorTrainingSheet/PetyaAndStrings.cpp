#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<=90){
            a[i]=a[i]+32;
        }
        if(b[i]<=90){
            b[i]=b[i]+32;
        }
        if(a[i]==b[i]){
            if(i== a.size()-1){
                cout<<0;
                break;
            }
        }
        else if(a[i]>b[i]){
            cout<<1;
            break;
        }
        else{
            cout<<-1;
            break;
        }
}
}
