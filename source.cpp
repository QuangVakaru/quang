#include <iostream>
using namespace std;


int hieu(int a, int b)
{
	return a-b;
}

int tong(int a, int b)
{
	return a+b;
}
int tich(int a, int b)
{
	return a*b;
}
<<<<<<< HEAD
void kiemTraChanLe(a)
{
	if(a%2==0){
		cout<<"so chan";
	}
	cout<<"so le";
=======
void kiemTraChanLe(int a)
{
	if(a%2==0){
		cout<<"So chan";
	}
	cout<<"So le";
>>>>>>> ChanLe
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;

	if(phepToan=='-')
		cout<<"Hieu 2 so la: "<<hieu(a,b)<<endl;

	if(phepToan=='+')
		cout<<"Tong 2 so la: "<<tong(a,b)<<endl;
	if(phepToan=='*')
		cout<<"Tich 2 so la: "<<tich(a,b)<<endl;
	kiemTraChanLe(a);
<<<<<<< HEAD
	cout<<endl;
=======
>>>>>>> ChanLe
	cout<<endl;
	system("pause");
	return 0;
}
//Cau19