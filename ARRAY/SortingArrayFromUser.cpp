#include<iostream>
using namespace std;

int main(){
  int arr[1000];
  int n;

  cout<<"Enter The size of Array:";
  cin>>n;
  cout<<"Enter The Elemants:";
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  


  for (int i = 0; i <=n-1; i++)
  {
    int index=i;
    for (int j = i+1; j <=n-1; j++)
    {
      if (arr[j]<arr[index])
      {
        index=j;
      }
      swap(arr[i],arr[index]);
    }
    
  }
  for (int i=0; i<=n-1; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}