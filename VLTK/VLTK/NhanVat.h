#include<iostream>
#include<string>
#include"Game.h"
using namespace std;
#pragma once
class NhanVat :public Game
{
protected:
	string MonPhai;
public:
	void Nhap();
};

