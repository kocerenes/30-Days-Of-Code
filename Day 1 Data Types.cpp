#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int intNumber;
    double doubleNumber;
    string words;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> intNumber;
    cin >> doubleNumber;
    cin.get();
    getline(cin,words);
    // Print the sum of both integer variables on a new line.
    int sumIntNumbers = i + intNumber;
    cout<< sumIntNumbers << endl;
    // Print the sum of the double variables on a new line.
    double sumDoubleNumbers = d + doubleNumber;
    cout<<fixed<<setprecision(1)<<sumDoubleNumbers<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string concatenateStrings = s + words;
    cout<< concatenateStrings<<endl;
    return 0;