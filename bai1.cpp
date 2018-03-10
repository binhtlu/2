#include <iostream>
using namespace std;

void nhap(int mang[], int &n);
void xuat(int mang[],int n);
int min(int mang[],int n);
void sapxep(int mang[],int n);
int main()
{
	int mang[100];
	int n;
	nhap(mang,n);
	sapxep(mang,n);
	xuat(mang,n);
	
		
	
return 0;
}

void nhap(int mang[], int &n)
{
		cout<<"nhap so phan tu  ";
		cin>>n;
		for (int i = 0; i < n; i++)
		{
			int giatri;
			do
			{
				cout<<"nhap phan tu thu "<<i+1<<" ";
				cin>>giatri;
			}
			while (giatri < 0);
			mang[i]=giatri;
		}
}
void xuat(int mang[],int n)
{
	for (int i = 0; i<n; i++)
	{		cout<<mang[i];
	}
}
int min(int mang[],int n)
{
	int minx = mang[0];
	for (int i =1;i<n;i++)
	{
		if ( mang[i] < minx )
			minx = mang[i];
			cout<<minx<<endl;	
	}
}
void sapxep(int mang[],int n)
{
	int temp;
	for (int i = 0;i < n; i++)
	{
		for (int j = i;j<n;j++)
		{
			mang[i] = temp;
			mang[i] = mang[j];
			mang[j] = temp;
		}
	}
}
int fibo(int n)
{
	if ( n <= 2 )
		return 1;
	return fibo(n-1) + fibo(n-2);
}
int giaithua(int n)
{
	if (n <= 0)
		return 1;
	return n*giathua(n-1);
}
void nhiphan(int n)
{
	if (n <= 0)
		return;
	nhiphan(n/2)
	cout<<n%2;
}
