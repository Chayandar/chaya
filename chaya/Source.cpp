#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <cmath>
#include <ctime>
#include <math.h>
#include <iomanip>

using namespace std;



//1.1
// ������� 1

//������� ���������, � ������� ���������� ���������� ����� � ���������� ������������
//(x, y, z).���������� ���� ������� ����� �����.������� ������ ����� � �� ��������� �� �����, �
//����� ���������� �����, ������� ����� ���� � ������ ���������.


//struct coord
//{
//	int x, y, z;
//};
//int main() {
//	srand(time(0));
//	double min = 10000;
//	double c;
//	int count;
//	const int N = 5;
//	coord mas[N];
//	for (int i = 0; i < N; i++) {	//��������� 5 ����� � ���������� �������������� ������������ �� 100
//		mas[i].x = rand() % 100;
//		mas[i].y = rand() % 100;
//		mas[i].z = rand() % 100;
//		cout << i + 1 << ")\t";
//		cout << mas[i].x << "\t" << mas[i].y << "\t" << mas[i].z << endl;
//	}
//
//	for (int i = 0; i < N; i++) {	//���� ����������� � ���������� �����
//		c = sqrt(mas[i].x * mas[i].x + mas[i].y * mas[i].y + mas[i].z * mas[i].z);
//		if (min > c) {
//			min = c;
//			count = i + 1;
//		}
//	}
//	cout << "\nMin:\n";
//	cout << count << ")\t";
//	cout << mas[count - 1].x << "\t" << mas[count - 1].y << "\t" << mas[count - 1].z << endl;	//����� ����������� ����� � ��� ������������
//}

//1.2
//������� 2

//��������� ���������, ������� ���� � �����������, �������� ��� ������, �����������
//���������� ����� ����� �� ���������� � �������� ����� ��� ����� - ���� ��������, �����
//������������ � ������ �� �����


//struct MyStruct
//{
//	unsigned short int b1 : 1;
//	unsigned short int b2 : 1;
//	unsigned short int b3 : 1;
//	unsigned short int b4 : 1;
//	unsigned short int b5 : 1;
//	unsigned short int b6 : 1;
//	unsigned short int b7 : 1;
//	unsigned short int b8 : 1;
//	unsigned short int b9 : 1;
//	unsigned short int b10 : 1;
//	unsigned short int b11 : 1;
//	unsigned short int b12 : 1;
//	unsigned short int b13 : 1;
//	unsigned short int b14 : 1;
//	unsigned short int b15 : 1;
//	unsigned short int b16 : 1;
//};
//union MyUnion
//{
//	MyStruct a;
//	short int b;
//};
//int main() {
//	MyUnion c;
//	while (true)
//	{
//		cin >> c.b;
//		cout << c.a.b16 << c.a.b15 << c.a.b14 << c.a.b13 << c.a.b12 << c.a.b11 << c.a.b10 << c.a.b9;
//		cout << c.a.b8 << c.a.b7 << c.a.b6 << c.a.b5 << c.a.b4 << c.a.b3 << c.a.b2 << c.a.b1;
//		cout << endl;
//	}
//}

//1.3 - ��������������

///*������ ������ ��������(������ ��� ���� ����� �������� �����������) � ������������
//� ���������.� ��������� ����������� ���� � ��������������� ������� :
//1) �������� ������ �������� ������� ��������(���� ��� ������);
//2) ���������� ������� ��������;
//3) ��������� �������� ���������(�������� ����� �������� � ������� ��������, � ���
//������ ���������� �� ����� ��������� ������������� ������);
//4) �������� ��������� �� �������(����� ���������� �������� ������� ���������
//�������� ���������� �������� � ��������� ���������� ��������� � ������� ��������);
//5) ����� �� ����� ������� �������� � ���� �������.����� �������� �����������
//�������� �� ����� �������, ��������� � ����� ��������.
//6) ����� � ������� �������� �� ��������� ���������(�������������� �������� ����
//��������� � ���������� ����� �� ����).�� ���� ��� �����, �� ������ ������������ ������.
//������ ���� �������� �� ���� ����������� � ���� ������������
//
//��������� ������������ : ���� �������; ���; �������� �����; ����� ��������; �����
//�������.����������� �������� � ����� ����� �������.*/


