#include <iostream>

using namespace std;

int main() {
   int input1;
   int input2;
   int small;
   int large;
   cout<<"Write No.1:";
   cin>>input1;
   cout<<"Write No.2:";
   cin>>input2;
   if(input1>input2){
    large=input1;
    small=input2;
   }
   else{
    large=input2;
    small=input1;
   }
   for(;large>=10;large=large/small)
   cout<<large<<endl;
cout<<large<<endl;
   large=large+2;
   large=large*30;
   for(;large>=0;large-=9)
   cout<<large<<endl;
    } return 0;
