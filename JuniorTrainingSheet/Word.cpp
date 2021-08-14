#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int low=0,high=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]>90){
	        low++;
	    }
	    else{
	        high++;
	    }
	}
	if(high>low){
	    for(int i=0;i<s.size();i++){
	        s[i]= ::toupper(s[i]);
	    }
	    cout<<s;
	} 
	else{
	    for(int i=0;i<s.size();i++){
	        s[i]= ::tolower(s[i]);
	    }
	    cout<<s;
	}
	return 0;
}
