/*
10. Given an unsorted array of integers, design an algorithm and implement it using a program to sort an array of elements by dividing the array into two subarrays and combining these subarrays after sorting each one of them. Your program should also find number of comparisons and inversions during sorting the array. ( Merge sort)
*/

#include <bits/stdc++.h>
using namespace std;

int comp ;

void read(int arr[], int n){
    cout << "Enter  elements : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

int merge(int A[], int low ,int mid, int high){

    int B[high-low+1];
    int i = low;
    int j = mid+1;
    int k = 0;

    int inversions = 0;
    while(i <= mid && j <= high){
        comp++;
        if (A[i] <= A[j]){
            B[k++] = A[i++];
        }
        else{
            inversions += mid-i+1;
            B[k++] = A[j++];
        }
    }

    while (i <= mid){
        B[k++] = A[i++];
    }

    while (j <= high){
        B[k++] = A[j++];
    }

    for (i = 0; i < k; i++){
        A[low+i] = B[i];
    }

    return inversions;

}

int mergeSort(int arr[], int low , int high){
    int count = 0;
    if (low < high){
        int mid = (low+high)/2;

        count += mergeSort(arr, low,mid);
        count += mergeSort(arr, mid+1, high);

        count += merge(arr, low, mid, high);
    }
    return count;
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
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int arr[n];

        read(arr, n);

        int inversion = mergeSort(arr,0,n-1);

        cout << "Number of inversions : " << inversion << endl;

        cout << "Number of comparisons: " << comp << endl;
        display(arr,n);
    }
    
}