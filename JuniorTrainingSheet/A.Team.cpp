#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,count=0;
	cin>>a;
	vector<int> values(a);
	for(int i=0;i<a;i++){
	    for(int j=0;j<3;j++){
	        int b;
	        cin>>b;
	        if(b>0){
	            values[i]++;
	        }
	    }
	    if(values[i]>1){
	        count++;
	    }
	}

	cout<<count;
	return 0;
}
