#include <iostream>
#include <vector>

using namespace std;

// Function to reverse the vector
void reverseArray(vector<int> &array, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

// Function to perform linear search
int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 23, 45, 70, 11, 15};
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = linearSearch(arr, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    //  ----------------------------------------------------------

    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    cout << "orignal array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    reverseArray(array, size);
    cout << "reverse array  " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
