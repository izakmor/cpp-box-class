#define _CRT_SECURE_NO_WARNINGS
#include"box.h"
#include<iostream>
#include<cstring>

using namespace std;
int main() {

	char samplename[21] = "sample";//הגדרה של קופסה שמה טמפל ואלו ערכיה
	box sample(123456, samplename, 30, 40, 50, 10);
	int code;
	double length, width, height, weight;
	char contents[21];

	box box1;//בנאי ברירת מחדל ערכים הוכנסו בנקודה סי פי פי
		
	cout << "Enter code" << endl;
	cin >> code;

	box  box2(code);//בנרי שמקבל רק קוד

	cout << "Enter code :" << endl;//הכנסה נתונים לבנאי 3
	cin >> code;
	cout << "Enter contents :" << endl;
	cin >> contents;
	cout << "Enter length ,width ,height :" << endl;
	cin >> length >> width >> height;
	cout << "Enter weight:" << endl;
	cin >> weight;


	box box3(code, contents, length, width, height, weight);//מכניס ערכים לבנאי שמקבל נתונים לכולם 

	box box4(sample);//בנאי העתקה שמכניסים לו את טמפל שהגדרנו למעלה

	cout << "Printing the boxes" << endl;//מדפיס תקופסאות על כל הבנאים

	box1.print();
	box2.print();
	box3.print();
	box4.print();


	cout << "Enter code:" << endl;//הכנסת נתונים לא דרך בנאי אלא דרך פונקצית סאט
	cin >> code;
	cout << "Enter contents :" << endl;
	cin >> contents;
	cout << "Enter length ,width ,height :" << endl;
	cin >> length >> width >> height;
	cout << "Enter weight:" << endl;
	cin >> weight;

	box1.setcode(code);//קליטה שלהם
	box1.setcontents(contents);
	box1.setlength(length);
	box1.setwidth(width);
	box1.setheight(height);
	box1.setweight(weight);


	if (sample.samecost(box1)) {//השוואה דרך בנאי העתקה
		cout << "SAME" << endl;


	}
	else cout << "DIFFERENT" << endl;

	sample.changeweight(box2);//החלפת משקל דרך בנאי העתקה
	cout << endl;
	cout << "Printing the boxes" << endl;//הדפסה
	box1.print();
	box2.print();
	box3.print();
	box4.print();
}
//in many parameters constructor
//in empty constructor
//Enter code :
//in one parameter constructor
//Enter code :
//Enter contents :
//Enter length, width, height :
//	Enter weight :
//in many parameters constructor
//in copy constructor
//
//Printing the boxes
//in print
//Code : 111111
//Contents :
//	Length : 0
//	Width : 0
//	Height : 0
//	Weight : 0
//	Cost : 0
//	in print
//	Code : 234567
//	Contents :
//	Length : 0
//	Width : 0
//	Height : 0
//	Weight : 0
//	Cost : 0
//	in print
//	Code : 345678
//	Contents : Books
//	Length : 10
//	Width : 10
//	Height : 10
//	Weight : 23
//	Cost : 115
//	in print
//	Code : 123456
//	Contents : sample
//	Length : 30
//	Width : 40
//	Height : 50
//	Weight : 10
//	Cost : 130
//
//	Enter code :
//Enter contents :
//Enter length, width, height :
//	Enter weight :
//in copy constructor
//in sameCost
//SAME
//in changeWeight
//
//Printing the boxes
//in print
//Code : 123456
//Contents : sample
//Length : 30
//Width : 40
//Height : 50
//Weight : 10
//Cost : 130
//in print
//Code : 234567
//Contents :
//	Length : 0
//	Width : 0
//	Height : 0
//	Weight : 10
//	Cost : 80
//	in print
//	Code : 345678
//	Contents : Books
//	Length : 10
//	Width : 10
//	Height : 10
//	Weight : 23
//	Cost : 115
//	in print
//	Code : 123456
//	Contents : sample
//	Length : 30
//	Width : 40
//	Height : 50
//	Weight : 10
//	Cost : 130
