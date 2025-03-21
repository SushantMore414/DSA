

#include <iostream>

using namespace std;

int main()
{
  // int arr[] = {8, 5, 9, 1, 4};
  // int n = sizeof(arr) / sizeof(arr[0]);
  int arr[1000];
  int n;
  cout<<"Enter the size of array:";
  cin>>n;
  cout<<"Enter the array:";
  for (int i = 0; i < n; i++)
  {
   cin>>arr[i];
  }
  

  for (int i = n - 1; i > 0; i--)
  { // Loop for passes
    bool swapped = false;
    for (int j = 0; j < i; j++)
    { // Bubble up the largest element
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
    {
      break; // If no swaps occurred, the array is already sorted
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
