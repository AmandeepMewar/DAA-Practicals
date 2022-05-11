/*
4.Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key.
(Time Complexity = O(log n))
*/

#include <bits/stdc++.h>
using namespace std;

int countcopy;
void binarySearch(int arr[], int l, int h,int element){
    int mid = (l + h)/2;

    if (l == h){
        return;
    }
    else if (arr[mid] == element){
        countcopy++;
        cout << "Element found at index : " << mid << endl;
        binarySearch(arr, l, mid, element);
        binarySearch(arr, mid+1 , h, element);
    }
    else if (l == h){
        cout << "Element not found" << endl;
        return;
    }

    else if (arr[mid] > element){
        binarySearch(arr, l, mid, element);
    }
    else{
        binarySearch(arr, mid+1 , h, element);
    }
}

void read(int arr[], int n){
    cout << "Enter elements in the array : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

int main()
{
    int t;
    cout << "Enter no. of Test cases : ";
    cin >> t;

    while (t--){
        countcopy = 0;
        int n;
        cout << "Enter size: " ;
        cin >> n;

        int arr[n];


        read(arr, n);

        sort(arr, arr+ n);

        int element;
        cout << "Enter element to be searched: ";
        cin >> element ;

        binarySearch(arr, 0, n-1, element);
        if (countcopy > 0){
            cout << "Number of copies of searched elements : " << countcopy << endl;
        }
        else{
            cout << "Not present" << endl;
        }
    }
}