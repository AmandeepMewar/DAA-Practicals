/*
3.Given an already sorted array of positive integers, design and algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found,
perform a linear search operation from the index 2k to find the element key. (Complexity < O(n), where n is the number of elements need to be scanned for searching): (Jump Search)
Your Program Should run for T no of Test cases imputed by user.
*/

#include <bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    cout << "Enter elements in sorted order : " ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void linearSearch(int arr[], int l, int h,int element){

    for (int i = l; i < h; i++){
        if (arr[i] == element){
            cout << "Element found at index : " << i << endl;
            return;
        }
    }
}

void jumpSearch(int arr[], int n, int element){
    int prev = 0;
    int i = 0;
    int j = 0;

    while (i < n){
        if (arr[i] == element){
            cout << "Element found at index : " << i << endl;
            return ;
        }
        else if(arr[i] < element){
            prev = i;
            i = (int)pow(2,++j);
        }
        else{
            linearSearch(arr, prev, i,element);
            return;
        }
    }
    cout << "Element not present." << endl;
    return;
}

void display(int A[], int n)
{
    cout << "Elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
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
        cout << "Enter size : ";
        cin >> n;

        int arr[n];

        read(arr, n);

        int element;
        cout << "Enter element to be searched: ";
        cin >> element ;

        jumpSearch(arr, n, element);
    }
    return 0;
}