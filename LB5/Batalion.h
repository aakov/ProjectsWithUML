//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Batalion.h
//  @ Date : 3/30/2023
//  @ Author : 
//
//


#if !defined(_BATALION_H)
#define _BATALION_H
#include <vector>
#include "Soldier.h"
using namespace std;

class Batalion {
public:
	Batalion(int size);
	~Batalion();
	void setBtNumber(int BtNumber);
	int getBtNumber();
	void setData(string name, string rank, int id);
    void getData(int id);
    Soldier* getSoldier(int id);
private:
	int BtNumber;
	vector<Soldier*> soldiers;
};

#endif  //_BATALION_H
