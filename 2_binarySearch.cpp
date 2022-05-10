/*
2.Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(logn), where n is the size of input).
Your Program Should run for T no of Test cases imputed by user.
*/

#include <bits/stdc++.h>
using namespace std;


void binarySearch(int arr[], int l, int h,int element, int comp){
    int mid = (l + h)/2;
    comp++;

    if (arr[mid] == element){
        cout << "Element found at index : " << mid << endl;
        cout << "Number of comparisons done: " << comp << endl;
        return ;
    }
    else if (l == h){
        cout << "Element not found" << endl;
        cout << "Number of comparisons done: " << comp << endl;
        return;
    }

    else if (arr[mid] > element){
        binarySearch(arr, l, mid, element,comp);
    }
    else{
        binarySearch(arr, mid+1 , h, element,comp);
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
        int n;
        cout << "Enter size: " ;
        cin >> n;

        int arr[n];
        int comp = 0;

        read(arr, n);

        sort(arr, arr+ n);

        int element;
        cout << "Enter element to be searched: ";
        cin >> element ;

        binarySearch(arr, 0, n-1, element, comp);
    }
}