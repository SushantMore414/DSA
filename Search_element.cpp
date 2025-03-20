#include<iostream>
using namespace std;
int main(){
  int arr[]={1, 4, 6, 3, 7, 8};
  int x=8;
int size=sizeof(arr)/4;
cout<<size<<endl;;
  for (int i = 0; i<size; i++)
  {
    if (arr[i]==x)
    {
      
      cout<<i;
    }
    
    
  }
  
}