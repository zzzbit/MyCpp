//============================================================================
// Name        : MyCpp.cpp
// Author      : zhangzhizhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Dog.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Dog dog;
	cout << dog.getAge() << endl;
	return 0;
}