//struct date
//{
//	int day, mounth, year;
//};
//struct fio
//{
//	string name, surname, otch;
//};
//struct Customer
//{
//	date dateof;
//	fio fioof;
//	string adres;
//	string number;
//	double cost;
//};
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	const int N = 20;
//	int n = 0, max = 0, e;
//	int count = 0;
//	double Cost = 0;
//	Customer mas[N];
//
//	mas[n].dateof.day = 16;
//	mas[n].dateof.mounth = 05;
//	mas[n].dateof.year = 1999;
//	mas[n].fioof.name = "���������";
//	mas[n].fioof.surname = "������";
//	mas[n].fioof.otch = "����������";
//	mas[n].adres = "�������� 124";
//	mas[n].number = "89140627432";
//	mas[n].cost = 99;
//	n++;
//	mas[n].dateof.day = 6;
//	mas[n].dateof.mounth = 9;
//	mas[n].dateof.year = 2002;
//	mas[n].fioof.name = "����";
//	mas[n].fioof.surname = "������";
//	mas[n].fioof.otch = "��������";
//	mas[n].adres = "������ 43";
//	mas[n].number = "89160524567";
//	mas[n].cost = 23.12;
//	n++;
//	mas[n].dateof.day = 12;
//	mas[n].dateof.mounth = 12;
//	mas[n].dateof.year = 1989;
//	mas[n].fioof.name = "������";
//	mas[n].fioof.surname = "������";
//	mas[n].fioof.otch = "��������";
//	mas[n].adres = "�������� 2";
//	mas[n].number = "89140667432";
//	mas[n].cost = 54.66;
//	n++;
//	mas[n].dateof.day = 2;
//	mas[n].dateof.mounth = 8;
//	mas[n].dateof.year = 2022;
//	mas[n].fioof.name = "�������";
//	mas[n].fioof.surname = "������";
//	mas[n].fioof.otch = "��������";
//	mas[n].adres = "������ 43";
//	mas[n].number = "89140524567";
//	mas[n].cost = 144.44;
//	n++;
//	while (true)
//	{
//		cout << "\n1 - ����� �������\n";
//		cout << "2 - ��������\n";
//		cout << "3 - �������� ������\n";
//		cout << "4 - �������\n";
//		cout << "5 - ����� �� ����\n";
//		int a;
//		cin >> a;
//		switch (a) {
//		case(1): // ����� �������
//			cout << "____________________________________________________________________________________________________________________\n";
//			cout << setw(3) << "�" << "|" << setw(10) << "����" << "|\t" << setw(35) << "�������� ��� ��������" << "|\t" << setw(18) << "�����" << "|\t" << setw(14) << "�����" << "|\t";
//			cout << setw(20) << "���������" << "|\n";
//			cout << "___|__________|____________________________________|______________________|___________________|_____________________|\n";
//			for (int i = 0; i < n; i++) {
//				cout << setw(3) << i + 1 << "|";
//				cout << setw(2) << mas[i].dateof.day << '.' << setw(2) << mas[i].dateof.mounth << '.' << setw(4) << mas[i].dateof.year << "|\t";
//				cout << setw(11) << mas[i].fioof.surname << ' ' << setw(11) << mas[i].fioof.name << ' ' << setw(11) << mas[i].fioof.otch << "|\t";
//				cout << setw(18) << mas[i].adres << "|\t";
//				cout << setw(14) << mas[i].number << "|\t";
//				cout << setw(20) << mas[i].cost << '|';
//				cout << endl;
//				cout << "___|__________|____________________________________|______________________|___________________|_____________________|\n";
//				Cost = Cost + mas[i].cost;
//			}
//			cout << "                                                                          |   ����� ��������� |" << setw(21) << Cost << "| \n";
//			cout << "__________________________________________________________________________|___________________|_____________________|\n";
//			Cost = 0;
//			break;
//
//		case(2): // ����������
//			cout << "������� ����: ";
//			cin >> mas[n].dateof.day;
//			cout << "������� �����: ";
//			cin >> mas[n].dateof.mounth;
//			cout << "������� ���: ";
//			cin >> mas[n].dateof.year;
//
//			cout << "������� ���: ";
//			cin >> mas[n].fioof.name;
//			cout << "������� �������: ";
//			cin >> mas[n].fioof.surname;
//			cout << "������� ��������: ";
//			cin >> mas[n].fioof.otch;
//
//			cout << "������� �����: ";
//			cin >> mas[n].adres;
//
//			cout << "������� ����� ��������: ";
//			cin >> mas[n].number;
//
//			cout << "������� ���������: ";
//			cin >> mas[n].cost;
//			n++;
//			break;
//
//
//
//		case(3): // ���������
//			int w, e;
//			cout << "������� ����� ��������: ";
//			cin >> w;
//			w--;
//			cout << "��� �� ������ ��������?\n1 - ����\n2 - ���\n3 - �����\n4 - ����� ��������\n5 - ���������\n";
//			cin >> e;
//			switch (e)
//			{
//			case(1):
//				cout << "������� ����: ";
//				cin >> mas[w].dateof.day;
//				cout << "������� �����: ";
//				cin >> mas[w].dateof.mounth;
//				cout << "������� ���: ";
//				cin >> mas[w].dateof.year;
//				break;
//			case(2):
//				cout << "������� ���: ";
//				cin >> mas[w].fioof.name;
//				cout << "������� �������: ";
//				cin >> mas[w].fioof.surname;
//				cout << "������� ��������: ";
//				cin >> mas[w].fioof.otch;
//				break;
//			case(3):
//				cout << "������� �����: ";
//				cin >> mas[w].adres;
//				break;
//			case(4):
//				cout << "������� ����� ��������: ";
//				cin >> mas[w].number;
//				break;
//			case(5):
//				cout << "������� ���������: ";
//				cin >> mas[w].cost;
//				break;
//			default:
//				break;
//			}
//			break;
//
//		case(4): //��������
//			if (n != 0) {
//				cout << "������� �����\n";
//				cin >> e; e--;
//				if (e < n && e > 0) {
//					n--;
//					mas[e] = mas[n];
//				}
//				else
//					cout << "efw";
//			}
//			else
//				cout << "������ ������� ������\n";
//			break;
//
//		case(5): // ����� �� ����
//			date mass;
//			Cost = 0;
//			cout << "������� ����\n";
//			cin >> mass.day;
//			cout << "������� �����\n";
//			cin >> mass.mounth;
//			cout << "������� ���\n";
//			cin >> mass.year;
//			cout << "____________________________________________________________________________________________________________________\n";
//			cout << setw(3) << "�" << "|" << setw(10) << "����" << "|\t" << setw(35) << "�������� ��� ��������" << "|\t" << setw(18) << "�����" << "|\t" << setw(14) << "�����" << "|\t";
//			cout << setw(20) << "���������" << "|\n";
//			cout << "___|__________|____________________________________|______________________|___________________|_____________________|\n";
//			for (int i = 0; i < n; i++)
//				if (mass.day == mas[i].dateof.day && mass.mounth == mas[i].dateof.mounth && mass.year == mas[i].dateof.year) {
//					cout << setw(3) << i + 1 << "|";
//					cout << setw(2) << mas[i].dateof.day << '.' << setw(2) << mas[i].dateof.mounth << '.' << setw(4) << mas[i].dateof.year << "|\t";
//					cout << setw(11) << mas[i].fioof.surname << ' ' << setw(11) << mas[i].fioof.name << ' ' << setw(11) << mas[i].fioof.otch << "|\t";
//					cout << setw(18) << mas[i].adres << "|\t";
//					cout << setw(14) << mas[i].number << "|\t";
//					cout << setw(20) << mas[i].cost << '|';
//					cout << endl;
//					cout << "___|__________|____________________________________|______________________|___________________|_____________________|\n";
//					Cost = Cost + mas[i].cost;
//				}
//			cout << "                                                                          |   ����� ��������� |" << setw(21) << Cost << "| \n";
//			cout << "__________________________________________________________________________|___________________|_____________________|\n";
//			Cost = 0;
//			break;
//		}
//	}
//}


