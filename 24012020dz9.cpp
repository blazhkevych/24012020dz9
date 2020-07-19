/*
9. В старояпонском календаре был принят 12 - летний цикл.Годы внутри цикла носили названия животных : крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.Написать программу, которая вводит номер некоторого года и печатает его название по старояпонскому календарю.
(Справка : 1996 г.— год Крысы — начало очередного цикла.)
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, year, firstYear;
	firstYear = 1996; //год крысы
	cout << "Введите год: ";
	cin >> year;
	if (year >= 1996)
	{
		a = (year - firstYear) % 12;
		switch (a)
		{
		case 0:cout << "Крысы"; break;
		case 1:cout << "Коровы"; break;
		case 2:cout << "Тигра"; break;
		case 3:cout << "Зайца"; break;
		case 4:cout << "Дракона"; break;
		case 5:cout << "Змеи"; break;
		case 6:cout << "Лошади"; break;
		case 7:cout << "Овцы"; break;
		case 8:cout << "Обезьяны"; break;
		case 9:cout << "Курицы"; break;
		case 10:cout << "Собаки"; break;
		case 11:cout << "Свиньи"; break;
		}
	}
	else if (year < 1996)
	{
		cout << "Ошибка";
	}
	return 0;
}
