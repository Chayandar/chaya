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
// Задание 1

//Создать структуру, в которой определены координаты точки в трехмерном пространстве
//(x, y, z).Обеспечить ввод массива таких точек.Вывести список точек и их координат на экран, а
//также определить точку, которая ближе всех к началу координат.


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
//	for (int i = 0; i < N; i++) {	//создается 5 точек с рандомными положительными координатами до 100
//		mas[i].x = rand() % 100;
//		mas[i].y = rand() % 100;
//		mas[i].z = rand() % 100;
//		cout << i + 1 << ")\t";
//		cout << mas[i].x << "\t" << mas[i].y << "\t" << mas[i].z << endl;
//	}
//
//	for (int i = 0; i < N; i++) {	//ищем минимальную и запоминаем точку
//		c = sqrt(mas[i].x * mas[i].x + mas[i].y * mas[i].y + mas[i].z * mas[i].z);
//		if (min > c) {
//			min = c;
//			count = i + 1;
//		}
//	}
//	cout << "\nMin:\n";
//	cout << count << ")\t";
//	cout << mas[count - 1].x << "\t" << mas[count - 1].y << "\t" << mas[count - 1].z << endl;	//вывод минимальной точки с его координатами
//}

//1.2
//Задание 2

//Используя структуру, битовые поля и объединение, создайте тип данных, позволяющий
//переводить целое число из десятичной в двоичную форму без каких - либо операций, кроме
//присваивания и вывода на экран


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

//1.3 - индивидуальное

