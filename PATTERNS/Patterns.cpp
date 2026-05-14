#include <iostream>
using namespace std;

// 1. Print i*4 pattern
void patternRowMultiply4() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << "*4 ";
        }
        cout << endl;
    }
}

// 2. Inverted star triangle
void invertedStarTriangle() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }
}

// 3. Number triangle: 1 to i
void numberTriangleIncreasingColumn() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// 4. Number triangle: same row number
void numberTriangleSameRow() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// 5. Continuous alphabet triangle
void continuousAlphabetTriangle() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}

// 6. Same alphabet in each row
void sameAlphabetRowTriangle() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
}

// 7. Hollow rectangle
void hollowRectangle() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "* ";

        for (int j = 1; j <= n - 1; j++) {
            if (i == 1 || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << "*" << endl;
    }
}

// 8. Right aligned star triangle
void rightAlignedStarTriangle() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

// 9. Floyd's triangle
void floydTriangle() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    int a = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a++ << " ";
        }
        cout << endl;
    }
}

// 10. Diamond pattern
void diamondPattern() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

// 11. Butterfly pattern
void butterflyPattern() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        for (int j = 1; j < 2 * (n - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int choice;

    cout << "Choose a pattern:" << endl;
    cout << "1. Row number multiplied by 4 pattern" << endl;
    cout << "2. Inverted star triangle" << endl;
    cout << "3. Number triangle 1 to i" << endl;
    cout << "4. Same row number triangle" << endl;
    cout << "5. Continuous alphabet triangle" << endl;
    cout << "6. Same alphabet row triangle" << endl;
    cout << "7. Hollow rectangle" << endl;
    cout << "8. Right aligned star triangle" << endl;
    cout << "9. Floyd's triangle" << endl;
    cout << "10. Diamond pattern" << endl;
    cout << "11. Butterfly pattern" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            patternRowMultiply4();
            break;

        case 2:
            invertedStarTriangle();
            break;

        case 3:
            numberTriangleIncreasingColumn();
            break;

        case 4:
            numberTriangleSameRow();
            break;

        case 5:
            continuousAlphabetTriangle();
            break;

        case 6:
            sameAlphabetRowTriangle();
            break;

        case 7:
            hollowRectangle();
            break;

        case 8:
            rightAlignedStarTriangle();
            break;

        case 9:
            floydTriangle();
            break;

        case 10:
            diamondPattern();
            break;

        case 11:
            butterflyPattern();
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}