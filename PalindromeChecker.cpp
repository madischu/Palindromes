#include "PalindromeChecker.h"
#include <cctype>

using namespace std;

// Clears previous queue, stack, and normalized text data
void PalindromeChecker::clearData()
{
    normalizedText.clear();

    while (!charQueue.empty())
    {
        charQueue.pop();
    }

    while (!charStack.empty())
    {
        charStack.pop();
    }
}

// Stores the input text and fills the queue and stack
// with lowercase alphanumeric characters only
void PalindromeChecker::normalizeAndStore()
{
    clearData();

    for (char ch : originalText)
    {
        if (isalnum(static_cast<unsigned char>(ch)))
        {
            char lowerChar = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
            normalizedText += lowerChar;
            charQueue.push(lowerChar);
            charStack.push(lowerChar);
        }
    }
}

// Sets the text to be checked
void PalindromeChecker::setText(const string& text)
{
    originalText = text;
    normalizeAndStore();
}

// Returns the normalized version of the text
string PalindromeChecker::getNormalizedText() const
{
    return normalizedText;
}

// Compares queue and stack contents to determine palindrome status
bool PalindromeChecker::isPalindrome()
{
    queue<char> tempQueue = charQueue;
    stack<char> tempStack = charStack;

    while (!tempQueue.empty() && !tempStack.empty())
    {
        char queueFront = tempQueue.front();
        char stackTop = tempStack.top();

        if (queueFront != stackTop)
        {
            return false;
        }

        tempQueue.pop();
        tempStack.pop();
    }

    return true;
}
