#include <iostream>
using namespace std;
void changeArray(int arr[], int size)
{
    cout << "in function \n"
         << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    // arrayys
    int marks[5] = {90, 56, 78, 45, 76};
    // char name[5] = {'asad', 'nafay', 'rafy ', 'nawaz', 'dilber'};
    // char grade[5] = {'A', 'B', 'C', 'D', 'E'};
    cout << marks[1] << " " << endl;

    // pass by referene
    int arr[] = {90, 56, 78, 45, 76};

    changeArray(arr, 5);
    cout << "ints amin \n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}