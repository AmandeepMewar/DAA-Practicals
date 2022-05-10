/*
6. Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.
*/

#include <bits/stdc++.h>
using namespace std;


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
        cout << "Enter size : " ;
        cin >> n;

        int arr[n];

        read(arr,n);

        sort(arr,arr+n);

        int element;

        cout << "Enter a element: ";
        cin >> element;

        int i =0;
        int j = n-1;
        int count = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++ ){
                if (arr[i] - arr[j] == element){
                    count++;
                }
            }
        }

        cout << "Number of pairs: "<< count << endl;

    }
    return 0;
}