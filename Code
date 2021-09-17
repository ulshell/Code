#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int i, int n){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if(left <= n && arr[left] > arr[largest]){
        largest = left;
    }

    if(right <= n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        maxHeapify(arr, largest, n);
    }
}

void buildMaxHeap(int arr[], int n){
    for(int i = n / 2; i >= 1; i--)
    {
        maxHeapify(arr, i, n);
    }
}

void printHeap(int arr[], int n){
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertHeap(int arr[], int & n, int & element){
    n += 1;
    arr[n] = element;
    int i = n;
    while(i > 1 && arr[i] > arr[i / 2])
    {
        swap(arr[i], arr[i / 2]);
        i = i / 2;
    }
}

void deleteFromMaxHeap(int arr[], int i, int & n){
    if(i < 1 || i > n) return;
    arr[i] = INT_MAX;
    while(i > 1 && arr[i] > arr[i / 2])
    {
        swap(arr[i], arr[i/2]);
        i /= 2;
    }

    swap(arr[1], arr[n]);
    n--;
    maxHeapify(arr, 1, n);
}

int main(void){
    //number of elements
    int n;
    cin >> n;


    //input array
    int arr[100000];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    // build MaxHeap
    buildMaxHeap(arr, n);

    //print Heap elements
    printHeap(arr, n);

    //insert Element in Heap
    int element;
    cin >> element;
    insertHeap(arr, n, element);
    printHeap(arr, n);


    //delete element at index i
    int i;
    cin >> i;
    deleteFromMaxHeap(arr, i, n);
    printHeap(arr, n);

}