// #include <iostream>
// using namespace std;

// int main()
// {
//     int n=5;
//     int ans=1;
//     int po=4;
//     for(int i=1;i<=po;i++){
//         ans =ans*n;
//     }

//       cout<<ans;
//     return 0;
// }

// program to be insert an elemnt in specific position

// #include <iostream>
// using namespace std;

// void insert(int arr[], int n)
// {
//   int pos, element;
//   cout << "enter element to be insert: ";
//   cin >> element;

//   cout << "enter positioin to be insert " << endl;
//   cin >> pos;

//   for (int i = n; i >= pos; i--)
//   {

//     arr[i+1] = arr[i];
//   }
//   arr[pos] = element;
// }

// void display(int arr[], int n)
// {

//   cout << "Iserted array is : " << endl;
//   for (int i = 0; i <= n; i++)
//   {
//     cout << arr[i]<<" ";
//   }
// }
// int main()
// {
//   int arr[50], size;

//   cout << "enter your array size: ";
//   cin >> size;

//   cout << "enter your array elements :" << endl;
//   for (int i = 0; i < size; i++)
//   {
//     cin >> arr[i];
//   }

//   cout << "Array you Enter: " << endl;
//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i];
//   }
//   cout << endl;
//   insert(arr, size);
//   display(arr, size);
//   return 0;
// }

// program to delete elemanr from array

// #include <iostream>
// using namespace std;

// void deletion(int arr[], int n)
// {
//   int pos;

//   cout << "Enter position to delete : " << endl;
//   cin >> pos;

//   for (int i = pos; i < n; i++)
//   {
//     arr[i] = arr[i + 1];
//   }

//   cout<<"Array after deletion: ";
//   for(int i=0;i<n-1;i++){
//     cout<<arr[i];
//   }
// }

// int main()
// {
//   int arr[20],n;

//   cout<<"Enter your array size: "<<endl;
//   cin>>n;
//   cout<<"Enter your array :"<<endl;
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

// deletion(arr,n);
//   return 0;
// }

// program find maximun number un array

#include <iostream>
#include <limits.h>
using namespace std;

void max(int arr[], int n)
{

  int max = INT_MIN;
 

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  cout<<"the maxmimum element is : "<<max<<endl;
}

void min(int arr[],int n){

int min= INT_MAX;
for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
 cout<<"the minimum elemnt of given array is :  "<<min;

}

int main()
{
int arr[20],n;

cout<<"enter your array size : "<<endl;
cin>>n;
cout<<"enter your array: "<<endl;
for(int i=0;i<n;i++){
  cin >>arr[i];
}

max(arr,n);
min(arr,n);
  return 0;
}