//1.4 - ��� �������

// �������� ���������� ��������� (��������� � ������������ � �������� ��������),
//�������������� ����� ������������� ������, ������� ����� ���� ����������� ��� ������
//����� ����� ��� ������.������ ��������� �������� ���������� - �����(����), �������
//������� � ���, ������ ���� ������ ������ � ���������� ���������.



//struct MyStruct
//{
//	int Flag;
//	union
//	{
//		char a[5];
//		int b[5];
//	} myUnion;
//}str;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	while (true)
//	{
//		cout << "��� �� ������ �������?\n\n1) �����\t2)�����\n\n�����: ";
//		cin >> str.Flag;
//
//		system("cls");
//
//		if (str.Flag == 1)
//		{
//			int buk;
//			cout << "������� ���-�� ����\n";
//			cin >> buk;
//			system("cls");
//			cout << "������ �������� �����\n\n";
//
//			for (int i = 0; i < buk; i++)
//			{
//				cout << "������� " << i + 1 << "-� �������: ";
//				cin >> str.myUnion.a[i];
//			}
//
//			cout << "���� ������: [ ";
//
//			for (int i = 0; i < buk; i++)
//			{
//				cout << str.myUnion.a[i] << " ";
//			}
//
//			cout << "]";
//			_getch(); system("cls");
//		}
//		else
//		{
//			int sif;
//			cout << "������� ���-�� ����\n";
//			cin >> sif;
//			system("cls");
//			cout << "������ �������� �����\n\n";
//
//			for (int i = 0; i < sif; i++)
//			{
//				cout << "������� " << i + 1 << "-� �������: ";
//				cin >> str.myUnion.b[i];
//			}
//
//			cout << "���� ������: [ ";
//
//			for (int i = 0; i < sif; i++)
//			{
//				cout << str.myUnion.b[i] << " ";
//			}
//
//			cout << "]";
//			_getch(); system("cls");
//		}
//	}
//
//	system("pause");
//}