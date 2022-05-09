#pragma once
#include<iostream>
#include<string>
using namespace std;
class PEOPLE {
protected:	
	string ID;
	string NAME;
	string ADDRESS;
	int SUMCREDITS;
	float AVERAGE;
public:
	static int countInsert;
	static int countInsertPeople() {
		return countInsert;
	}
	void basicInput();
	void basicOutput();
	void virtual Input() {};
	void virtual Count(int& x) {};
	void virtual highestAverage(int& max, int& i, int ROLE) {};
	void virtual Output(int ROLE) {};
};
int PEOPLE::countInsert = 0;
class COLLEGE :public PEOPLE {
	float passMark;
public:
	void Input();
	void Count(int&x);
	void Output(int ROLE);
	void highestAverage(int& max, int& i,int ROLE);
};
class STUDENT :public PEOPLE {
	string nameEssay;
	float markEssay;
public:
	void Input();
	void Count(int&x);
	void highestAverage(int& max, int& i,int ROLE);
	void Output(int ROLE);
};

