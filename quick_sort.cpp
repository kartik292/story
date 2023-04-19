// #include <iostream>
// using namespace std;
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

// int sort(int arr[],int l,int m){
//     int pivot=arr[l];
//     int cnt=0;
// for(int i=l+1;l<=m;l++){
//     if(arr[i]<=pivot){
//         cnt++;
//     }
// }
// // provides the correct position of pivot element 
// int pivotindex=l+cnt;
// swap(arr[pivotindex],arr[l]);
// // now to sort the array on both side of pivotindex and pivot 
// int i=l;
// int j=m;
// while(i<pivotindex&&j>pivotindex){
// while(arr[i]<pivot){
//     i++;
// }
// while(arr[j]>pivot){
// j--;
// }
// if(i<pivotindex&&j>pivotindex){
//     swap(arr[i++],arr[j--]);
// }

// }
// return pivotindex;

// }
// void quicksort(int arr[],int l,int n){
// if(l<n){
// int p=sort(arr,l,n);
// quicksort(arr,l,p-1);
// quicksort(arr,p+1,n);

// }
// }
// int main()
// {
//     int n;
//     cout << "enter the size of array " << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the value to be inserted in the array " << endl;

//     for (int i = 0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//    quicksort(arr,0,n-1);
//     cout << "array after sorting" << endl;
//     display(arr, n);
//     return 0;
// }
#include<iostream>
using namespace std;


int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}

int main() {

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}