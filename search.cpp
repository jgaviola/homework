#include <iostream>
#include "search.h"
using namespace std;
search::search() {

	int i;
	for(i=0;i<20;i++) {
		array[i-1] = i;
	}
}
void search::linear(int num) {
	int l;
	for(l=0;l=num;l++) {
		if(l==num) {
			cout << "It took: " << l << " calculations to find your number." << endl;
			break;
		}
	}
}
void search::binary(int num) {
	int b=20;
	int a;
	while(b!=num) {
		if(b<num) {
			b = b/2;
			a++;
		} else if(b>num) {
			b = b/2;
			a++;
		}
	}
	cout << "It took: " << a << " calculations to find your number" << endl;
}
int main(){
	search n1;

	int num;
	cout << "Enter a number 1-20" << endl;
	cin >> num;

	n1.binary(num);

return 0;
}
