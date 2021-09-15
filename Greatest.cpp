//
// Created by Matt Rindlisbacher on 9/11/2021.
// CS 201
// Make a program that takes positive numbers inputted by the user and returns the highest given number
//

//input numbers until something less than 1 has been inputted, and return with the highest number
// just run through an if statement after each inputted number, need a safe for if the first number is below 1
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int greatest = 0;
    int count = 0; //checks to make sure at least 1 legal number was input
    int n = 1;
    cout << "begin entering numbers, enter 0 to stop \n I'll return your highest input";
    while (n > 0){
        cin >> n;
        if (n > greatest){ //checks if current input is greater than previous record
            greatest = n;
        }
        count ++;
        cout << "Next Number:";
    }
    if (count > 0) { //making sure there was a legal input
        return greatest;
    } else {
        cout << "please input at least one number greater than 0";
        return 0;
    }
}


