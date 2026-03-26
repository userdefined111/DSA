#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks[10][5];
    // Student 1
    marks[0][0] = 85; marks[0][1] = 90; marks[0][2] = 78; marks[0][3] = 92; marks[0][4] = 88;
    // Student 2
    marks[1][0] = 76; marks[1][1] = 82; marks[1][2] = 95; marks[1][3] = 80; marks[1][4] = 87;
    // Student 3
    marks[2][0] = 90; marks[2][1] = 88; marks[2][2] = 85; marks[2][3] = 91; marks[2][4] = 89;
    // Student 4
    marks[3][0] = 65; marks[3][1] = 72; marks[3][2] = 68; marks[3][3] = 75; marks[3][4] = 70;
    // Student 5
    marks[4][0] = 95; marks[4][1] = 92; marks[4][2] = 98; marks[4][3] = 94; marks[4][4] = 96;
    // Student 6
    marks[5][0] = 80; marks[5][1] = 85; marks[5][2] = 82; marks[5][3] = 88; marks[5][4] = 84;
    // Student 7
    marks[6][0] = 72; marks[6][1] = 78; marks[6][2] = 75; marks[6][3] = 80; marks[6][4] = 77;
    // Student 8
    marks[7][0] = 88; marks[7][1] = 86; marks[7][2] = 90; marks[7][3] = 85; marks[7][4] = 87;
    // Student 9
    marks[8][0] = 91; marks[8][1] = 89; marks[8][2] = 93; marks[8][3] = 87; marks[8][4] = 92;
    // Student 10
    marks[9][0] = 77; marks[9][1] = 83; marks[9][2] = 79; marks[9][3] = 85; marks[9][4] = 81;
    
    cout << "Student\tCourse1\tCourse2\tCourse3\tCourse4\tCourse5" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << "Student" << (i + 1) << "\t";
        for (int j = 0; j < 5; j++) {
            cout << marks[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
