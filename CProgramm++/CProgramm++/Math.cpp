#include "TMath.h"
#include "../../CLibPP/CLibPP/CLibPP.h"

using namespace std;

TMath::TMath() {
	Math();
}

void TMath::Math() {
	cout << "Type the type of Math here: \n";
	while (true) {
		CLibPP::print(">> ");
		string type = CLibPP::input();
		if (type == "simple") {
			simple();
		} else if (type == "%" || type == "percent") {
			percent();
		} else if (type == "decimal") {
			decimal();
		} else if (type == "convert") {
			converter();
		}
	}
}

void TMath::simple() {
	CLibPP::println("Type the type of simple Maths here: ");
	CLibPP::print(">>> ");
	char type = CLibPP::inputChar();
	if (type == '+') {
		CLibPP::print("Number 1> ");
		int n1 = CLibPP::inputInt();
		CLibPP::print("Number 2> ");
		int n2 = CLibPP::inputInt();
		CLibPP::println(to_string(n1) + " + " + to_string(n2) + " = " + to_string(n1 + n2));
	} else if (type == '-') {
		CLibPP::print("Number 1> ");
		int n1 = CLibPP::inputInt();
		CLibPP::print("Number 2> ");
		int n2 = CLibPP::inputInt();
		CLibPP::println(to_string(n1) + " - " + to_string(n2) + " = " + to_string(n1 - n2));
	} else if (type == '*') {
		CLibPP::print("Number 1> "); 
		int n1 = CLibPP::inputInt(); 
		CLibPP::print("Number 2> "); 
		int n2 = CLibPP::inputInt(); 
		CLibPP::println(to_string(n1) + " * " + to_string(n2) + " = " + to_string(n1 * n2));
	} else if (type == '/') {
		CLibPP::print("Number 1> "); 
		int n1 = CLibPP::inputInt(); 
		CLibPP::print("Number 2> "); 
		int n2 = CLibPP::inputInt(); 
		CLibPP::println(to_string(n1) + " / " + to_string(n2) + " = " + to_string(n1 / n2) + ", " + to_string(n1 % n2));
	} else {
		CLibPP::println("This isn't a type of math!");
	}
}

void TMath::percent() {
	char type = CLibPP::inputChar();
	if (type == 'i') {
		CLibPP::println("Final Value> ");
		int v = CLibPP::inputInt();
		CLibPP::println("Initial Value> ");
		int iv = CLibPP::inputInt();
		int difference = v - iv;
		int divide = difference / iv;
		CLibPP::mathPrint(divide, 100, '*');
		CLibPP::println("%");
	}
}

void TMath::decimal() {
	CLibPP::println("Type the type of maths here! (the floats can be different because Computer++ is stupid)");
	CLibPP::print(",>>> ");
	char type = CLibPP::inputChar();
	if (type == '+') {
		CLibPP::print("Number 1,>");
		float number1 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		CLibPP::print("Number 2,>");
		float number2 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		cout << "Calculating.";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".\n";
		CLibPP::println("  " + to_string(number1));
		CLibPP::println("+ " + to_string(number2));
		CLibPP::println("___________________________________________________________________________________________________________________________");
		CLibPP::println("  " + to_string(number1) + " + " + to_string(number2) + " = " + to_string(number1 + number2));
	} else if (type == '-') {
		CLibPP::print("Number 1,>");
		float number1 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		CLibPP::print("Number 2,>");
		float number2 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		cout << "Calculating.";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".\n";
		CLibPP::println("  " + to_string(number1));
		CLibPP::println("- " + to_string(number2));
		CLibPP::println("___________________________________________________________________________________________________________________________");
		CLibPP::println("  " + to_string(number1) + " - " + to_string(number2) + " = " + to_string(number1 - number2));
	} else if (type == '*') {
		CLibPP::print("Number 1,>");
		float number1 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		CLibPP::print("Number 2,>");
		float number2 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		cout << "Calculating.";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".\n";
		CLibPP::println("  " + to_string(number1));
		CLibPP::println("+ " + to_string(number2));
		CLibPP::println("___________________________________________________________________________________________________________________________");
		CLibPP::println("  " + to_string(number1) + " * " + to_string(number2) + " = " + to_string(number1 * number2));
	} else if (type == '/') {
		CLibPP::print("Number 1,>");
		float number1 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		CLibPP::print("Number 2,>");
		float number2 = CLibPP::inputFloat();
		cout << number1;
		cout << "\n";
		cout << "Calculating.";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".\n";
		CLibPP::println("  " + to_string(number1));
		CLibPP::println("+ " + to_string(number2));
		CLibPP::println("___________________________________________________________________________________________________________________________");
		CLibPP::println("  " + to_string(number1) + " / " + to_string(number2) + " = " + to_string(number1 / number2));
	} else {
		CLibPP::println("Tyoe not found!");
	}
}

void TMath::converter() {
	cout << "Convert> ";
	string convert = CLibPP::input();
	cout << "To> ";
	string to = CLibPP::input();
	if (convert == "km") {
		cout << "Number> ";
		int n = CLibPP::inputInt();
		if (to == "m") {
			cout << to_string(n) + convert + " = " + to_string(n * 1000) + to;
		} else if (to == "dm") {
			cout << to_string(n) + convert + " = " + to_string(n * 10000) + to;
		} else if (to == "cm") {
			cout << to_string(n) + convert + " = " + to_string(n * 100000) + to;
		} else if (to == "mm") {
			cout << to_string(n) + convert + " = " + to_string(n * 1000000) + to;
		}
	} else if (convert == "m") {
		cout << "Number> ";
		int n = CLibPP::inputInt();
		if (to == "km") {
			cout << to_string(n) + convert + " = " + to_string(n / 1000) + to;
		} else if (to == "dm") {
			cout << to_string(n) + convert + " = " + to_string(n * 10) + to;
		} else if (to == "cm") {
			cout << to_string(n) + convert + " = " + to_string(n * 100) + to;
		} else if (to == "mm") {
			cout << to_string(n) + convert + " = " + to_string(n * 1000) + to;
		}
	} else if (convert == "cm") {
		cout << "Number> ";
		int n = CLibPP::inputInt();
		if (to == "km") {
			cout << to_string(n) + convert + " = " + to_string(n / 1000) + to;
		} else if (to == "dm") {
			cout << to_string(n) + convert + " = " + to_string(n * 10) + to;
		} else if (to == "cm") {
			cout << to_string(n) + convert + " = " + to_string(n * 10) + to;
		} else if (to == "mm") {
			cout << to_string(n) + convert + " = " + to_string(n * 100) + to;
		}
	}
}