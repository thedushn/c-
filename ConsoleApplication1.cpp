

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#define PORT 8080
using namespace std;

void call_from_thread(int i ,int y) {
	cout << "Hello, World\n" << i << endl;
	cout <<y << endl;

}

	void getput(void);
	long sum(long, long, long=0, long=0);
	inline	double Max(double, double);
	inline char Max(char x, char y);
	long double factorial(unsigned int);
int main() { 

	//cout<<sum(1, 2 )<<endl;
	//cout << sum(3, 1, 2)<<endl;
	//cout << sum(3, 3, 3, 4)<<endl;
	/*double i,y;
	cin >>i;
	cout<< endl;
	cin >> y;
	cout << endl;
	cout << Max(i, y)<<endl;
	cout << Max('1', '3') << endl;*/
	factorial(20);

		return 0;
}

long sum(long i, long y, long g, long h) {

	return (i + y + g + h);
}
inline double Max(double i, double y) {
	return (i > y ? i : y);

}
inline char Max(char i, char y) {
	return (i > y ? i : y);

}
long double factorial(unsigned int i) {
	long double g=0;
	cout << "n ";
	cout << "factorial"<<endl;
	
	for (int y = 1; y <= i; y++) {
		if (g == 0) {
			g = y;
			cout << y ;
			cout << setprecision(20) << setw(20) << g << endl;
		}
		else {
			g *= y;
			cout  << y ;
			cout <<setw(20)<< g << endl;
		
		}
	
	}
	return g;
}