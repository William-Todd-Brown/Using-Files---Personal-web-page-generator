// Using Files - Personal Web Page Generator

#include <iostream>
#include <string>
#include <fstream>   // Needed to use files

using namespace std;

int main() {

	ofstream outputFile;
	string userName, description, titleName, fileName;

	cout << "Enter your name: ";
	getline(cin,userName);
	cout << "Describe yourself: ";
	getline(cin, description);
	cout << "Enter a title for your web page: ";
	getline(cin, titleName);

	fileName = titleName + ".html"; // to create the .html file

  // Open the output file
	outputFile.open(fileName);

  // set the HTML into the file
	outputFile << "<html>";
	outputFile << "<head>";
	outputFile << "<title>" << titleName << "</title>";
	outputFile << "</head>";
	outputFile << "<body>";
	outputFile << "<center>";
	outputFile << "<h1>" << userName << "</h1>";
	outputFile << "</center>";
	outputFile << "<hr>";
	outputFile << "<p>" << description << "</p>";
	outputFile << "<hr>";
	outputFile << "</body>";
	outputFile << "</html>";

  // Close the file
  outputFile.close();

	return 0;
}
