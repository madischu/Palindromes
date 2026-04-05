#include <iostream>
#include <string>
#include "PalindromeChecker.h"

using namespace std;

int main()
{
    PalindromeChecker checker;
    string input;

    cout << "Enter a line of text: ";
    getline(cin, input);

    checker.setText(input);

    cout << "Normalized text: " << checker.getNormalizedText() << endl;

    if (checker.isPalindrome())
    {
        cout << "Result: The text is a palindrome." << endl;
    }
    else
    {
        cout << "Result: The text is not a palindrome." << endl;
    }

    return 0;
}
