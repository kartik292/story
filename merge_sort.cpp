#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// void merge(int arr[], int l, int mid, int m)
// {
//     int i, j, nl, rl, k;
//     nl = mid - l;
//     rl = m - mid + 1;
//     // creating two arrays
//     int leftarr[nl], rightarr[rl];
//     for (int i = 0; i < nl; i++)
//     {
//         leftarr[i] = arr[l + i];
//     }
//     for (int j = 0; j < rl; j++)
//     {
//         rightarr[j] = arr[m+j+ 1];
//     }
//     i = 0, j = 0, k = l;
//     while (i < nl && j < rl)
//     {
//         if (leftarr[i] <= rightarr[j])
//         {
//             arr[k] = leftarr[i];
//             i++;
          
//         }
//         else
//         {
//             arr[k] = rightarr[j];
//             j++;
           
//         }
//         k++;
//     }
//     while(i < nl)
//     {
//         arr[k] <= leftarr[i];
//         i++;
//          k++;
//     }
//     while(j<rl)
//     {
//         arr[k] <= rightarr[j];
//         j++;
//          k++;
//     }
// }
// void mergesort(int arr[], int l, int n)
// {
//     int mid;
//     if (l < n)
//     {
//         mid = l+(n-l)/2;
//         mergesort(arr, l, mid);
//         mergesort(arr, mid + 1, n);
//         merge(arr, l, mid, n);
//     }
// }
void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int main()
{
    int n;
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the value to be inserted in the array " << endl;

    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
        cout<<endl;
    }
    cout << "array before sorting " << endl;
    display(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "array after sorting" << endl;
    display(arr, n);
}