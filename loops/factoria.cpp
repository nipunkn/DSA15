#include<iostream>
using namespace std;
int main(){
   int num ;cout<<"enter number";cin>>num;
   int fact =1;
   for(int i=1;i<num;i++){
    fact=fact*i;
   }
   cout<<fact<<endl;
    
 return 0;   
}