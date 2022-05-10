/*
15.You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it using a program to find list of elements which are common to both. (Time Complexity = O(m+n))
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter elements in the array : " ;
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void intersection(int A[], int B[], int m, int n){
    int i = 0;
    int j = 0;

    while (i < m && j < n){
        if (A[i] == B[j]){
            cout << A[i] << " " << endl;
            i++;
            j++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--){
        int m;
        cout << "Enter size of array: ";
        cin >> m;

        int A[m];

        read(A, m);

        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int B[n];

        read(B, n);

        sort(A,A+m);
        sort(B,B+n);

        intersection(A,B,m,n);
    }
    return 0;
}

