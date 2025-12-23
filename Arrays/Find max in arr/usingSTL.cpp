//Code are done in test cases you can remove the test case line

#include<iostream> //or #include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int N;
        cin>>N;
        vector<long long>arr(N);
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        long long mx=*max_element(arr.begin(),arr.end());
        cout<<mx<<endl;
    }
    return 0;
}