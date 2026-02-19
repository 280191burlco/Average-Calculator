#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5; //Numbers to be stored
    double average; //Average of the x (5) numbers to be stored
    
    cout << "Please input the first number: ";
    cin >> num1;
    cout << "Please input the second number: ";
    cin >> num2;
    cout << "Please input the third number: ";
    cin >> num3;
    cout << "Please input the fourth number: ";
    cin >> num4;
    cout << "Please input the fifth number: ";
    cin >> num5;
    
    //Calculate the average
    average = (num1 + num2 + num3 + num4 + num5) / 5;
    
    //Display the average
    cout << "The average of your numbers is: " << average << endl;
    return 0;
}
