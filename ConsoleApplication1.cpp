

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <string>
#define PORT 8080
using namespace std;

void call_from_thread(int i ,int y) {
	cout << "Hello, World\n" << i << endl;
	cout <<y << endl;

}
void thread_handler() {

}

int main() {
	
	string s1;
	getline(cin, s1);
	cout << s1<<endl;
	int i= s1.length();

	cout << i <<endl;
	int g = i;
	for (int y = 0; y < i/2; y++) {
		g -= 1;
		if (s1[y] == s1[g]) {
			cout << "for now good" << endl;
		}
		else {
			cout << "not pallindrom" << endl;
			return 0;
		}
	
	}

	
	
	return 0;
}