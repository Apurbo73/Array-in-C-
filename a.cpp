#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5; // Size of the array
    int numbers[SIZE];  // Declaration of the array

    // Input: Taking values from user
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output: Printing the array elements
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < SIZE; ++i)
    {
        cout << "Element " << i + 1 << ": " << numbers[i] << endl;
    }

    return 0;
}
