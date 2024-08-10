#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0 ;i < n-1;i++){
        int swapped = 0;
        for(int j = 0; j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // number of elements in the array
    int n;
    // cout<<"Enter the number of elements in the array: ";
    cin >> n;
    // declare the array
    int arr[n];

    // take inputs for the arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Before Sorting
    cout << "Before Sorting: " << endl;
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    // function call

    bubbleSort(arr, n);

    // After Sorting
    cout << "After Sorting: " << endl;
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    return 0;
}