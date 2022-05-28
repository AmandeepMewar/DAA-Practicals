/*
9. Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))
*/

#include <bits/stdc++.h>
using namespace std;

int check;

void read(int arr[], int n){
    cout << "Enter elements in the array : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void merge(int arr[],int l, int m,int h){
    
    int B[h-l+1];
    int i = l;
    int j = m+1;
    int k = 0;

    while(i <= m && j <=h){
        if (arr[i] == arr[j]){
            check++;
        }
        if (arr[i] > arr[j]){
            
            B[k++] = arr[j++];

            
        }
        else{
            B[k++] = arr[i++];
        }
    }

    while (i <= m){
        B[k++] = arr[i++];

    }
    
    while (j <= h){
        B[k++] = arr[j++];
    }

    for (i = 0; i < h-l+1;i++){
        arr[l+i] = B[i];
    }

}

void MergeSort(int arr[],int low, int high){

    if (low<high){
        int mid = (low+ high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        
        merge(arr,low,mid,high);
    }
}

int main(){
    cout << "Name: Amandeep Singh" << endl << "Section: E" << endl << "Class Roll no. 09" << endl;
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--){
        check = 0;
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int arr[n];

        read(arr, n);

        MergeSort(arr, 0, n-1);

        if(check > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
     
}