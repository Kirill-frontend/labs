#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle() {
	a = 1;
	b = 1;
}

Triangle::Triangle(float a, float b) {
	this->a = a;
	this->b = b;
}

void Triangle::isSimilar(Triangle tr) {
	if ((a / tr.a == b / tr.b) || (a / tr.b == b / tr.a))
		cout << "Is similar";

	else cout << "Is'nt similar";
}

void Triangle::printTriangle() {
	cout << "a " << a << endl;
	cout << "b " << b << endl;
}
