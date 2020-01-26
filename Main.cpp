// 1. Absolute paths start with ____"root" /____
	// 2. To keep your terminal active when launching another program from command line, add ______&_____ to the end of your launch command.
	// 3. Write a command to change the CWD to the current user's home directory. cd ~
	// 4. If you want to rename a file from hello.txt to goodbye.txt (without making a copy), you could use the _____mv________ command to do that.
	/* 5. Write a complete C++ program that does the following:
Opens a file called numbers.txt file contains integers, one on each line. 
Reads all of the numbers from the file
Cout the average of the numbers. Close the file.
Note: you do not need to define functions other than main() nor do error checking. There is at least one integer in the file.
	*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream inputFile;
	int total = 0, count = 0, num = 0;
	
	inputFile.open("numbers.txt");
	while (!inputFile.eof()) {
		inputFile >> num;
		if (inputFile.good()) { // need to check good() or you process num twice and your average result is wrong
			total += num;
			count++;
		}
	}
	inputFile.close();
	cout << "Average: " << static_cast<double>(total) / count << endl;
	
	return 0;
}
