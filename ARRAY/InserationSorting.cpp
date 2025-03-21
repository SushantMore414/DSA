

#include <iostream>

using namespace std;

int main()
{
  int arr[] = {8, 5, 9, 1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  // int arr[1000];
  // int n;
  // cout<<"Enter the size of array:";
  // cin>>n;
  // cout<<"Enter the array:";
  // for (int i = 0; i < n; i++)
  // {
  //  cin>>arr[i];
  // }
  

  for (int i = 1; i <n; i++)
  { 
    for (int j = i; j >0; j--)
    { 
      if (arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }
      else
      {
        break;
      }
      
    }
    
  }

  // Print sorted array
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
