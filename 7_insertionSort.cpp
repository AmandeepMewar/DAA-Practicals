/*
7. Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts - total number of times the array elements are shifted from their place) required for sorting the array.
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter  elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void insertionSort(int arr[], int n){

    int shifts = 0;
    int comp = 0;
    for (int i = 1; i < n; i++)
    {

        int k = i;
        int temp = arr[i];

        for (int j = i - 1; j >= 0; j--)
        {
            comp++;
            if (arr[j] > temp)
            {
                shifts++;
                arr[k--] = arr[j];
            }
            else{
                break;
            }
        }
        arr[k] = temp;
    }
    cout << "Number of comparisons: " << comp << endl;
    cout << "Number of shifts : " << shifts << endl;
}

void display(int A[], int n){
    cout << "Elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cout << "Enter no. of Test cases : ";
    cin >> t;

    while (t--){
        int n;
        cout << "Enter size : ";
        cin >> n;

        int arr[n];

        read(arr, n);
        display(arr, n);

        insertionSort(arr, n);

        cout << "After sorting: ";
        display(arr, n);
    }
    return 0;
}