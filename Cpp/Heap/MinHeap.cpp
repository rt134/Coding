#include <iostream>  
using namespace std;

void heapify(int arr[], int n, int i)
{
    int minm = i;
    int left = 2*i +1;
    int right = 2*i + 2;

    if(left < n && arr[left] < arr[minm]){
        minm = left;
    }

    if(right < n  && arr[right] < arr[minm]){
        minm = right;
    }

    if(minm != i){
        swap(arr[minm],arr[i]);
        heapify(arr,n,minm);
    }
}
  
void buildHeap(int arr[], int n)
{
    int startIdx = (n / 2) - 1;
  
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void printHeap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
  
int main()
{
    int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
  
    int n = sizeof(arr) / sizeof(arr[0]);
  
    buildHeap(arr, n);
  
    printHeap(arr, n);
    
    return 0;
}