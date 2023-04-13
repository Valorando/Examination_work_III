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

	void Bank_system()
	{
		cout << "\t\t\tService login in progress..." << endl << endl;
		cout << "\t\t\tWelcome to the PrivatBank customer service system." << endl;
		cout << "\t\t\tYou don`t have a card yet, would you like to apply? (Yes - 1 or No - 2)" << endl;
		while (!(cin >> key_one)) {
			cout << endl;
			cout << "\t\t\tError!";
			cout << endl;
			cin.clear();
			cin.get();
		}
		if (key_one == 1)
		{
			cout << "\t\t\tSelect card type:" << endl;
			cout << "\t\t\tDebit - 1" << endl;
			cout << "\t\t\tCredit - 2" << endl;
			cout << endl;
			cout << "\t\t\tError!";
			while (!(cin >> key_two)) {
				cout << endl;
				cout << "\t\t\tError!";
				cout << endl;
				cin.clear();
				cin.get();
			}
			if (key_two == 1)
			{
				cout << "\t\t\tYou have selected the >Debit card< " << endl;
				cout << "\t\t\tLet's start filling in the data." << endl;
				cout << "\t\t\tEnter your full name\t";
				cin >> name;
				cout << endl;
				cout << "\t\t\tEnter your full surname:\t";
				cin >> surname;
				cout << endl;
				cout << "\t\t\tEnter your full patronymic:\t";
				cin >> patr;
				cout << endl;
				cout << "\t\t\tEnter your day of birth:\t";
				cin >> day;
				cout << endl;
				cout << "\t\t\tEnter your mounth of birth:\t";
				cin >> mounth;
				cout << endl;
				cout << "\t\t\tEnter your year of birth:\t";
				cin >> year;
				cout << endl;
				cout << "\t\t\tEnter your passport number:\t";
				cin >> passport_number;
				cout << endl;
				cout << "\t\t\tEnter your phone number:\t";
				cin >> phone_number;
				cout << endl;
				cout << "\t\t\tEnter password for your card:\t";
				cin >> password_card;
				cout << endl;
				cout << "\t\t\tDone, check your data is correct." << endl;
				cout << endl;
				cout << "\t\t\tSNP: " << surname << " " << name << " " << patr << endl;
				cout << "\t\t\tDate of birth: " << day << "/" << mounth << "/" << year << endl;
				cout << "\t\t\tPassport number: " << passport_number << endl;
				cout << "\t\t\tPhone number :" << phone_number << endl;
				cout << "\t\t\tPassword of the card: " << password_card << endl;
				cout << endl;
			}

			if (key_two == 2)
			{
				cout << "\t\t\tYou have selected the >Credit card< " << endl;
				cout << "\t\t\tLet's start filling in the data." << endl;
				cout << "\t\t\tEnter your full name\t";
				cin >> name;
				cout << endl;
				cout << "\t\t\tEnter your full surname:\t";
				cin >> surname;
				cout << endl;
				cout << "\t\t\tEnter your full patronymic:\t";
				cin >> patr;
				cout << endl;
				cout << "\t\t\tEnter your day of birth:\t";
				cin >> day;
				cout << endl;
				cout << "\t\t\tEnter your mounth of birth:\t";
				cin >> mounth;
				cout << endl;
				cout << "\t\t\tEnter your year of birth:\t";
				cin >> year;
				cout << endl;
				cout << "\t\t\tEnter your passport number:\t";
				cin >> passport_number;
				cout << endl;
				cout << "\t\t\tEnter your phone number:\t";
				cin >> phone_number;
				cout << endl;
				cout << "\t\t\tEnter password for your card:\t";
				cin >> password_card;
				cout << endl;
				cout << "\t\t\tDone, check your data is correct." << endl;
				cout << endl;
				cout << "\t\t\tSNP: " << surname << " " << name << " " << patr << endl;
				cout << endl;
				cout << "\t\t\tDate of birth: " << day << "/" << mounth << "/" << year << endl;
				cout << endl;
				cout << "\t\t\tPassport number: " << passport_number << endl;
				cout << endl;
				cout << "\t\t\tPhone number :" << phone_number << endl;
				cout << endl;
				cout << "\t\t\tPassword of the card: " << password_card << endl;
				cout << endl;
				cout << endl;
			}
		}

		if (key_one == 2)
		{
			exit(2);
		}

	}

	void Entry_data()
	{
		string path_name = "name.txt";
		ofstream name_data;
		name_data.open(path_name);
		if (name_data.is_open())
		{
			name_data << "Name: " << name << endl;
		}
		name_data.close();

		string path_surname = "suranme.txt";
		ofstream surname_data;
		surname_data.open(path_surname);
		if (surname_data.is_open())
		{
			surname_data << "Surname: " << surname << endl;
		}
		surname_data.close();

		string path_patr = "patr.txt";
		ofstream patr_data;
		patr_data.open(path_patr);
		if (patr_data.is_open())
		{
			patr_data << "Patronymic: " << patr << endl;
		}
		patr_data.close();

		string path_day = "day.txt";
		ofstream day_data;
		day_data.open(path_day);
		if (day_data.is_open())
		{
			day_data << "Day of birth: " << day << endl;
		}
		day_data.close();

		string path_mounth = "mounth.txt";
		ofstream mounth_data;
		mounth_data.open(path_mounth);
		if (mounth_data.is_open())
		{
			mounth_data << "Mounth of birth: " << mounth << endl;
		}
		mounth_data.close();

		string path_year = "year.txt";
		ofstream year_data;
		year_data.open(path_year);
		if (year_data.is_open())
		{
			year_data << "Year of birth: " << year << endl;
		}
		year_data.close();

		string path_passport = "passport.txt";
		ofstream passport_data;
		day_data.open(path_passport);
		if (passport_data.is_open())
		{
			passport_data << "Passport number: " << passport_number << endl;
		}
		passport_data.close();

		string path_phone = "phone.txt";
		ofstream phone_data;
		phone_data.open(path_phone);
		if (phone_data.is_open())
		{
			phone_data << "Phone number: " << phone_number << endl;
		}
		phone_data.close();

		string path_card = "card.txt";
		ofstream card_data;
		card_data.open(path_card);
		if (card_data.is_open())
		{
			card_data << "Password of the card: " << password_card << endl;
		}
		card_data.close();
	}
};



int main()
{
	
}