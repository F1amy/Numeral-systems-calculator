// Num sys calc.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "functions.h"

using namespace std;

int main() {
	int choice = 0;
	long long int number = 0;
	string hexNumber = "";
	long double a = 0;
	char b[33] = "";
	cout << "Converting numbers into other numeral systems.\nBy Yury Putimcev & Fedor Bryzgalov." << endl;
	do {
		a = 0;
		choice = 0;
		number = 0;
		//b[33] = ""; //clear b array
		hexNumber = "NULL";
		cout << "\nSelect an operation:" << endl;
		cout << "1) Binary to decimal (2 -> 10)." << endl;
		cout << "2) Binary to hexadecimal (2 -> 16)." << endl;
		cout << "3) Decimal to binary (10 -> 2)." << endl;
		cout << "4) Decimal to hexadecimal (10 -> 16)." << endl;
		cout << "5) Hexadecimal to decimal (16 -> 10)." << endl;
		cout << "6) Hexadecimal to binary (16 -> 2)." << endl;
		cout << "7) Minus decimal to binary (10 -> 2)." << endl;
		cout << "8) Minus Binary to decimal (2 -> 10)." << endl;
		cout << "9) Fractional part of decimal to binary (10 -> 2)." << endl;
		cout << "10) Exit.\n> ";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1:
			cout << "Enter the binary number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(2) = " << bin2dec(number) << "(10).";
			break;
		case 2:
			cout << "Enter the binary number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(2) = " << uppercase << hex << bin2dec(number) << "(16).";
			break;
		case 3:
			cout << "Enter the decimal number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(10) = " << dec2bin(number) << "(2).";
			break;
		case 4:
			cout << "Enter the decimal number.\n> ";
			cin >> number;
			cout << "Answer: " << number << "(10) = " << uppercase << hex << number << "(16).";
			break;
		case 5:
			cout << "Enter the hexadecimal number.\n> ";
			cin >> hexNumber;
			transform(hexNumber.begin(), hexNumber.end(), hexNumber.begin(), ::toupper);
			cout << "Answer: " << hexNumber << "(16) = " << hex2dec(hexNumber) << "(10).";
			break;
		case 6:
			cout << "Enter the hexadecimal number.\n> ";
			cin >> hexNumber;
			transform(hexNumber.begin(), hexNumber.end(), hexNumber.begin(), ::toupper);
			cout << "Answer: " << hexNumber << "(16) = " << dec2bin(hex2dec(hexNumber)) << "(2).";
			break;
		case 7:
			cout << "Enter the decimal number (example: -1010).\n> ";
			cin >> number;
			cout << "Answer: " << number << "(10) = " << dec2bin_minus(b, number) << "(2).";
			break;
		case 8:
			cout << "Enter the binary number (example: -1010).\n> ";
			cin >> b;
			cout << "Answer: " << b << "(2) = " << bin2dec_minus(b) << "(10).";
			break;
		case 9:
			cout << "Enter the fractional part of number (example: 0.xxx).\n> ";
			cin >> a;
			cout << "Answer: " << number << "(10) = ";
			dec2bin_fr_part(a);
			cout << "(2).";
			break;
		case 10:
			cout << "Press any key to exit.";
			break;
		default:
			cout << "Error. Press any key to try again.";
			break;
		}
		cin.ignore();
		cin.get();
	} while (choice != 10);
	return 0;
}