

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
		
	string s1 = "As time by ...";
	string s2 = "goes";
	int pos = s1.find("by");
	s1.insert((pos),s2);
	pos = s1.find("by");
	s1.replace(pos, 0, " ");
	cout << s1 <<endl;
	pos=s1.find("by");
	pos += sizeof("by");
	s1.erase(pos, 3);
	cout << s1 << endl;

	
	
	return 0;
}