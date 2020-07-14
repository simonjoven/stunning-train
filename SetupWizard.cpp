#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main() {
	string welcomeWizard;

	cout << "This is the installer wizard for Aqua Cloud Computing Service.\n";
	cout << "Do you want to continue?";

	cin >> welcomeWizard;

	if (welcomeWizard == "y") {
		// Code when user inputs something, insert code here
		cout << "Okay, we'll start installing.\n";
	}
	else if (welcomeWizard == "n") {
		// Code when user inputs something, insert code here
		cout << "Okay, we'll wait for you.\n";
	}
	else {
		// Code when nothing matches, insert code here
		cout << "You have entered an invalid character.\n"
	}

	// End of code, so far
}
