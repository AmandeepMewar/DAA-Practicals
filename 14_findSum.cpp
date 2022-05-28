/*
14. Given an unsorted array of integers, design an algorithm and implement it using a
program to find whether two elements exist such that their sum is equal to the given
key element. (Time Complexity = O(n log n))
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter elements in the array : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

bool findSum(int arr[], int low , int high, int element){

    while (low < high){
        if (arr[low] + arr[high] == element){
            cout << arr[low] << " " << arr[high] << endl;
            return true;  
        }

        else if (arr[low] + arr[high] > element){ 
            high--;
        }
        else{
            low++;
        }
    }
    return false;
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

        sort(arr, arr+ n);

        int element;
        cout << "Enter a element: ";
        cin >> element;

        if (!findSum(arr,0,n-1, element)){
            cout << "Pair not found" << endl;
        }

    }
    return 0;
    
}