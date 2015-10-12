//============================================================================
// Name        : MyCpp.cpp
// Author      : zhangzhizhi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <map>
#include <string.h>
using namespace std;
typedef struct Rect{
	int height;
	int width;
};
bool sortBy(Rect a, Rect b){
	return a.height < b.height;
}
void f1(int a=10,int b=11,int c=12){
	cout << "f1" << endl;
}
void f1(int a=10,int b=12){
	cout << "f2" << endl;
}
void f2(Rect & r){
	cout << r.height << endl;
	Rect rect;
	rect.height=11;
	rect.width=11;
	r = rect;
	cout << r.height << endl;
}
void f2(Rect * r){
	cout << (*r).height << endl;
	(*r).height = 12;
	r->width = 12;
	Rect rect;
	rect.height=22;
	rect.width=22;
	r = &rect;
	cout << r->height << endl;
}
char *GetString(char*p){
	p = (char*)malloc(1024);
	strcpy(p,"hello world");
	return p;
}
int main() {
	/**
	vector<int> array;
	array.push_back(3);
	array.push_back(9);
	array.push_back(7);
	for(int i = 0; i < array.size(); i++){
		cout << array[i] << " ";
	}
	sort(array.begin(),array.end());
	for(int i = 0; i < array.size(); i++){
		cout << array[i] << " ";
	}**/

	/**
	vector<Rect> array;
	Rect rect;
	rect.height=21;
	rect.width=45;
	array.push_back(rect);
	rect.height=12;
	rect.width=54;
	//array.push_back(rect);
	//cout << array.back().height << endl;
	sort(array.begin(),array.end(),sortBy);
	for(int i = 0; i < array.size(); i++){
		cout << array[i].height << " ";
	}**/

	/*
	map<char,int> mymap;
	mymap['a']=10;
	mymap['b']=60;
	mymap['c']=30;
	mymap['d']=90;
	mymap['e']=50;
	map<int,Rect> mapRect;
	Rect rect;
	rect.height=12;
	rect.width=23;
	mapRect[1] = rect;
	mapRect.insert(pair<int,Rect>(6,rect));
	mapRect.clear();
	for(int i = 0; i < mapRect.size(); i++){
		cout << mapRect[i].height << endl;
	}
	*/

	//f1(10,11,14);

	/*
	Rect rect;
	rect.height=10;
	rect.width=10;
	f2(rect);
	cout << rect.height << endl;
	f2(&rect);
	cout << rect.height << " " << rect.width << endl;
	*/

	/*
	int *p;
	p = new int[4];
	p[5] = 1;
	*(p+5) = 2;
	cout << *(p+5) << endl;
	int q[4] = {1,2,3,4};
	int a = 5;
	cout << &a << endl;
	int b = 6;
	cout << &b << endl;
	cout << q[-1] << endl;
	cout << &q[-1] << endl;
	*/

	/*
	int a = 2;
	int b = ++a + ++a;
	cout << b << endl;
	cout << sizeof(int) << endl;*/

	/*
	void *p = malloc(100);
	cout << sizeof(p) << endl;*/

	char *str= NULL;
	GetString(str);
	printf(str);

	return 0;
}
