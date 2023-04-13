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

	void Card_system()
	{
		cout << endl;
		cout << "\t\t\t" << name << " " << patr << " " << " your card has been successfully created.\n\n";
		cout << "\t\t\tWould you like to enter the card management cabinet?" << endl;
		cout << "\t\t\tYes - 1" << endl;
		cout << "\t\t\tNo - 2" << endl;
		while (!(cin >> key_three)) {
			cout << endl;
			cout << "\t\t\tError!";
			cout << endl;
			cin.clear();
			cin.get();
		}
		if (key_three == 1)
		{
			cout << "\t\t\t" << name << " " << patr << " " << " welcome to the card management office." << endl;
			do
			{
				cout << endl;
				cout << "\t\t\tSelect action:" << endl;
				cout << "\t\t\tView information about the card and its owner - 1" << endl;
				cout << "\t\t\tChanging data about the card and its owner - 2" << endl;
				cout << "\t\t\tView balance - 3" << endl;
				cout << "\t\t\tReplenish balance - 4" << endl;
				cout << "\t\t\tDiscard balance - 5" << endl;
				cout << "\t\t\tTransaction history - 6" << endl;
				cout << "\t\t\tExit - 7" << endl;
				while (!(cin >> key_four)) {
					cout << endl;
					cout << "\t\t\tError!";
					cout << endl;
					cin.clear();
					cin.get();
				}
				if (key_four == 1)
				{
					string path_name_two = "name.txt";
					ifstream name_data_two;
					name_data_two.open(path_name_two);
					if (name_data_two.is_open())
					{
						char file_name;
						while (name_data_two.get(file_name))
						{
							cout << file_name;
						}
					}
					name_data_two.close();

					string path_surname_two = "suranme.txt";
					ifstream surname_data_two;
					surname_data_two.open(path_surname_two);
					if (surname_data_two.is_open())
					{
						char file_surname;
						while (surname_data_two.get(file_surname))
						{
							cout << file_surname;
						}
					}
					surname_data_two.close();

					string path_patr_two = "patr.txt";
					ifstream patr_data_two;
					patr_data_two.open(path_patr_two);
					if (patr_data_two.is_open())
					{
						char file_patr;
						while (patr_data_two.get(file_patr))
						{
							cout << file_patr;
						}
					}
					patr_data_two.close();

					string path_day_two = "day.txt";
					ifstream day_data_two;
					day_data_two.open(path_day_two);
					if (day_data_two.is_open())
					{
						char file_day;
						while (day_data_two.get(file_day))
						{
							cout << file_day;
						}
					}
					day_data_two.close();

					string path_mounth_two = "mounth.txt";
					ifstream mounth_data_two;
					mounth_data_two.open(path_mounth_two);
					if (mounth_data_two.is_open())
					{
						char file_mounth;
						while (mounth_data_two.get(file_mounth))
						{
							cout << file_mounth;
						}
					}
					mounth_data_two.close();

					string path_year_two = "year.txt";
					ifstream year_data_two;
					year_data_two.open(path_year_two);
					if (year_data_two.is_open())
					{
						char file_year;
						while (year_data_two.get(file_year))
						{
							cout << file_year;
						}
					}
					year_data_two.close();

					string path_passport_two = "passport.txt";
					ifstream passport_data_two;
					day_data_two.open(path_passport_two);
					if (passport_data_two.is_open())
					{
						char file_passport;
						while (passport_data_two.get(file_passport))
						{
							cout << file_passport;
						}
					}
					passport_data_two.close();

					string path_phone_two = "phone.txt";
					ifstream phone_data_two;
					phone_data_two.open(path_phone_two);
					if (phone_data_two.is_open())
					{
						char file_phone;
						while (phone_data_two.get(file_phone))
						{
							cout << file_phone;
						}
					}
					phone_data_two.close();

					string path_card_two = "card.txt";
					ifstream card_data_two;
					card_data_two.open(path_card_two);
					if (card_data_two.is_open())
					{
						char file_card;
						while (card_data_two.get(file_card))
						{
							cout << file_card;
						}
					}
					card_data_two.close();
				}

				if (key_four == 2)
				{
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
					cout << "\t\t\tSNP: " << surname << " " << name << " " << patr << endl;
					cout << "\t\t\tDate of birth: " << day << "/" << mounth << "/" << year << endl;
					cout << "\t\t\tPassport number: " << passport_number << endl;
					cout << "\t\t\tPhone number :" << phone_number << endl;
					cout << "\t\t\tPassword of the card: " << password_card;

					string path_name_three = "name.txt";
					ofstream name_data_three;
					name_data_three.open(path_name_three);
					if (name_data_three.is_open())
					{
						name_data_three << "\t\t\tName: " << name << endl;
					}
					name_data_three.close();

					string path_surname_three = "suranme.txt";
					ofstream surname_data_three;
					surname_data_three.open(path_surname_three);
					if (surname_data_three.is_open())
					{
						surname_data_three << "\t\t\tSurname: " << surname << endl;
					}
					surname_data_three.close();

					string path_patr_three = "patr.txt";
					ofstream patr_data_three;
					patr_data_three.open(path_patr_three);
					if (patr_data_three.is_open())
					{
						patr_data_three << "\t\t\tPatronymic: " << patr << endl;
					}
					patr_data_three.close();

					string path_day_three = "day.txt";
					ofstream day_data_three;
					day_data_three.open(path_day_three);
					if (day_data_three.is_open())
					{
						day_data_three << "\t\t\tDay of birth: " << day << endl;
					}
					day_data_three.close();

					string path_mounth_three = "mounth.txt";
					ofstream mounth_data_three;
					mounth_data_three.open(path_mounth_three);
					if (mounth_data_three.is_open())
					{
						mounth_data_three << "\t\t\tMounth of birth: " << mounth << endl;
					}
					mounth_data_three.close();

					string path_year_three = "year.txt";
					ofstream year_data_three;
					year_data_three.open(path_year_three);
					if (year_data_three.is_open())
					{
						year_data_three << "\t\t\tYear of birth: " << year << endl;
					}
					year_data_three.close();

					string path_passport_three = "passport.txt";
					ofstream passport_data_three;
					passport_data_three.open(path_passport_three);
					if (passport_data_three.is_open())
					{
						passport_data_three << "\t\t\tPassport number: " << passport_number << endl;
					}
					passport_data_three.close();

					string path_phone_three = "phone.txt";
					ofstream phone_data_three;
					phone_data_three.open(path_phone_three);
					if (phone_data_three.is_open())
					{
						phone_data_three << "\t\t\tPhone number: " << phone_number << endl;
					}
					phone_data_three.close();

					string path_card_three = "card.txt";
					ofstream card_data_three;
					card_data_three.open(path_card_three);
					if (card_data_three.is_open())
					{
						card_data_three << "\t\t\tPassword of the card: " << password_card << endl;
					}
					card_data_three.close();
				}

				if (key_four == 3)
				{
					cout << endl;
					cout << "\t\t\tYour card balance: " << card_balance;
					cout << endl;
				}

				if (key_four == 4)
				{
					cout << endl;
					cout << "\t\t\tEnter the replenishment amount: \t";
					cin >> money;
					card_balance = balance + money;
					string path_money = "balance.txt";
					ofstream money_one;
					money_one.open(path_money, ofstream::app);
					if (money_one.is_open())
					{
						money_one << endl;
						money_one << "Balance: " << card_balance << endl;
						money_one << endl;
						money_one << "Transaction: " << "+" << money << endl;
						cout << endl;
					}
					money_one.close();
					cout << endl;


				}

				if (key_four == 5)
				{
					cout << endl;
					cout << "\t\t\tEnter the replenishment amount: \t";
					cin >> money;
					card_balance = balance - money;
					card_balance = balance + money;
					string path_money_two = "balance.txt";
					ofstream money_two;
					money_two.open(path_money_two, ofstream::app);
					if (money_two.is_open())
					{
						money_two << endl;
						money_two << "Balance: " << card_balance << endl;
						money_two << endl;
						money_two << "Transaction: " << "-" << money << endl;
						cout << endl;
					}
					money_two.close();
					cout << endl;
				}

				if (key_four == 6)
				{
					cout << endl;
					cout << "Transaction history: " << endl;
					string path_three = "balance.txt";
					ifstream money_three;
					money_three.open(path_three);
					if (money_three.is_open())
					{
						char file = 0;
						while (money_three.get(file))
						{
							cout << file;
						}
					}
					money_three.close();
					cout << endl;
				}

				if (key_four == 7)
				{
					exit(7);
				}
			} while (key_four != 0);


		}

		if (key_three == 2)
		{
			exit(2);
		}
	}
};



int main()
{
	
}