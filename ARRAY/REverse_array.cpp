#include<iostream>
using namespace std;
int main(){
  int arr[]={2,4,6,7,4};

  int i=0,j=4;
  while (i<j)
  {
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
  for (int k = 0; k <=4; k++)
  {
    cout<<arr[k]<<",";
  }
  
  
  
}