#include<iostream>
#include "QuaiVat.h"
using namespace std;
void QuaiVat::Nhap()
{
	Game::Nhap();
	cout << "1/QVThongThuong 2/QVDauLinh\n>>";
	int temp;
	cin >> temp;
	if (temp == 1)
	{
		this->QuanQL = true;		//QV thông thường
		this->SatThuong = this->CapDo * 3;
	}
	if (temp == 2)
	{
		this->QuanQL = false;		//QV thống lĩnh
		this->SatThuong = this->CapDo * 7;
	}
}