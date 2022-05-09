#include "Manage.cpp"
int main() {
	PEOPLE* peo[1000];
	COLLEGE col[1000];
	STUDENT stu[1000];
	int n, max1 = 0, count1 = 0, ROLE, x1 = 0, x2 = 0, max2 = 0, count2 = 0,x=0;
	cout << "Nhap so nguoi: "; cin >> n;
	for (int i = 0; i < n; i++) {
		while (true) {
			cout << "Chon he sinh vien: \n  1. Cao dang.\n  2. Dai hoc.\nChon 1 so tu 1-2: ";
			cin >> ROLE;
			if (ROLE != 1 && ROLE != 2) cout << "\nKhong hop le vui long nhap lai!\n\n";
			else break;
		}
		if (ROLE == 1) peo[i] = &col[i];
		if (ROLE == 2) peo[i] = &stu[i];
		peo[i]->Input();
		peo[i]->Count(x);

	}
	cout << "\nSo sinh vien du dieu kien tot nghiep: " << x;
	for (int i = 0; i < n; i++) {
		if (ROLE == 1) {
			count1 = i;
			peo[i]->highestAverage(max1, count1, 1);
			if (count1 > i) x1 = i;
		}
	}
	cout << "\nSinh vien co diem cao nhat:\n Cao dang: ";
	peo[x1]->Output(1);
	for (int i = 0; i < n; i++) {
		if (ROLE == 2) {
			count2 = i;
			peo[i]->highestAverage(max2, count2, 2);
			if (count2 > i) x2 = i;
		}
	}
	cout << "\n Dai hoc: ";
	peo[x2]->Output(2);
}