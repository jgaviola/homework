//Josh
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
char func1(char c, int i);
int main() {

	int i = 0;
	int max = 70;
	int foo[5][14];
	ifstream infile;
	infile.open("exam.txt", ifstream::in);
	char c = infile.get();
	cout << c;
//	func1(c, i);

return 0;
}
char func1(char c, int i) {
	if (i!=10) {
		//string line;
		//getline(infile,line);
		//	if(line == '*') {
		//	}
		cout << "";
	}
				//xval(line, foo);
return func1(c,i+1);
}
/*int xval(string line, ) {
	
	line = foo[x][y]
int yval

*/
