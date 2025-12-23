#include <iostream> //or <bits/stdc++.h>
using namespace std;

int main() {
	int N,X; 
	cin>>N>>X;
	
	int arr[N];
	for(int i=0;i<N;i++){
	    cin>>arr[i];
	}

bool found=false; 
for(int i=0;i<N;i++){
    if (arr[i]==X){
        found=true; 
        break;
    }
    
}
if(found){
    cout<<"YES"<<endl;
    
}else{
    cout<<"NO"<<endl;
}
return 0;
}