///*Ввести массив структур(память под него можно выделить динамически) в соответствии
//с вариантом.В программе реализовать меню и соответствующие функции :
//1) Создание нового элемента массива структур(ввод его данных);
//2) Сортировка массива структур;
//3) Изменение заданной структуры(вводится номер элемента в массиве структур, и его
//данные изменяются на новые введенные пользователем данные);
//4) Удаление структуры из массива(можно удаляемому элементу массива присвоить
//значение последнего элемента и уменьшить количество элементов в массиве структур);
//5) Вывод на экран массива структур в виде таблицы.Также выводите вычисляемое
//значение по всему массиву, указанное в вашем варианте.
//6) Поиск в массиве структур по заданному параметру(самостоятельно выберите поле
//структуры и реализуйте поиск по нему).То есть это вывод, но только определенных данных.
//Номера всех операций из меню представить в виде перечисления
//
//Структура «Покупатель» : Дата покупки; ФИО; домашний адрес; номер телефона; сумма
//покупки.Вычисляемое значение – общая сумма покупки.*/


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
//	mas[n].fioof.name = "Александр";
//	mas[n].fioof.surname = "Олегов";
//	mas[n].fioof.otch = "Героинович";
//	mas[n].adres = "Гагарина 124";
//	mas[n].number = "89140627432";
//	mas[n].cost = 99;
//	n++;
//	mas[n].dateof.day = 6;
//	mas[n].dateof.mounth = 9;
//	mas[n].dateof.year = 2002;
//	mas[n].fioof.name = "Иван";
//	mas[n].fioof.surname = "Иванов";
//	mas[n].fioof.otch = "Иванович";
//	mas[n].adres = "Ленина 43";
//	mas[n].number = "89160524567";
//	mas[n].cost = 23.12;
//	n++;
//	mas[n].dateof.day = 12;
//	mas[n].dateof.mounth = 12;
//	mas[n].dateof.year = 1989;
//	mas[n].fioof.name = "Михаил";
//	mas[n].fioof.surname = "Петров";
//	mas[n].fioof.otch = "Петрович";
//	mas[n].adres = "Гагарина 2";
//	mas[n].number = "89140667432";
//	mas[n].cost = 54.66;
//	n++;
//	mas[n].dateof.day = 2;
//	mas[n].dateof.mounth = 8;
//	mas[n].dateof.year = 2022;
//	mas[n].fioof.name = "Алексей";
//	mas[n].fioof.surname = "Иванов";
//	mas[n].fioof.otch = "Иванович";
//	mas[n].adres = "Ленина 43";
//	mas[n].number = "89140524567";
//	mas[n].cost = 144.44;
//	n++;
//	while (true)
//	{
//		cout << "\n1 - вывод таблицы\n";
//		cout << "2 - добавить\n";
//		cout << "3 - изменить данные\n";
//		cout << "4 - удалить\n";
//		cout << "5 - поиск по дате\n";
//		int a;
//		cin >> a;
//		switch (a) {
//		case(1): // Вывод таблицы
//			cout << "____________________________________________________________________________________________________________________\n";
//			cout << setw(3) << "№" << "|" << setw(10) << "ДАТА" << "|\t" << setw(35) << "ФАМИИЛИЯ ИМЯ ОТЧЕСТВО" << "|\t" << setw(18) << "АДРЕС" << "|\t" << setw(14) << "НОМЕР" << "|\t";
//			cout << setw(20) << "СТОИМОСТЬ" << "|\n";
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
//			cout << "                                                                          |   ОБЩАЯ СТОИМОСТЬ |" << setw(21) << Cost << "| \n";
//			cout << "__________________________________________________________________________|___________________|_____________________|\n";
//			Cost = 0;
//			break;
//
//		case(2): // Добавление
//			cout << "Введите день: ";
//			cin >> mas[n].dateof.day;
//			cout << "Введите месяц: ";
//			cin >> mas[n].dateof.mounth;
//			cout << "Введите год: ";
//			cin >> mas[n].dateof.year;
//
//			cout << "Введите имя: ";
//			cin >> mas[n].fioof.name;
//			cout << "Введите фимилию: ";
//			cin >> mas[n].fioof.surname;
//			cout << "Введите отчество: ";
//			cin >> mas[n].fioof.otch;
//
//			cout << "Введите адрес: ";
//			cin >> mas[n].adres;
//
//			cout << "Введите номер телефона: ";
//			cin >> mas[n].number;
//
//			cout << "Введите стоимость: ";
//			cin >> mas[n].cost;
//			n++;
//			break;
//
//
//
//		case(3): // изменение
//			int w, e;
//			cout << "Введите номер элемента: ";
//			cin >> w;
//			w--;
//			cout << "Что вы хотите изменить?\n1 - дату\n2 - ФИО\n3 - адрес\n4 - номер телефона\n5 - стоимость\n";
//			cin >> e;
//			switch (e)
//			{
//			case(1):
//				cout << "Введите день: ";
//				cin >> mas[w].dateof.day;
//				cout << "Введите месяц: ";
//				cin >> mas[w].dateof.mounth;
//				cout << "Введите год: ";
//				cin >> mas[w].dateof.year;
//				break;
//			case(2):
//				cout << "Введите имя: ";
//				cin >> mas[w].fioof.name;
//				cout << "Введите фимилию: ";
//				cin >> mas[w].fioof.surname;
//				cout << "Введите отчество: ";
//				cin >> mas[w].fioof.otch;
//				break;
//			case(3):
//				cout << "Введите адрес: ";
//				cin >> mas[w].adres;
//				break;
//			case(4):
//				cout << "Введите номер телефона: ";
//				cin >> mas[w].number;
//				break;
//			case(5):
//				cout << "Введите стоимость: ";
//				cin >> mas[w].cost;
//				break;
//			default:
//				break;
//			}
//			break;
//
//		case(4): //Удаление
//			if (n != 0) {
//				cout << "Введите номер\n";
//				cin >> e; e--;
//				if (e < n && e > 0) {
//					n--;
//					mas[e] = mas[n];
//				}
//				else
//					cout << "efw";
//			}
//			else
//				cout << "Больше удалять нечего\n";
//			break;
//
//		case(5): // Поиск по дате
//			date mass;
//			Cost = 0;
//			cout << "Введите день\n";
//			cin >> mass.day;
//			cout << "Введите месяц\n";
//			cin >> mass.mounth;
//			cout << "Введите год\n";
//			cin >> mass.year;
//			cout << "____________________________________________________________________________________________________________________\n";
//			cout << setw(3) << "№" << "|" << setw(10) << "ДАТА" << "|\t" << setw(35) << "ФАМИИЛИЯ ИМЯ ОТЧЕСТВО" << "|\t" << setw(18) << "АДРЕС" << "|\t" << setw(14) << "НОМЕР" << "|\t";
//			cout << setw(20) << "СТОИМОСТЬ" << "|\n";
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
//			cout << "                                                                          |   ОБЩАЯ СТОИМОСТЬ |" << setw(21) << Cost << "| \n";
//			cout << "__________________________________________________________________________|___________________|_____________________|\n";
//			Cost = 0;
//			break;
//		}
//	}
//}


//1.4 - доп задание

// Создайте переменную структуру (структура с объединением в качестве элемента),
//представляющую собой универсальный массив, который может быть использован для записи
//целых чисел или строки.Внутри структуры создайте переменную - метку(флаг), которая
//говорит о том, какого типа данные сейчас в экземпляре структуры.



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
//		cout << "Что вы будете вводить?\n\n1) Буквы\t2)Цифры\n\nВыбор: ";
//		cin >> str.Flag;
//
//		system("cls");
//
//		if (str.Flag == 1)
//		{
//			int buk;
//			cout << "Введите кол-во букв\n";
//			cin >> buk;
//			system("cls");
//			cout << "Сейчас вводятся БУКВЫ\n\n";
//
//			for (int i = 0; i < buk; i++)
//			{
//				cout << "Введите " << i + 1 << "-й элемент: ";
//				cin >> str.myUnion.a[i];
//			}
//
//			cout << "Ваша строка: [ ";
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
//			cout << "Введите кол-во цифр\n";
//			cin >> sif;
//			system("cls");
//			cout << "Сейчас вводятся ЦИФРЫ\n\n";
//
//			for (int i = 0; i < sif; i++)
//			{
//				cout << "Введите " << i + 1 << "-й элемент: ";
//				cin >> str.myUnion.b[i];
//			}
//
//			cout << "Ваша строка: [ ";
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