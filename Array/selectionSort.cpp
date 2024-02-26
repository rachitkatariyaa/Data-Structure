/* 
    Selection

    10  8    2   3   1   4     // first sort the smallest array element and swap
    1   2    8   3   10  4           
    1   2    3   8   10  4
    1   2    3   4   10  8 
    1   2    3   4   8   10

 */
   
#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10,4,1,3,2,7};
    for(int i=0; i<5;i++)
    {
        int index = i;
        for(int j=i+1;j<6;j++ )
        {
            if(arr[j]<arr[index])
            index = j;
        }

        swap(arr[i],arr[index]);
    }

    // for printing 
    for(int i=0; i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
} 





/* 
#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array : ";
    cin>>n; // size of array
    cout<<"ENter the element in array :";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    for(int i=0; i<n-1;i++)
    {
        int index = i;
        for(int j=i+1;j<n;j++ )
        {
            if(arr[j]<arr[index])
            index = j;
        }

        swap(arr[i],arr[index]);
    }

    // for printing 
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

 */





/* 

// LeetCode

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            int index = i;
            for(int j=i+1;j<n;j++ )
            {
                if(nums[j]<nums[index])
                index = j;
            }
            swap(nums[i],nums[index]);
        }      
        return nums;   
    }
}; */