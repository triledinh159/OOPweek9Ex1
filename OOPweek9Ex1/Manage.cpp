#include "Manage.h"
void PEOPLE::basicInput() {
	cout << ++countInsert << ".\n";
	cout << "Nhap ma so sinh vien: ";
	cin.ignore();
	getline(cin, ID);
	cout << "Nhap ten: "; 
	getline(cin, NAME);
	cout << "Nhap dia chi: "; 
	getline(cin, ADDRESS);
	cout << "Nhap tong so tin chi: "; cin >> SUMCREDITS;
	cout << "Nhap diem trung binh: "; cin >> AVERAGE;
}
void PEOPLE::basicOutput() {
	cout << "\nMSSV: " << ID << " Ho va ten: " << NAME << " Dia chi: " << ADDRESS << " Tong so tin chi: " << SUMCREDITS;
}
void COLLEGE::Input() {
	basicInput();
	cout << "Nhap diem tot nghiep: "; cin >> passMark;
}
void COLLEGE::Count(int& x) {
	if (SUMCREDITS >= 120 && AVERAGE >= 5 && passMark >= 5) x++;
}
void COLLEGE::highestAverage(int &max, int& i, int ROLE) {
	if (max < AVERAGE && ROLE == 1) {
		max = AVERAGE;
		i++;
	}
}
void COLLEGE::Output(int ROLE) {
	if (ROLE == 1) {
		basicOutput();
		cout << "\nDiem tot nghiep: " << passMark << " Diem trung binh: " << AVERAGE;
	}
}
void STUDENT::Input(){
	basicInput();
	cout << "Ten luan van: "; cin.ignore();
	getline(cin, nameEssay);
	cout << "Diem luan van: "; cin >> markEssay;
}
void STUDENT::Count(int& x) {
	if (SUMCREDITS >= 170 && AVERAGE >= 5 && markEssay >= 5) x++;
}
void STUDENT::highestAverage(int& max, int& i, int ROLE) {
	if (max < AVERAGE && ROLE == 2) {
		max = AVERAGE;
		i++;
	}
}
void STUDENT::Output(int ROLE) {
	if (ROLE == 2) {
		basicOutput();
		cout << "\nTen luan van: " << nameEssay << " Diem luan van: " << markEssay << " Diem trung binh: " << AVERAGE;
	}
}