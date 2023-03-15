#include<iostream>
#define MAX 100
using namespace std;


void swap(int a, int b) {
    int tam = a;
    a = b;
    b = tam;
}

// Thuat toan sap xep vun dong
// Hàm vun đống cho một đỉnh
void heapify(int arr[], int n, int i) {  // mảng arr, n - số phần tử, i - đỉnh cần vun đống
    int max = i;    // Lưu vị trí đỉnh max ban đầu
    int l = i * 2 + 1;   // Vị trí con trái
    int r = l + 1;    // Vị trí con phải
    if (l<n && arr[l] > arr[max]) {   // Nếu tồn tại con trái lớn hơn cha, gán max = L
        max = l;
    }

    if (r<n && arr[r] > arr[max]) {   // Nếu tồn tại con phải lớn hơn arr[max], gán max = r
        max = r;
    }
    if (max != i) {      // Nếu max != i, tức là cha không phải lớn nhất
        swap(arr[i], arr[max]);   // Đổi chỗ cho phần tử lớn nhất làm cha
        heapify(arr, n, max);    // Đệ quy vun các node phía dưới
    }

}


// Ham sap xep vun dong
void heapSort(int arr[], int n) {

    // vun dong tu duoi len len de thanh heap
    for (int i = n / 2 - 1; i >= 0; i--)   // i chạy từ n/2 - 1 về 0 sẽ có n/2 đỉnh nhé!
        heapify(arr, n, i);   // Vun từng đỉnh

    // Vòng lặp để thực hiện vun đống và lấy phần tử
    for (int j = n - 1; j > 0; j--) {   // chạy hết j == 1 sẽ dừng
        // mỗi lần j - 1, tương đương với k xét phần tử cuối 
        swap(arr[0], arr[j]);  // đổi chỗ phần tử lớn nhất
        heapify(arr, j, 0);    // vun lại đống, 
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

