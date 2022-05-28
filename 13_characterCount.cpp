/*
13. Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which alphabet has maximum number of occurrences and print it. (Time Complexity = O(n)) (Hint: Use counting sort)
*/

#include <bits/stdc++.h>
using namespace std;

void read(char arr[], int n){
    cout << "Enter elements in the array: ";
    
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
}

void count(char A[], int n){
    int B[255] = {0};

    int max = 1;
    char element;

    for (int i =0; i < n; i++){
        B[A[i]]++;
        if (B[A[i]] > max){
            max = B[A[i]];
            element = A[i];
        }
    }

    if(max == 1){
        cout << "No duplicates present..." << endl;
    }
    else{
        cout << "Element with maximum occurence: " << element << " - "<< max << endl;
    }

}

void display(char A[], int n){
    cout << "Elements in the array: ";
    for (int i = 0 ; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
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

        char arr[n];

        read(arr, n);

        count(arr,n);

    }

    return 0;
}