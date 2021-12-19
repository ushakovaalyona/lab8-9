#include<iostream>
#include <Windows.h>

using namespace std;
int main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int v1, g1, v2, g2;
	cout << "������� ���� ����������� �����, ������ �� ������� �� ��������� ������, ��� ����������� ������� ���� ��������� �����: ������ ����� � ����� ��������� (��� ����� ����� �������), ������ � ����� ����������� (��� ����� ����� �����) ";
	cin >> v1 >> g1;
	cout << "������� ���� ����������� �����, ������ �� ������� �� ��������� ������, ��� ����������� ������� ���� ��������� �����: ������ ����� � ����� ��������� (��� ����� ����� �������), ������ � ����� ����������� (��� ����� ����� �����) ";
	cin >> v2 >> g2;
	if (v1 > 8 || g1 > 8 || v2 > 8 || g2 > 8 || v1 < 0 || g1 < 0 || v2 < 0 || g2 < 0) {
		cout << "�� ����� ������������ ������, �������� ��������� � ���������� ��� ���!";
	}
	else {
		if (((v1 % 2 == g1 % 2) & (v2 % 2 == g2 % 2)) || ((v1 % 2 != g1 % 2) & (v2 % 2 != g2 % 2))) {
			cout << "���� �������� ������ ������ �����";
		}
		else { cout << "���� �������� ������ ������ ������"; }
		int figura;
		cout << "�� ������ ������� ������, ������� ����� �� ������ ����: �����, �����, ���� ��� ����. ������� �����, ��������������� �������� ��������� ���� ������: " << endl;
		cout << "1 - �����" << endl;
		cout << "2 - �����" << endl;
		cout << "3 - ����" << endl;
		cout << "4 - ����" << endl;
		cin >> figura;
		//�����:
		if (figura == 1) {
			if ((v1 - v2) * (v1 - v2) == (g1 - g2) * (g1 - g2)) {
				cout << "����� �������� ������� ����" << endl;
			}
			else if (v1 == v2 || g1 == g2) {
				cout << "����� �������� ������� ����" << endl;
			}
			else { cout << "����� �� �������� ������� ����" << endl; }
		}
		//�����:
		else if (figura == 2) {
			if (g1 == g2 || v1 == v2) {
				cout << "����� �������� ������� ����" << endl;
			}
			else { cout << "����� �� �������� ������� ����" << endl; }
		}
		//����:
		else if (figura == 3) {
			if ((v1 - v2) * (v1 - v2) == (g1 - g2) * (g1 - g2)) {
				cout << "���� �������� ������� ����" << endl;
			}
			else { cout << "���� �� �������� ������� ����" << endl; }
		}
		//����:
		else if (figura == 3) {
			if (((v1 - v2) * (v1 - v2) == 4 && (g1 - g2) * (g1 - g2) == 1) || ((g1 - g2) * (g1 - g2) == 4 && (v1 - v2) * (v1 - v2) == 1)) {
				cout << "���� �������� ������� ����" << endl;
			}
			else { cout << "���� �� �������� ������� ����" << endl; }
		}
		//������:
		else {
			cout << "�� ����� ������������ ������, �������� ��������� � ���������� ��� ���!" << endl;
		}
		//��������, ����� �� � ������� ���� ����� ����� �����, ����� ��� ����� (������ ������ ������������) ������� �� ������ ���� 
		cout << "�� ������ ������� ������, ������� ����� �� ������ ����: �����, ����� ��� ����. ������� �����, ��������������� �������� ��������� ���� ������: " << endl;
		cout << "1 - �����" << endl;
		cout << "2 - �����" << endl;
		cout << "3 - ����" << endl;
		int f;
		cin >> f;
		//�����
		if (f == 1) {
			if (g1 == g2 || v1 == v2) {
				cout << "����� ����� ������� �� ������� ���� �� ������ �� ���� ���" << endl;
			}
			else {
				int m = 0;
				int vp, gp;//������������� ����
				for (int i = 1; i < 8; i++) {
					for (int j = 1; j < 8; j++) {
						vp = i; gp = j;
						if ((gp == g2 || vp == v2) & (g1 == gp || v1 == vp)) {
							cout << "����� ����� ������� �� ������� ���� �� ������ �� ��� ����, ������ ��� �������� �� ���� (" << vp << ";" << gp << ")" << endl;
							m++;
						}
						if (m != 0) { break; }
					}
					if (m != 0) { break; }
				}
				if (m == 0) { cout << "����� �� ������ ������� �� ������� ���� �� ������ ���� �� ��� ����"; }
			}
		}
		//�����
		if (f == 2) {
			if (((v1 - v2) * (v1 - v2) == (g1 - g2) * (g1 - g2)) || (v1 == v2 || g1 == g2)) {
				cout << "����� ����� ������� �� ������� ���� �� ������ �� ���� ���" << endl;
			}
			else {
				int m = 0;
				int vp, gp;//������������� ����
				for (int i = 1; i < 8; i++) {
					for (int j = 1; j < 8; j++) {
						vp = i; gp = j;
						if ((((v1 - vp) * (v1 - vp) == (g1 - gp) * (g1 - gp)) || (v1 == vp || g1 == gp)) & (((vp - v2) * (vp - v2) == (gp - g2) * (gp - g2)) || (vp == v2 || gp == g2))) {
							cout << "����� ����� ������� �� ������� ���� �� ������ �� ��� ����, ������ ��� �������� �� ���� (" << vp << ";" << gp << ")" << endl;
							m++;
						}
						if (m != 0) { break; }
					}
					if (m != 0) { break; }
				}
				if (m == 0) { cout << "����� �� ������ ������� �� ������� ���� �� ������ ���� �� ��� ����"; }
			}

		}
		//����
		if (f == 3) {
			if ((v1 - v2) * (v1 - v2) == (g1 - g2) * (g1 - g2)) {
				cout << "���� ����� ������� �� ������� ���� �� ������ �� ���� ���" << endl;
			}
			else {
				int m = 0;
				int vp, gp;//������������� ����
				for (int i = 1; i < 8; i++) {
					for (int j = 1; j < 8; j++) {
						vp = i; gp = j;
						if (((v1 - vp) * (v1 - vp) == (g1 - gp) * (g1 - gp)) & ((vp - v2) * (vp - v2) == (gp - g2) * (gp - g2))) {
							cout << "���� ����� ������� �� ������� ���� �� ������ �� ��� ����, ������ ��� �������� �� ���� (" << vp << ";" << gp << ")" << endl;
							m++;
						}
						if (m != 0) { break; }
					}
					if (m != 0) { break; }
				}
				if (m == 0) { cout << "���� �� ������ ������� �� ������� ���� �� ������ ���� �� ��� ����"; }
			}

		}








	}

}