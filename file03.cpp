#include <iostream>

using namespace std;

int main() {
  int input1;
  int input2;
  int x;
  cout<<"Write No.1:";
  cin>>input1;
  cout<<"Write No.2:";
  cin>>input2;
  if(input1>=input2){
   do{
      cout<<"Enter 2nd No. Again:";
      cin>>input2;
   } while(input1>=input2);
  }
  x=input1*input2;
  for(;x>=0;x--)
  if(x%5==o){
   if(x%3==0){
      cout<<x<<" "<<endl;
   }
  }
    } return 0;
