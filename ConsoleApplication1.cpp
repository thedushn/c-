

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <string>

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
	double Pow(double, int);
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
	//factorial(20);.
	cout <<setprecision(20)<<Pow(4, -2)<<endl;

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

	long double g=1;
	if (i <= 1) {
		cout << setprecision(20) << setw(20) << g << endl;
		return g;
	}
	else {
	
		g *= factorial(i-1)*i;
			
		cout << setprecision(20) << setw(20) << g << endl;
		return g;
		
		
	
	}



}
//long double factorial(unsigned int i) {
//	long double g=0;
//	cout << "n ";
//	cout << "factorial"<<endl;
//	
//	for (int y = 1; y <= i; y++) {
//		if (g == 0) {
//			g = y;
//			cout << y ;
//			cout << setprecision(20) << setw(20) << g << endl;
//		}
//		else {
//			g *= y;
//			cout  << y ;
//			cout <<setw(20)<< g << endl;
//		
//		}
//	
//	}
//	return g;
//}
double Pow(double base, int exp) {

	if (exp == 0) {
		return 1.0;
	}
	

	if (base == 0) {
	
		return 0.0;
	}
	double g=0;
	if (exp < 0) {
	
		base = 1.0 / base;
		exp = -exp;
	}
	for (int i = 2; i <= exp; i++) {
	
		if (g == 0) {
			g = base;
		}
		g *= base;
	}
	return g;
}