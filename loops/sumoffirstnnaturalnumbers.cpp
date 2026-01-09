#include<iostream>
using namespace std;
int main(){
    int num;cout<<"enter number";cin>>num;
    int sum =0;
    for(int i=0;i<=num;i++){
        sum = sum+i;
    }
    cout<<"the sum is "<<sum<<endl;
    
 return 0;   
}