#define _CRT_SECURE_NO_WARNINGS
#include"box.h"
#include<iostream>
#include<cstring>

using namespace std;
//banim בנאים      
box::box() {
	cout << "in empty constructor" << endl;//כולם 0 חוץ מהקוד
	code = 111111;
	strcpy(contents, "");
	length=0;
	 width =0;
	height=0;
	weight=0;
}
box::box(long c) {
	cout << "in one parameter constructor" << endl;//כולם 0 חוץ מהקוד שמחבל ערך מבחוץ
	code = c;
	strcpy(contents, "");
	length = 0;
	width = 0;
	height = 0;
	weight = 0;
}
box ::box(long c, const char* cont, double l, double wi, double h, double we){//כולם מקבלים ערך מבחוץ
	cout << "in many parameters constructor" << endl;
	strncpy(contents, cont, 20);
	code = c;
	length = l;
	width = wi;
	height = h;
	weight = we;

}
box::box(const box& other) {//בנאי העתקה
	cout << "in copy constructor" << endl;
	code = other.code;
	strcpy(contents, other.contents);
	length = other.length;
	width = other.width;
	height = other.height;
	weight = other.weight;
}
//פונקציות גאט
long box::getcode()const {
	return code;
}
const char* box::getcontents()const {
	 return contents;
}
double box::getlength()const {
	return length;
}
double box::getwidth()const {
	return width;
}
double box::getheight()const {
	return height;
}
double box::getweight()const {
	return weight;
}
//פונקציות הגדרה סאט


void box::setcode(long c) {
	if (c >= 10000 && c <= 999999) code = c;//בודק 6 ספרות לא יותר ופחות
}
void box::setcontents(const char* con) {
	strncpy(contents, con, 20);
}
void box::setlength(double l) {
	length = l;
}
void box::setwidth(double w) {
	width = w;
}
void box::setheight(double h) {
	height = h;
}
void box::setweight(double we) {
	weight = we;
}
//
// מתודות

double box::computecost()const{//מחשב מחיר

	double costkg;
	if (weight < 5)costkg = 10;
	else if (weight <= 20)costkg = 8;
	else costkg = 5;

	double sum = weight * costkg;
	double size = length * width * height;
	if (size > 1000)sum += 50;
	return sum; 

}
bool box::samecost(box other) {//בודק אם המחיר שווה 
	cout << "in sameCost" << endl;
	return this->computecost() == other.computecost();
}

void  box::changeweight(box& other) {//משנה משקל
	cout << "in changeWeight" << endl;
	 other.weight = this->weight;
}

void box::print()const {//מדפיס תוצאות
	cout << "in print" << endl;
	cout << "Code: " << code << endl;
	cout << "Contents: " << contents << endl;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
	cout << "Cost: " << computecost() << endl;
}
