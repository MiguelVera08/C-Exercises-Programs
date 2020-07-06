//Palindrome number alogrithim checker
#include <iostream>  
using namespace std;  
int main(){  
  int n,r,sum=0,temp;    
  cout<<"Enter a Number: ";    
  cin>>n;    
  temp=n;    
  while(n>0)    
{    
  r=n%10;    
  sum=(sum*10)+r;    
 n=n/10;    
}    
  if(temp==sum)    
  cout<<"Number is a Palindrome.";    
  else    
  cout<<"Number is not a Palindrome.";   
  return 0;  
}


//Example outputs
//Enter a number: 121
//Number is a Palindrome

//Enter a number: 113
//Number is not a Palindrome
