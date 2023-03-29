#include <bits/stdc++.h>
using namespace std;
#define N 9
// SAKSHAM BHAI GOD
bool isinRange(int board[][N])
{

    for (int i = 0; i < N;
        i++) {
        for (int j = 0; j < N;
            j++) {

            if (board[i][j] <= 0 || board[i][j] > 9) {
                return false;
            }
        }
    }
    return true;
}
bool isValidSudoku(int board[][N])
{
    if (isinRange(board)
        == false) {
        return false;
    }

    bool unique[N + 1];

    for (int i = 0; i < N; i++) {

        memset(unique, false,
            sizeof(unique));

        for (int j = 0; j < N;
            j++) {

            int Z = board[i][j];

            if (unique[Z]) {
                return false;
            }
            unique[Z] = true;
        }
    }

    for (int i = 0; i < N; i++) {

        memset(unique, false,
            sizeof(unique));

        for (int j = 0; j < N;
            j++) {

            int Z = board[j][i];

            if (unique[Z]) {
                return false;
            }
            unique[Z] = true;
        }
    }


    for (int i = 0; i < N - 2;
        i += 3) {

        for (int j = 0; j < N - 2;
            j += 3) {
            memset(unique, false,
                sizeof(unique));


            for (int k = 0; k < 3;
                k++) {

                for (int l = 0; l < 3;
                    l++) {

                    
                    int X = i + k;

                    
                    int Y = j + l;

                    
                    int Z = board[X][Y];

                    
                    if (unique[Z]) {
                        return false;
                    }
                    unique[Z] = true;
                }
            }
        }
    }

    return true;
}

int main()
{   
    int t; cin>>t;
    while(t--){
        int board[N][N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>board[i][j];
            }
        }

        if (isValidSudoku(board)) {
            cout << "Valid\n";
        }
        else {
            cout << "inValid\n";
        }
    }
}
