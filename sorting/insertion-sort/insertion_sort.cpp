#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];

    // insertion sort logic
    int key, j;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // print sorted element
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
