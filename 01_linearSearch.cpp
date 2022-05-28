/*
1. Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
Your Program Should run for T no of Test cases imputed by user.
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX = 5;

void read(int arr[], int n){
    cout << "Enter elements in the array : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void linearSearch(int arr[], int n, int element){
    int count = 0;
    int comp = 0;

    for (int i = 0; i < n; i++){
        comp++;
        if (arr[i] == element){
            cout << "Element found at index :" << i << endl;
            count = 1;
            break;
        }
    }
    cout << "Comparisons done : " << comp << endl;

    if (count == 0){
        cout << "Element not found" << endl;
    }
}

int main()
{
    cout << "Name: Amandeep Singh" << endl << "Section: E" << endl << "Class Roll no. 09" << endl;
     
    int t;
    cout << "Enter no. of Test cases : ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "Enter size : " ;
        cin >> n;

        int arr[n];

        read(arr,n);

        int element;
        

        cout << "Enter element to be Searched: ";
        cin >> element;

        linearSearch(arr, n, element);
        
    }

    return 0;
}