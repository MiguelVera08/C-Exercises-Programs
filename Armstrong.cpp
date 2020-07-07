//Armstrong Number program to check if number input is Armstrong or not. An Armstrong number is a number equal to the sum ob its digits.
//For example 0,1,153,370,371,407
//
//371 = (3*3*3)+(7*7*7)+(1*1*1)    
//where:    
//(3*3*3)=27    
//(7*7*7)=343    
//(1*1*1)=1    
//So: 27+343+1=371 

#include <iostream>
using namespace std;

int main(){
  int x,y,sum = 0, temp;
  
  //Get input from user
  cout<<"Enter a Number: ";
  
  cin>>x;
  temp = x;
  
  while(x > 0){
    
    y = x % 10;
    
    sum = sum + (y*y*y);
    
  }
}
