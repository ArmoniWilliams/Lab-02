// Lab 02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float A;
    float B;
    float X;

    cout << "Hello, my name is Armoni and I'm going to solce the equation:" << endl; 
   
    cout << "Ax + B = 0" << endl;

    cout << "For x \n" <<endl;
    
    
    cout << "Please enter a value for A: " ; 
    cin >> A; //Value for A 

    cout << "Please enter a value for B: " ; 
    cin >> B ; // Value for B

    cout << "\nSolving " << A << "x" <<"+" << B << "=0 for x... \n" << endl; //Showing the equation the user inputed

    X = (B - B * 2) / A; // Equation for X/ sloving for X

    cout << "The answer is:" << endl; 
    cout << "x=" << X;
}
