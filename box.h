//izak mor326549268 
//Here it is a structure where the functions
// are located as well as a box structure and its data.
#ifndef BOX_H
#define BOX_H

#include <iostream>
#include <cstring> 

using namespace std;

class box {
private:
    long code;
    char contents[21];
    double length;
    double width;
    double height;
    double weight;

public:

    box();


    box(long c);

    box(long c, const char* cont, double l, double wi, double h, double we);

    box(const box& other);


    void setcode(long c);
    void setcontents(const char* con);
    void setlength(double l);
    void setwidth(double w);
    void setheight(double h);
    void setweight(double we);

    long getcode() const;
    const char* getcontents() const;
    double getlength() const;
    double getwidth() const;
    double getheight() const;
    double getweight() const;

    double computecost() const;
    bool samecost(box other);
    void changeweight(box& other);
    void print() const;
};

#endif

