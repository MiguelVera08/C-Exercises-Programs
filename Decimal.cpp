//Program to convert Decimal to Binary
//Convert any decimal number(base-10(0 to 9)) into binary number (base-2 (0 or 1))

#include <iostream>  
using namespace std;


int main(){
  int x[10], y, z;
  
  cout <<"Enter a number to convert: ";
  
  cin>>y;
  for(i=0; y > 0; i++){
    
    x[i] = y % 2;
    
    y = y / 2;
  }
  
  cout <<"Your number in binary: ";
