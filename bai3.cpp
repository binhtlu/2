#include <iostream>
using namespace std;

void nhap(int mang[],int &n);
void xuat(int mang[],int n);
int le(int mang[],int n);
int main()
{	
	int mang[100];
	int n;
	nhap(mang,n);
	xuat(mang,n);
	le(mang,n);
	return 0;
}

void nhap(int mang[],int &n)
{
		cout<<"ban muon co bao nhieu phan tu";
		cin>>n;
		for (int i = 0;i <= n;i++)
		{
			int giatri;
			do
			{
				cout<<"nhap gia tri phan tu thu"<<" "<<i+1<<" ";
				cin>>giatri;
			}
			while ( giatri < 0 );
			mang[i] = giatri;
			
		}
}

void xuat(int mang[],int n)
{
	for (int i = 0; i < n;i++)
	{
		cout<<mang[i];
	}
}
int le(int mang[],int n)
{
	int dem = 0;
	for (int i = 0; i < n;i++)
	{
		if ( mang[i] % 2 != 0)
		dem++;
	}
	for (int i = 0;i <= n;i++)
	{
		if ( mang[i] % 2 != 0)
	}
cout <<mang[i]<<" ";
cout<<" "<<" co "<<dem<<" "<<"phan tu le"<<endl;
}

