//
// Created by photo on 9/10/2021.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int Height;
    int PoundSigns = 1;
    cout << "Pick a Number:";
    cin >> Height; //get the number of lines
    if(Height < 1){
        cout << "Please enter a number above 0 next time";-3
        return Height;
    }
    for (int Line = Height; Line > 0; Line--){ //top half of diamond
        for (int Spaces = Line; Spaces > 0; Spaces--){ //the number of spaces needed is the same as the iputed number minus whatever line its currently on
            cout << " ";
        }
        for (int i = 0; i < PoundSigns; i++) {
            cout << "#";
        }
        PoundSigns += 2; //needed pound signs increases by 2 instead of 1 per line
        cout << endl;
    }

    int SpaceStopper = 1;
    if (Height % 2 == 1){
        PoundSigns -= 4; //the center line is only repeated if the inputted number is even, and need to account for the 2 extra added
        SpaceStopper = 0; //to fix the issue where the bottom halfs spacing is either off for even or odd diamonds
    } else {
        PoundSigns -= 2;
    }

//start bottom half
    for(int j = 1; j <= Height; j++){ //basically copying the first bit, but going the opposite direction
        for (int Spaces = j; Spaces >= SpaceStopper; Spaces--){
            cout << " ";
        }
        for (int k = 0; k < PoundSigns; k++) {
            cout << "#";
        }
        PoundSigns -= 2;
        cout << endl;
    }

    return 2;
}

