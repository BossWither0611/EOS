#include <iostream>

#include "Terminal.h"
#include "FileReader.h"
#include "FileWriter.h"

using namespace std;

int main() {
	cout << "What do you want to open? \n";
	cout << "(1) The Terminal | (2) The File Editor | (3) The File Reader";
	int dec;
	cin >> dec;
	if (dec == 1) {
		Terminal term;
	}

	return 0;
}