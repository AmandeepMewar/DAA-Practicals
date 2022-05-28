/*
12. Given an unsorted array of integers, design an algorithm and implement it using aprogram to find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter elements in the array: ";
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){

    int x = arr[high];
    int i = low-1;

    for (int j = low ; j < high; j++){
        if (arr[j] <= x){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

int kthSmallest(int arr[], int low, int high, int k){

    if (low == high){
        return arr[low];
    }

    int pos = partition(arr,low,high);

    int i = pos - low + 1;

    if (i == k){
        return arr[pos];
    }
    else if(i > k){
        return kthSmallest(arr,low,pos - 1, k);
    }
    else{
        return kthSmallest(arr,pos + 1, high, k-i);
    }
}

int main(){
    cout << "Name: Amandeep Singh" << endl << "Section: E" << endl << "Class Roll no. 09" << endl;
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--){
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int arr[n];

        read(arr, n);

        int k;

        cout << "Enter kth Number to be searched : ";
        cin >> k;

        cout << "k'th smallest element : " << kthSmallest(arr,0,n,k) << endl;
    }

    return 0;
}