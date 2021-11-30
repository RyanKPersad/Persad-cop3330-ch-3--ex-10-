/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Persad
 */

#include <iostream>
using namespace std;
int answer;
int calculator(string choice, int x , int y);
int main(void) {
    string choice;
    int x;
    int y;
    
    cin >> choice >> x >> y;
    cout<< calculator(choice, x, y) << endl;
    
 
}
int calculator(string choice, int x , int y){
    if(choice == "+") {
        answer = x+y;
    }
    if (choice == "-") {
        answer = x-y;
    }
    if (choice == "*") {
        answer = x*y;
    }
    if (choice == "/") {
        answer = x/y;
    }
    
    return answer;
}
