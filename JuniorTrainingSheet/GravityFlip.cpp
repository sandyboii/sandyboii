#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
	vector<int> hgh(a);
	for(int i=0;i<a;i++){
	    cin>>hgh[i];
	    
	}
	sort(hgh.begin(),hgh.end());
	for(auto a:hgh){
	    cout<<a<<" ";
	}
	return 0;
}
