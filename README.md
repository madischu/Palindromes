# Palindromes

## Program Description
This program reads a line of text from the user, converts uppercase letters to lowercase, and places each valid character into both a queue and a stack. It then compares the characters removed from the queue and stack to determine whether the text is a palindrome. 

A palindrom reads the same foreard and backward after normalization. In this program, normalization means:
- uppercase letters are converted to lowercase
- spaces and punctuation are ignored
- letters and digits are checked

## Inputs
The user enters a full line of text

## Outputs
The program displays:
- the normalized version of the input
- whether the text is a palindrome

## Compile and Run Instructions
**Using g++**

*g++ main.cpp PalindromeChecker.cpp -o palindrome*

*./palindrome*

## Design Documentation
**Detailed Psuedocode**

Start program

Create an object of class PalindromeChecker

Prompt user to enter a line of text
Read the full line of text

Send the input text to the PalindromeChecker object

Inside the class:
    Clear any previous data from the queue, stack, and normalized string

    For each character in the input string:
        If the character is a letter or digit:
            Convert it to lowercase
            Add it to the normalized string
            Push it onto the stack
            Enqueue it into the queue

    Assume the text is a palindrome

    While the stack and queue are not empty:
        Remove one character from the front of the queue
        Remove one character from the top of the stack
        Compare the two characters
        If they are not equal:
            Mark the text as not a palindrome
            Stop checking

Return the result

Display the normalized text
Display whether the text is a palindrome

End program
