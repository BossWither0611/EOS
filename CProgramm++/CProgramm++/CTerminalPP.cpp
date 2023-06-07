#include "CTerminalPP.h"

#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
///#include <filesystem>
#include <conio.h>
//#include <boost/filesystem.hpp>

#include "../../CLibPP/CLibPP/CLibPP.h"
#include "Terminal.h"
#include "TMath.h"

#define KEY_UP 72
#define KEY_DOWN 80

using namespace std;

string cursor = "CProgrammPP/sys/Terminal/CTerminalPP/CLibPP::input()> ";

CTerminalPP::CTerminalPP() {
	while (true) {
		cout << cursor;
		string cmd = CLibPP::input();
		if (cmd == "Test test;") {
			cout << "TEST \n";
		} else if (cmd == "CTerminalPP.back()<-Terminal;") {
			Terminal t;
			break;
		} else if (cmd == "<|>" || cmd == ".random run void(<|>);") {
			randomizer();
		} else if (cmd == "1|2|3|<|>|4|5|6" || cmd == ".random run void(int);") {
			randomInt();
		} else if (cmd == ".help" || cmd == "/help" || cmd == "?" || cmd == ".?" || cmd == "/?" || cmd == "help") {
			help();
		} else if (cmd == "8-" || cmd == "Penis") {
			cout << ":) \n";
			Sleep(1000);
			cout << ">:( \n";
			cout << "WTF is your problem with penisses?????!!!!! \n";
			Sleep(1000);
			cout << "The command prompt ended due to bad words and/or questionable content. \n";
			Sleep(1000);
			break;
		} else if (cmd == "You are so cool!" || cmd == "You're so cool!") {
			cout << ":| \n";
			Sleep(1000);
			cout << ":) \n";
			Sleep(2000);
			cout << "=) \n";
			Sleep(4000);
			cout << "The command prompt ended due to personal content with a programm! \n";
			Sleep(1000);
			break;
		} else if (cmd == "...") {
			cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << ". \n";
		} else if (cmd == "Math run;") {
			TMath m; 
			break;
		} else if (cmd == "CSettings::run();") {
			settings();
		} else if (cmd == "color") {
			Terminal::color();
		} else if (cmd == "--") {
			while (true) {
				cout << "--> ";
				string input = CLibPP::input();
				if (input == "++") {
					break;
				}
			}
		}
	}
}

void CTerminalPP::randomizer() {
	cout << "Left (l)>";
	string l = CLibPP::input();
	cout << "Right (r)> ";
	string r = CLibPP::input();
	bool random = CLibPP::randomBool();
	if (random) {
		cout << "Right ((r) " + r + ") was chosen!";
	} else {
		cout << "Left ((l) " + l + ") was chosen!";
	}
}

void CTerminalPP::randomInt() {
	cout << "How many numbers should be generated? ";
	int n = CLibPP::inputInteger();
	int r = CLibPP::randomInt(n);
	cout << to_string(r) << " was generated!";
}

void CTerminalPP::help() {
	cout << "Command                       Function                    Subcommands                    Subfunctions                    Other Names for the Commands \n";
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------- \n";
	cout << "Test test;                    runs a test                 NULL                           NULL                            NULL \n";
	cout << "random run void();            runs a randomizer           (<|>); | (int);                Coin flip | random Number       [Sub] <|> | [Sub] 1|2|3|<|>|4|5|6 \n";
	cout << "help                          help                        NULL                           NULL                            .help | /help | ? | .? | /? \n";
	cout << "CTerminalPP.back()<-Terminal; goes back to the terminal   NULL                           NULL                            NULL \n";
	cout << "Math.run;                     run Math                    NULL                           NULL                            NULL \n";
	cout << "\n";
	cout << "Colors:                                                   Color                                                          Color Code \n";
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------- \n";
	cout << "Font                                                      pink                                                           p \n";
	cout << "Font                                                      blue                                                           b \n";
	cout << "Font                                                      cyan                                                           c \n";
	cout << "Font                                                      red                                                            r \n";
	cout << "Font                                                      green                                                          g \n";
	cout << "Font                                                      purple                                                         P \n";
	cout << "Font                                                      dark yellow                                                    y \n";
	cout << "Font                                                      Default White                                                  w \n";
	cout << "Font                                                      grey                                                           8 \n";
	cout << "Font                                                      bright blue                                                    B \n";
	cout << "Font                                                      bright green                                                   G \n";
	cout << "Font                                                      bright red                                                     R \n";
	cout << "Font                                                      bright cyan                                                    C \n";
	cout << "Font                                                      yellow                                                         Y \n";
	cout << "Font                                                      bright white                                                   W \n";
	cout << "\n";
	cout << "Terminal Commands: \n";
	cout << "§echo         shows text \n";
	cout << "false         sets something false when written with the command. \n";
	cout << "true          sets something true when written with the command \n";
	cout << "disable       disables a command that is written after writing disable, you then need to write true or false. \n";
	cout << "              If the boolean is set to true you can run the command else you can't. \n";
	cout << "Title         Changes the title of the Terminal instance. \n";
	cout << "color         This command changes the color of the text. \n";
	cout << "--            Makes every command useless. You can toggle it by typing '++'. This is a new Command that we won't go into \n";
	cout << "              Detail of that command here. \n";
	cout << "++            Enables commands again when disabled. \n";
	cout << "details       Shows details of commands or something different. \n";
	cout << "change cursor Changes the cursor to an input after the command is written.";
}

/*void CTerminalPP::manipulate() {
	string command;
	cout << "Enter a command: ";
	cin >> command;

	if (command == "cd") {
		string path;
		cin >> path;
		fs::current_path(path);
	} else if (command == "mkdir") {
		string dirName;
		cin >> dirName;
		fs::create_directory(dirName);
	} else if (command == "rm") {
		string fileName;
		cin >> fileName;
		remove(fileName.c_str());
	} else {
		cout << "Invalid command.\n";
	}
}*/

void CTerminalPP::settings() {
	/*char key = getch();
	int value = key;
	while (value != 120) {
		switch (getch()) {
		case KEY_UP:
			cout << "U";
		break;
		case KEY_DOWN:
			cout << "D";
		break;
		}
	}
	key = getch();*/
}

void CTerminalPP::changeCursor() {
	CLibPP::print("> ");
	cursor = CLibPP::input();
}