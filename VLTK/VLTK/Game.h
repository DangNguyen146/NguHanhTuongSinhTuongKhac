#pragma once
class Game
{
protected:
	int CapDo;
	int SatThuong;
	int He;
public:
	virtual void Nhap();
	virtual int GetSatThuong();
	virtual int GetHe();
};