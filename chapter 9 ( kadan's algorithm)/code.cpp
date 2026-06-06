#include <iostream>
#include <vector>
using namespace std;

void subarraySum(vector<int> &array, int size)
{
    int maxSum = INT_MIN;

    for (int st = 0; st < size; st++)
    {
        int currentSum = 0;
        for (int end = st; end < size; end++)
        {
            currentSum += array[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "the maximum sum of array is : " << maxSum;
    cout << endl;
}

int main()
{

    // prints the all the subarrays in the array
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    // print the maximum subarray's sum

    vector<int> array = {3, -4, 5, 4, -1, 7, -8};
    int size = 9;
    subarraySum(array, size);

    return 0;
}