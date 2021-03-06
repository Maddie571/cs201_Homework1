//
// Created by Matt Rindlisbacher on 9/11/2021.
//CS 201
//make a program that calculates the dot and cross products of 2 given 3 dimensional vectors
//

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main(){
    float x1;
    float y1;
    float z1;
    float x2;
    float y2;
    float z2;
    cout << "input the x for your first vector" << endl; //collects all necessary points and puts them at the right precision
    cin >> setprecision(6) >> x1;
    cout << "input the y for your first vector" << endl;
    cin >> setprecision(6) >> y1;
    cout << "input the z for your first vector" << endl;
    cin >> setprecision(6) >> z1;
    cout << "input the x for your second vector" << endl;
    cin >> setprecision(6) >> x2;
    cout << "input the y for your second vector" << endl;
    cin >> setprecision(6) >> y2;
    cout << "input the z for your second vector" << endl;
    cin >> setprecision(6) >> z2;
    cout << "(" << x1 << ", " << y1 << ", " << z1 << ")";
    cout << " dot (" << x2 << ", " << y2 << ", " << z2 << ")";
    cout << "is "  << x1*x2 + y1*y2 + z1*z2 << endl;
    //start Cross Product
    float x3 = y1 * z2 - y2 * z1;
    float y3 = x1 * z2 - x2 * z1;
    float z3 = x1 * y2 - x2 * y1;
    cout << "(" << x1 << ", " << y1 << ", " << z1 << ")";
    cout << " cross (" << x2 << ", " << y2 << ", " << z2 << ")";
    cout << "is (" << x3 << ", " << y3 << ", " << z3 << ")";
    return 2;
}


