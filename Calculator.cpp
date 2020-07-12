//Create a calculator that takes a number, math operater ex... +,-,*,/,^ and a second number from user then print
//the result.
//Example:
//   5 + 3 = 8

#include<iostream>
using namespace std;


float add(float a, float b){
  return a + b;
}

float sub(float a, float b){
  return a - b;
}

float multiply(float a, float b){
  return a * b;
}

float divide(float a, float b){
  
  if(b !=0){
    
    return a / b;
  }
  std::cout << "You can't divide by 0. \n";
  return 0;
}
