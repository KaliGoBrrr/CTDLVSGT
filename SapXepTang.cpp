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

void XepTang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
}

void main()
{
	int a[MAX], i, n;

	cout << "Nhap so luong phan tu trong mang: "; 
	cin >> n;
	MangNgauNhien(a, n);
	cout << "Mang luc dau co dang: " << endl;
	XuatMang(a,n);
	cout << endl << "Mang sau khi da xep tang: " << endl;
	//NhapMang(a, n);
	XepTang(a, n);
	XuatMang(a, n);
	
}

