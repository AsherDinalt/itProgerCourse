#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "fileswork.h"

int main() {
    setlocale(LC_ALL, "rus");
	FilesWork file("some.txt");
	file.write_file("new text");
	file.read_file();
	file += "!!!";
	file.read_file();
    return 0;
}