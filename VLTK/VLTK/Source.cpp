#include<iostream>
#include"Game.h"
#include"QuaiVat.h"
#include"NhanVat.h"
using namespace std;
void TacDong(Game* a, Game* b)
{
	float SatThuongA = a->GetSatThuong(), SatThuongB = b->GetSatThuong();
	//Tuong Sinh
	if (abs(a->GetHe() - b->GetHe()) == 1)
	{
		if (a->GetHe() > b->GetHe())
			SatThuongA += SatThuongA * 0.1;
		else
			SatThuongB += SatThuongB * 0.1;
	}
	//Tương khắc
	if (a->GetHe() + 2 < 5)
		if (a->GetHe() + 2 == b->GetHe())
		{
			SatThuongA += SatThuongA * 0.2;
			SatThuongB -= SatThuongB * 0.2;
		}
	if (a->GetHe() + 2 >= 5)
		if ((a->GetHe() + 2) - 5 == b->GetHe())
		{
			SatThuongA += SatThuongA * 0.2;
			SatThuongB -= SatThuongB * 0.2;
		}
	cout << "SAt Thuong A:" << SatThuongA << ";Sat thuong B: " << SatThuongB << endl;
	if(SatThuongA>SatThuongB)
		cout<<"SatThuongA > SatThuongB"<<endl;
	if (SatThuongA < SatThuongB)
		cout << "SatThuongA < SatThuongB" << endl;
	if (SatThuongA == SatThuongB)
		cout << "SatThuongA = SatThuongB" << endl;
}
int main()
{
	Game* a[100];
	cout << "Nhap:" << endl;
	int temp , n = 0;	
	cout << "1/Nguoi 2/QuaiVat 0/Thoat" << endl;
	cout << ">>";
	cin >> temp;
	while (temp != 0)
	{
		switch (temp)
		{
		case 1:
			a[n] = new NhanVat;
			break;
		case 2:
			a[n] = new QuaiVat;
			break;
		}
		a[n]->Nhap();
		n++;
		cout << "1/Nguoi 2/QuaiVat 0/Thoat" << endl;
		cout << ">>";
		cin >> temp;
	}
	temp = 0;
	for (int i = 0; i < n; i++)
		if (a[temp]->GetSatThuong() < a[i]->GetSatThuong())
			temp = i;
	cout << "Phan tu do la:" << temp << endl;
	cout << "Chon phan tu A(x), B(y)" << endl << ">>";
	int x, y;
	cin >> x >> y;
	if (a[x]->GetHe() > a[y]->GetHe())
		TacDong(a[x], a[y]);
	else
		TacDong(a[y], a[x]);
	return 0;
}