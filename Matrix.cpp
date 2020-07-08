//Create matrix multiplication tables


#include <iostream>  
using namespace std;  
int main(){
  int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
  cout<<"enter the number of row=";    
  cin>>r;    
  cout<<"enter the number of column=";    
  cin>>c;    
  cout<<"enter the first matrix element=\n";    
  for(i=0;i<r;i++){    
    for(j=0;j<c;j++){    
      cin>>a[i][j];  
    }    
  }    
  cout<<"enter the second matrix element=\n";    
  for(i=0;i<r;i++){    
    for(j=0;j<c;j++){    
      cin>>b[i][j];    
    }    
  }    
