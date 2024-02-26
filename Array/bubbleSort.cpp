/*
    Bubble Sorting

    7   4   8   5   3
    4   7   5   3   8
    4   5   3   7   8
    4   3   5   7   8
    3   4   5   7   8


    another example

    5   4   3   2   1         4   3   2   1   5       3   2   1   4   5       2   1   3   4   5

    4   5   3   2   1         3   4   2   1   5       2   3   1   4   5       1   2   3   4   5
    4   3   5   2   1         3   2   4   1   5       2   1   3   4   5
    4   3   2   5   1         3   2   1   4   5
    4   3   2   1   5

    round 1 : 5 sorted        round 2 : 4 sorted      round 3 : 3 sorted      round 4 : all sorted

 */

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the array element : ";
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=n-2; i>=0; i--)
    {
        bool swapped = 0;
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped = 1;
                swap(arr[j],arr[j+1]);
            }
            
        }

        if (swapped == 0)
        break;
    }

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}