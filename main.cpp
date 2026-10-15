#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

int main() {
	setlocale(LC_ALL, "Russian");
	string user;

	Sleep(2000);
	cout << "Oh, hello there!" << endl;

	Sleep(2000);
	cout << "Do you want to download a cool app? ";
	cout << GREEN << "Yes " << RESET << "or ";
	cout << RED << "No" << RESET << endl;
	cin >> user;

	if (user == "Yes" || user == "yes" || user == "YES") {
		Sleep(1000);
		cout << "Then please wait while downloading." << endl;
		Sleep(1000);
		cout << YELLOW << "Downloading" << RESET;
		for (int j = 0; j <= 3; j++) {
			Sleep(500);
			cout << YELLOW << "." << RESET;
		}
		cout << endl;
		for (int i = 0; i <= 100; i += 10) {
			Sleep(300);
			cout << YELLOW << i << "%" << RESET << endl;
		}
		cout << GREEN << "Successfully downloaded!" << RESET << endl;
		cout << YELLOW << "Installing" << RESET;
		for (int j = 0; j <= 3; j++) {
			Sleep(500);
			cout << YELLOW << "." << RESET;
		}
		cout << endl;
		for (int i = 0; i <= 100; i += 10) {
			Sleep(700);
			cout << YELLOW << i << "%" << RESET << endl;
		}
		cout << GREEN << "Successfully installed!" << RESET << endl;
		Sleep(2000);
		cout << "Congratulations, you just downloaded a virus)))" << endl;
		Sleep(2000);
		for (int f = 0; f < 10; f++) {
			Sleep(800);
			MessageBox(
				nullptr,
				L"Error!",
				L"Error!",
				MB_ICONWARNING | MB_SYSTEMMODAL | MB_OK
			);
		}
	}
	else {
		Sleep(1000);
		cout << RED << "Too bad :(" << RESET << endl;
	}
	Sleep(3000);
	return 0;
}
