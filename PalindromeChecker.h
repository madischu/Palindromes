#ifndef PALINDROMECHECKER_H
#define PALINDROMECHECKER_H

#include <string>
#include <queue>
#include <stack>

class PalindromeChecker
{
private:
    std::string originalText;
    std::string normalizedText;
    std::queue<char> charQueue;
    std::stack<char> charStack;

    void normalizeAndStore();
    void clearData();

public:
    void setText(const std::string& text);
    bool isPalindrome();
    std::string getNormalizedText() const;
};

#endif
