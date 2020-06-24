#include<iostream>
#include "Game.h"
using namespace std;
void Game::Nhap()
{
	cout << "CapDo: ";
	cin >> this->CapDo;
	this->SatThuong = CapDo * 5;
	cout << "Nhap he:" << endl;
	cout << "1/Kim 2/Thuy 3/Moc 4/Hoa 5/Tho\n>>"<<endl;			//nhập số để chon hệ
	cin >> this->He;
}
int Game::GetSatThuong()
{
	return this->SatThuong;
}
int Game::GetHe()
{
	return this->He;
}