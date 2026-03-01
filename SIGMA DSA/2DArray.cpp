#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int students[3][3]={{1,2,3},
//                         {4,5,6},
//                         {7,8,9}};
// }


// int main(){
//     int arr[3][4];
//     int n=3,m=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     return 0;
// }


void spiralmat(int matrix[][4], int n, int m) {
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
    while (srow <= erow && scol <= ecol) {
        // Top
        for (int j = scol; j <= ecol; j++) {
            cout << matrix[srow][j] << " ";
        }
        srow++;

        // Right (only if rows remain)
        if (srow <= erow) {
            for (int i = srow; i <= erow; i++) {
                cout << matrix[i][ecol] << " ";
            }
            ecol--;
        }

        // Bottom (only if cols/rows remain)
        if (srow <= erow && scol <= ecol) {
            for (int j = ecol; j >= scol; j--) {  // Start at ecol, full reverse
                cout << matrix[erow][j] << " ";
            }
            erow--;
        }

        // Left (only if cols/rows remain)
        if (scol <= ecol && srow <= erow) {
            for (int i = erow; i >= srow; i--) {  // Start at erow, full reverse
                cout << matrix[i][scol] << " ";
            }
            scol++;
        }
    }
}


int diag_Sum(int mat[][4], int n) {
    int sum=0;
    // for(int i=0;i<n;i++){//O(n^2)
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             sum+=mat[i][j];
    //         }
    //         else if(j==n-i-1){
    //             sum+=mat[i][j];
    //         }
    //     }
    // }
    
    for(int i=0;i<n;i++){//O(n)
        sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        } 
    }
    cout<<sum<<endl;
}

void Srch_Mat(int mat [][4], int n, int key, int m){
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key) { 
            cout<<"found at: "<<i+1<<" "<<j+1<<endl;
            return;
        }
        else if(mat[i][j]>key) {
            j--;
        }
        else {
            i++;
        }
    }
    cout<<"not found\n";
    

}
// int main(){
//     int mat[4][4]={{1, 2, 3,  4},
//                    {5, 6, 7,  8},
//                    {9, 10,11,12},
//                    {13,14,15,16}};
//     Srch_Mat(mat, 4, 1, 4);
//     return 0;
// }