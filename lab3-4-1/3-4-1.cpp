//3-4-1.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int rad = 10;
	const float pi = 3.14159f;
	float perimeter ,c_area;
	
	perimeter = 2 * pi * rad;
	c_area = rad * rad * pi;
	
	cout << "red =" << rad << "cm\n";
	cout << "perimeter = " << perimeter << "cm\n";
	cout << "c_area = " << c_area << "cm2" << endl;
	system("Pause");
}
