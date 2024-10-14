// #include<iostream>
// using namespace std;
// int reverse(int num){
//     int ans=0;
//     while(num!=0){
//         int rem = num % 10;
//         num = num/10;
//         ans=(ans*10)+rem;
//     }
//     return ans;
// }
// int main(){
// int n;
// cout<<"enter the number to be  reverse : ";
// cin>>n;
// cout<<"the reverse of number is "<<reverse(n);

// return 0;
// }






//sum of all element present inside the array
#include <iostream>
using namespace std;
int fun(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}

int main()
{
    int arr[5], n;
    cout << "enter the size of array:";
    cin >> n;
    cout << "enter your array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << fun(arr, n);

    return 0;
}