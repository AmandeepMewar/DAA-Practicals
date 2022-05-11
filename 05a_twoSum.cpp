/*5. Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].
Your Program Should run for T no of Test cases imputed by user.
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter elements in the array : " ;
    
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

        sort(arr, arr+n);
        display(arr, n);
        
        for (int i = 0 ; i < n; i++){
            for (int j = 0; j < n; j++){
                for (int k = j+1 ; k < n; j++){

                    if (arr[j] + arr[k] == arr[i]){
                        cout << j << " and " << k << endl;
                    }
                }
            }
        }
    }
}