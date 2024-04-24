#include <bits/stdc++.h>
using namespace std;

void ArrayAddition(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void ArrayAddition2(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

   ArrayAddition2(arr, n);

    ArrayAddition(arr, 0, n-1);

    cout << "ArrayAddition is "<<" : " << endl;

    ArrayAddition2(arr, n);

    return 0;
}
