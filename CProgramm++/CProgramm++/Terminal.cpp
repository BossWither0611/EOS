#include "Terminal.h"

#include <iostream>
#include <string>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <Windows.h>

#include "CTerminalPP.h"
#include "TMath.h"
#include "FileWriter.h"
#include "../../CLibPP/CLibPP/CLibPP.h"

using namespace std;

Terminal::Terminal() {
	cout << "Type any command here: \n";
	while (true) {
		cout << "> ";
		string cmd;
		cin >> cmd;
		if (cmd == "./CTerminalPP.h=run;") {
			CTerminalPP run;
			break;
		} else if (cmd == "Math.run") {
			TMath runMath;
			break;
		} else if (cmd == "<|>" || cmd == "./Random.void.private();") {
			Randomizer();
		} else if (cmd == "?" || cmd == "/?" || cmd == ".?" || cmd == "help" || cmd == ".help" || cmd == "/help") {
			help();
		} else if (cmd == ".free.writing") {
			for (int i = 0; i < 20;  i++) {
				string wrote;
				cin >> wrote;
			}
		} else if (cmd == "Hello_World!" || cmd == "Hello_World" || cmd == "!!!Hello_World!!!") {
			cout << "Python      print('Hello World!')  |  print(\"Hello World!\") \n";
			cout << "Java        public class Main {public static void main(String[] args) {System.out.println(\"Hello World!\");}} \n";
			cout << "C/C++       #include <iostream> [Enter] int main() {cout << \"Hello World!\";} \n";
			cout << "JavaScript  Console.log('Hello World!');  |  Console.log(\"Hello World!\");";
			cout << "(MUL) HTML  Hello World!  |  <h1>Hello World<h2> | <h2>Hello World<h2> | [etc] \n";
		} else if (cmd == "/run;void/class[~.~.~") {
			cout << ">> ";
			string s;
			cin >> s;
			if (s == "Randomizer();") {
				Randomizer();
			} else if (s == "randomBoolean();") {
				randomBoolean();
			} else if (s == "help();") {
				help();
			} else if (s == "CTerminalPP.h;") {
				CTerminalPP c;
			//} else if (s == "FileWriter.h;") {
				//FileWriter fw;
			} else if (s == "TMath.h;") {
				TMath m;
			}	
		} else if (cmd == "color") {
			color();
		} else {
			cout << "Error 404: Command not found. / Command not existing. \n";
		}
	}
}

void Terminal::Randomizer() {
	cout << "Left<";
	string l;
	cin >> l;
	cout << "Right>";
	string r;
	cin >> r;
	bool randomB = randomBoolean();
	if (randomB) {
		cout << "Left was chosen (" + l + "). \n";
	} else {
		cout << "Right was chosen (" + r + "). \n";
	}
}

bool Terminal::randomBoolean() {
	srand(time(NULL));
	/*random boolean between 0 and 1*/
	int randomNumber = rand() % 9 + 1;
	bool boolean;
	if (randomNumber == 5 || randomNumber == 2 || randomNumber == 3 || randomNumber == 8 || randomNumber == 9 || randomNumber == 7) {
		boolean = true;
	} else {
		boolean = false;
	}
	//cout << randomNumber;
	return boolean;
}

void Terminal::help() {
	cout << "Command                    Function                    Subcommands                    Subfunctions                    Other Names for the Commands \n";
	cout << "----------------------------------------------------------------------------------------------------------------------------------------------------- \n";
	cout << "./CTerminalPP.h            Can run the CTerminalPP     =true; | =false;               runs it | doesn't run it        NULL \n";
	cout << "Math.run                   Runs Math                   NULL                           NULL                            NULL \n";
	cout << "./Random.void.private();   runs a Randomizer           NULL                           NULL                            <|> \n";
	cout << "help                       NULL                        NULL                           NULL                            .help | /help | ? | .? | /? \n";
	cout << ".free.writing              20 Lines of writing         NULL                           NULL                            NULL \n";
	cout << "Hello_World!               Shows many Hello World Prg* NULL                           NULL                            !!!Hello_World!!! | Hello_World \n";
	cout << "/run;void/class[~.~.~      Runs a void or class        Every Class / void             Runs every Class / void         NULL \n";
	cout << "color                      changes the color           NULL                           NULL                            NULL \n";
	cout << "\n";
	cout << "*Prg = Programm; \n";
}

void Terminal::color() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Color> ";
	char color = CLibPP::inputChar();
	if (color == 'p') {
		SetConsoleTextAttribute(h, 13);
	} else if (color == 'b') {
		SetConsoleTextAttribute(h, 1);
	} else if (color == 'c') {
		SetConsoleTextAttribute(h, 3);
	} else if (color == 'r') {
		SetConsoleTextAttribute(h, 4);
	} else if (color == 'g') {
		SetConsoleTextAttribute(h, 2);
	} else if (color == 'P') {
		SetConsoleTextAttribute(h, 5);
	} else if (color == 'y') {
		SetConsoleTextAttribute(h, 6);
	} else if (color == 'w') {
		SetConsoleTextAttribute(h, 7);
	} else if (color == '8') {
		SetConsoleTextAttribute(h, 8);
	} else if (color == 'B') {
		SetConsoleTextAttribute(h, 9);
	} else if (color == 'G') {
		SetConsoleTextAttribute(h, 10);
	} else if (color == 'R') {
		SetConsoleTextAttribute(h, 12);
	} else if (color == 'C') {
		SetConsoleTextAttribute(h, 11);
	} else if (color == 'Y') {
		SetConsoleTextAttribute(h, 14);
	} else if (color == 'W') {
		SetConsoleTextAttribute(h, 15);
	}
}