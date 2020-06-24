#include "NhanVat.h"
void NhanVat::Nhap()
{
	Game::Nhap();
	int temp = 0;
	switch (this->He)
	{
	case 1:
		cout << "1/ThieuLam 2/ThuongVuongBang\n>>";
		cin >> temp;
		if (temp == 1)
			this->MonPhai = "ThieuLam";
		if (temp == 2)
			this->MonPhai = "ThienVuongBan";
		break;
	case 2:
		cout << "1/NguDocGIao 2/DuongMon\n>>";
		cin >> temp;
		if (temp == 1)
			this->MonPhai = "NguDocGiao";
		if (temp == 2)
			this->MonPhai = "DuongMon";
		break;
	case 3:
		cout << "1/NgaMy 2/ThuyeThienMon\n>>";
		cin >> temp;
		if (temp == 1)
			this->MonPhai = "NgaMy";
		if (temp == 2)
			this->MonPhai = "ThuyThienMon";
		break;
	case 4:
		cout << "1/CaiBang 2/ThienNhanGiao\n>>";
		cin >> temp;
		if (temp == 1)
			this->MonPhai = "CaiBang";
		if (temp == 2)
			this->MonPhai = "ThienNhanGiao";
		break;
	case 5:
		cout << "1/ConLon 2/VoDan\n>>";
		cin >> temp;
		if (temp == 1)
			this->MonPhai = "ConLon";
		if (temp == 2)
			this->MonPhai = "VoDan";
	}
}