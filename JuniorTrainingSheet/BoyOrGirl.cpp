#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    unordered_map<int,int> map;
    int count=0;
    cin>>a;
    for(int i=0;i<a.size();i++){
        map[a[i]]++;
        
    }
    
    (map.size()%2==0)?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";
    return 0;
}
