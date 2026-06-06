#include<iostream>
using namespace std;

int main()
{
    // linear search for a mountain array O(n time complexity)  to chaed if its a valid mountain array or not

    int arr[] = {1,2,3,4,-1,6,7}; 

        int n = sizeof(arr)/sizeof(arr[0]);
        int i=0;
        while(i<n-1 && arr[i]<arr[i+1])
        {
            i++;
        }
        if(i==0 || i==n-1)
        {
            cout<<"Not a valid mountain array"<<endl;
            return 0;
        }
        while(i<n-1 && arr[i]>arr[i+1])
        {
            i++;
        }
        if(i==n-1)
        {
            cout<<"Valid mountain array"<<endl;
        }
        else
        {
            cout<<"Not a valid mountain array"<<endl;
        }
    return 0;
}