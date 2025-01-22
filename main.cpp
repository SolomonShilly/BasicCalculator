#include <iostream>
using namespace std;

// Void function that add two integers and outputs the results to the command prompt
void add(int x, int y){
    int s = x + y;
    cout << "The sum of " << x << " + " << y << " = " << s;
}

// Void function that subtracts two integers and outputs the results to the command prompt
// Use if/else statements to avoid larger numbers being subtracted from smaller ones
void subtract(int x, int y){
    if (x > y){
        int d = x - y;
        cout << "\n\nThe difference of " << x << " - " << y << " = " << d;
    }
    else{
        int d = y - x;
        cout << "\n\nThe difference of " << y << " - " << x << " = " << d;
    }
}

// Void function to multiply two products and display the result on the command prompt
// If/else loop will be used to handle undefined values or 0
void multiply(int x, int y){
    if (x == 0 or y == 0){
        cout << "\n\nThe product of " << x << " * " << y << " = " << "0";
    }
    else{
        int p = x * y;
        cout << "\n\nThe product of " << x << " * " << y << " = " << p;   
    }
}


// Void function to divide two products and display the result on the command prompt
// If/else loop will be used to handle undefined values and ensure operations are carried out correctly
void divide(int x, int y){
    if (x == 0){
        cout << "\n\nThe quotient of " << y << " / " << x << " = " << "0";
    }
    else if (y == 0){
        cout << "\n\nThe quotient of " << x << " / " << y << " = " << "0";
    }
    else if (x > y){
        int q = x / y;
        cout << "\n\nThe quotient of " << x << " / " << y << " = " << q;
    }
    else{
        int q = y / x;
        cout << "\n\nThe quotient of " << y << " / " << x << " = " << q;
    }
}

// Main function to run the program
// Asks user to input values for x and y
int main(){
    int x, y;
    cout << "Enter a 'x' value: ";
    cin >> x;
    cout << "Enter a 'y' value: ";
    cin >> y;
    
    add(x, y);
    
    subtract(x, y);
    
    multiply(x, y);
    
    divide(x, y);
    
}