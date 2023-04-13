/*Создайте систему управления персональными финансами.
Система должна иметь следующие возможности :
■■ Наличие разных кошельков и карт(дебетовых / кредитных);
■■ Пополнение кошельков и карт;
■■ Внесение затрат.Каждая затрата относится к определенной категории;
■■ Формирование отчетов по затратам и категориям :
• день;
• неделя;
• месяц.
■■ Формирование рейтингов по максимальным суммам :
• ТОП - 3 затрат :
	ӽӽ неделя;
ӽӽ месяц.
• ТОП - 3 категорий:
ӽӽ неделя;
ӽӽ месяц.
■■ Сохранение отчетов и рейтингов в файл.*/

#include<iostream>
#include<fstream>
using namespace std;

class PrivatBank
{
public:
	int key_one;
	int key_two;
	int key_three;
	int key_four;

	string name;
	string surname;
	string patr;
	int day;
	int mounth;
	int year;
	string phone_number;
	string passport_number;
	string password_card;

	float card_balance;
	float balance;
	float money;

	PrivatBank()
	{
		name = "Undefined";
		surname = "Undefined";
		patr = "Undefined";
		day = 0;
		mounth = 0;
		year = 0;
		phone_number = "Undefined";
		passport_number = "Undefined";
		password_card = "Undefined";
		card_balance = 0.0;
		balance = 0.0;
		money = 0.0;

	}
};



int main()
{
	
}