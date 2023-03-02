#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu thu " << i << ": ";
		cin >> a[i];
	}
}

void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - rand() % 100;
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}

int TongPTChan(int a[], int n)
{
	int i, tong = 0, flag = 0;
	for (i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		{
			flag = 1;
			tong = tong + a[i];
		}
	if (flag == 1)
		return tong;
	return -1;
}

void main()
{
	int a[MAX], i, n, kq;

	cout << "Nhap so luong phan tu thuc: "; cin >> n;

	//NhapMang(a,n);

	MangNgauNhien(a, n);

	XuatMang(a, n);

	kq = TongPTChan(a, n);
	cout << "\nTong cac phan tu chan co trong mang la: " << kq;

	cout << endl;
}