#include <bits/stdc++.h>
using namespace std;

// 1. Print fixed character array
void printCharArray()
{
    char arr[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Characters are:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }
}

// 2. Input word using char array
void inputWordCharArray()
{
    char arr[100];

    cout << "Enter a word: ";
    cin >> arr;

    cout << "Your word is " << arr << "\n";
    cout << "The length of your word is " << strlen(arr) << "\n";
}

// 3. Input sentence using char array
void inputSentenceCharArray()
{
    char sentence[100];

    cin.ignore();

    cout << "Enter a sentence ending with *: ";
    cin.getline(sentence, 100, '*');

    cout << "Your sentence is " << sentence << "\n";
    cout << "The length of your sentence is " << strlen(sentence) << "\n";
}

// 4. Convert word to uppercase
void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = word[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            word[i] = ch - 'a' + 'A';
        }
    }
}

// 5. Reverse character array
void ReverseCharArray(char arr[], int n)
{
    int st = 0;
    int end = n - 1;

    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

// 6. Check palindrome
bool Palindrome(char arr[], int n)
{
    int st = 0;
    int end = n - 1;

    while (st < end)
    {
        if (arr[st] != arr[end])
        {
            cout << "Not a palindrome\n";
            return false;
        }

        st++;
        end--;
    }

    cout << "Palindrome\n";
    return true;
}

// 7. Input sentence using string
void inputSentenceString()
{
    string str;

    cin.ignore();

    cout << "Enter sentence ending with *: ";
    getline(cin, str, '*');

    cout << "Your sentence is " << str << "\n";
    cout << "The length of your sentence is " << str.length() << "\n";
}

int main()
{
    int choice;

    cout << "Choose operation:\n";
    cout << "1. Print fixed character array\n";
    cout << "2. Input word using char array\n";
    cout << "3. Input sentence using char array\n";
    cout << "4. Convert word to uppercase\n";
    cout << "5. Reverse character array\n";
    cout << "6. Check palindrome\n";
    cout << "7. Input sentence using string\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        printCharArray();
    }

    else if (choice == 2)
    {
        inputWordCharArray();
    }

    else if (choice == 3)
    {
        inputSentenceCharArray();
    }

    else if (choice == 4)
    {
        char word[100];

        cout << "Enter a word: ";
        cin >> word;

        int n = strlen(word);

        toUpper(word, n);

        cout << "Uppercase word is: " << word << "\n";
    }

    else if (choice == 5)
    {
        char word[100];

        cout << "Enter a word: ";
        cin >> word;

        int n = strlen(word);

        ReverseCharArray(word, n);

        cout << "Reversed word is: " << word << "\n";
    }

    else if (choice == 6)
    {
        char word[100];

        cout << "Enter a word: ";
        cin >> word;

        int n = strlen(word);

        Palindrome(word, n);
    }

    else if (choice == 7)
    {
        inputSentenceString();
    }

    else
    {
        cout << "Invalid choice\n";
    }

    return 0;
}