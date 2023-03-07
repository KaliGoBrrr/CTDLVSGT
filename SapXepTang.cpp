#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

int NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu thu " << i << ": ";
		cin >> a[i];
		if (a[i] == 0) {
			cout << "\nKet thuc mang ";
			return 0;
		}
	}
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
	NhapMang(a, n);
	cout << "\n\nMang luc dau co dang: " << endl;
	XuatMang(a,n);
	cout << "\nMang sau khi da xep tang: " << endl;
	XepTang(a, n);
	XuatMang(a, n);
}

