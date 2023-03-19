#include<iostream>
#define MAX 100
using namespace std;
void heapify(int arr[], int n, int i) {  
    int max = i;  
    int l = i * 2 + 1;   
    int r = l + 1;   
    if (l<n && arr[l] > arr[max]) {  
        max = l;
    }
    if (r<n && arr[r] > arr[max]) {  
        max = r;
    }
    if (max != i) {    
        int tam = arr[i];
        arr[i] = arr[max];
        arr[max] = tam;
        heapify(arr, n, max);   
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(arr, n, i);  
    for (int j = n - 1; j > 0; j--) { 
        int temp = arr[0];
        arr[0] = arr[j];
        arr[j] = temp;
        heapify(arr, j, 0);    
    }
}
void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap phan tu thu " << i << ": ";
        cin >> arr[i];
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int arr[MAX], n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    nhapmang(arr, n);
    cout << "Mang luc dau co dang: ";
    printArray(arr, n);
    cout << "Mang sau khi sap xep: ";
    heapSort(arr, n);
    printArray(arr, n);
}