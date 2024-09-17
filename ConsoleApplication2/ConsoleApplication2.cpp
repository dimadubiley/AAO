#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a;

    cout << "Enter: ";
    cin >> a;

    int* arr = new int[a];

    for (int i = 0; i < a; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << "\t";
    }

    int b = a + 1;

    int* arr1 = new int[b];

    cout << endl;

    for (int i = 0; i < b; i++)
    {
        if (i < a)
        {
            arr1[i] = arr[i];
        }
        else
        {
            arr1[i] = 100;
        }
        cout << arr1[i] << "\t";
    }

    delete[] arr;
    delete[] arr1;

}
