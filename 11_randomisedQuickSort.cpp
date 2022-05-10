/*
11.Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by partitioning the array into two subarrays based on a pivot element such that one of the sub array holds values smaller than the pivot element while another sub array holds values greater than
the pivot element. Pivot element should be selected randomly from the array. Your program should also find number of comparisons and swaps required for sorting the array. ( Randomised QuickSort)
*/

#include <bits/stdc++.h>
using namespace std;

int comp;
int swaps;

void read(int arr[], int n){
    cout << "Enter elements in the array: ";
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void swap(int *x, int *y){
    swaps++;
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partitionIndex(int arr[], int low, int high){
    srand(time(NULL));
    int r = low + rand() % (high-low);

    swap(&arr[r],&arr[high]);
    int j = low-1;
    int pivot = arr[high];

    for (int i = low; i < high; i++){
        comp++;
        if (arr[i] <= pivot){
            j++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[j+1],&arr[high]);
    return j+1;
}

void randomisedQuickSort(int arr[], int low, int high){
    if (low < high){
        int index = partitionIndex(arr,low,high);

        randomisedQuickSort(arr,low,index-1);
        randomisedQuickSort(arr,index+1,high);
    }
}

void display(int A[], int n){
    cout << "Elements in the array: ";
    for (int i = 0 ; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--){
        comp = 0;
        swaps = 0;
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int arr[n];

        read(arr, n);

        randomisedQuickSort(arr,0,n-1);

        display(arr,n);

        cout << "Number of comparisons : " << comp << endl;
        cout << "Number of swaps : " << swaps << endl;
    }
    return 0;
}