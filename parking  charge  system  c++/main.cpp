#include<iostream>
#include<Windows.h>
using namespace std;

struct info
{
	string type;
	string model;
	int vNo;
}s;

void menu();
void car();
void bus();
void motorcycle();

int main()
{
	int n;
	cout << "\t\t\t\t ================================\n";
	cout << "\t\t\t\t|Welcome to parking charge system|\n";
	cout << "\t\t\t\t ================================\n\n";
	do
	{
		menu();
		int choice;
		cout << "\n\t\t\t\tenter choice: ";
		cin >> choice;
		cout << "\t\t\t\t----------------------------------\n";
		switch (choice)
		{
		case 1:
			car();
			break;
		case 2:
			bus();
			break;
		case 3:
			motorcycle();
			break;
		default:
			cout << "\t\t\t\tplease, choose from menu.\n";
			break;
		}
		cout << "\n\n\t\t\t\tpress...-1 to end program: ";
		cin >> n;
	} while (n != -1);
	return 0;
}
//menu
void menu()
{
	cout << "\t\t\t\t----------------------------------\n";
	cout << "\t\t\t\tpress..1 to enter car.\n";
	cout << "\t\t\t\tpress..2 to enter bus.\n";
	cout << "\t\t\t\tpress..3 to enter motorcycle.\n";
	cout << "\t\t\t\t----------------------------------\n";
}
//car
void car()
{
	system("cls");
	cout << "\t\t\t\tenter type of car: ";
	cin >> s.type;
	cout << "\t\t\t\tenter model of car: ";
	cin >> s.model;
	cout << "\t\t\t\tenter V_NO of car: ";
	cin >> s.vNo;
	cout << "\t\t\t\t";
	for (int i = 0; i < 10; i++)
	{
		cout << ".";
		Sleep(1000);
	}
	cout << "\n\t\t\t\tcar is added\n";
	cout << "\t\t\t\t ----------------------------------\n";
	cout << "\t\t\t\t|Ticket:\n";
	cout << "\t\t\t\t|\n";
	cout << "\t\t\t\t|car type: " << s.type << "\n";
	cout << "\t\t\t\t|car model: " << s.model << "\n";
	cout << "\t\t\t\t|car v_no: " << s.vNo << "\n";
	cout << "\t\t\t\t|\n";
	cout << "\t\t\t\t|price: 20 $\n";
	cout << "\t\t\t\t ----------------------------------\n";
}
//bus
void bus()
{
	system("cls");
	cout << "\t\t\t\tenter type of bus: ";
	cin >> s.type;
	cout << "\t\t\t\tenter model of bus: ";
	cin >> s.model;
	cout << "\t\t\t\tenter V_NO of bus: ";
	cin >> s.vNo;
	cout << "\t\t\t\t";
	for (int i = 0; i < 10; i++)
	{
		cout << ".";
		Sleep(1000);
	}
	cout << "\n\t\t\t\tbus is added\n";
	cout << "\t\t\t\t ----------------------------------\n";
	cout << "\t\t\t\t|Ticket:\n";
	cout << "\t\t\t\t|\n";
	cout << "\t\t\t\t|bus type: " << s.type << "\n";
	cout << "\t\t\t\t|bus model: " << s.model << "\n";
	cout << "\t\t\t\t|bus v_no: " << s.vNo << "\n";
	cout << "\t\t\t\t|\n";
	cout << "\t\t\t\t|price: 40 $\n";
	cout << "\t\t\t\t ----------------------------------\n";
}
//motorcycle
void motorcycle()
{
	system("cls");
	cout << "\t\t\t\tenter type of motorcycle: ";
	cin >> s.type;
	cout << "\t\t\t\tenter model of motorcycle: ";
	cin >> s.model;
	cout << "\t\t\t\tenter V_NO of motorcycle: ";
	cin >> s.vNo;
	cout << "\t\t\t\t";
	for (int i = 0; i < 10; i++)
	{
		cout << ".";
		Sleep(1000);
	}
	cout << "\n\t\t\t\tmotorcycle is added\n";
	cout << "\t\t\t\t ----------------------------------\n";
	cout << "\t\t\t\t|Ticket:\n";
	cout << "\t\t\t\t|\n";
	cout << "\t\t\t\t|motorcycle type: " << s.type << "\n";
	cout << "\t\t\t\t|motorcycle model: " << s.model << "\n";
	cout << "\t\t\t\t|motorcycle v_no: " << s.vNo << "\n";
	cout << "\t\t\t\t|\n";
	cout << "\t\t\t\t|price: 10 $\n";
	cout << "\t\t\t\t ----------------------------------\n";
}