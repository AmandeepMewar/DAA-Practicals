/*
5b. Two Sum Problem: Write a program that, given an sorted array A[ ] of n numbers and a value as val, determines whether or not there exist two indices (i,j) of A[ ], such that A[i] + A[j] = val [ i and j can be equal also]
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter elements in Sorted order : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
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

        int n;
        cout << "Enter size: " ;
        cin >> n;

        int arr[n];

        read(arr, n);

        int num; 
        cout << "Enter a number: ";
        cin >> num;

        int i = 0;
        int j = n-1;

        while(i!=j){
            
            if (arr[i] + arr[j] > num){
                j--;
            }

            else if (arr[i] + arr[j] < num){
                i++;
            }
            else{
                cout << arr[i] << " and " << arr[j] << endl;
                i++;
            }
        }


    }
}