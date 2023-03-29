#include<bits/stdc++.h>

using namespace std;

int arr[11][11];

bool ap=true;

bool is_right(int n,int row,int col,int arr[][11])

{

        //checking here perticuler col

        for(int i=row-1;i>=0;i--)

        {

                if(arr[i][col]==1)

                return false;

        }

        //checking left diagonal

        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)

        {

                if(arr[i][j]==1)

                return false;

        }

        //checking for right diagonal

        for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++)

        {

                if(arr[i][j]==1)

                 return false;

        }

        return true;

}

void queenhelper(int n,int row,int arr[][11])

{

        //base case

        if(row==n)

        {

                if(ap==true){

                for(int i=0;i<n;i++)

                {

                        for(int j=0;j<n;j++)

                        {

                                cout<<arr[i][j]<<" ";

                        }

                        cout<<endl;

                }

                ap=false;

                }

cout<<endl;

        }

        //small calculation

        for(int j=0;j<n;j++)

        {

                if(is_right(n,row,j,arr))

                {

                        arr[row][j]=1;

                        queenhelper(n,row+1,arr);

                        //here backtracking use,wait in stack(internal stack)

                        arr[row][j]=0;

                }

        }

}

void placeNQueens(int n){

memset(arr,0,11*11*sizeof(int));

queenhelper(n,0,arr);

if(ap==true)

cout<<"Not possible"<<endl;

 


 

}


 

int main(){


 

int n;

cin >> n ;
placeNQueens(n);
}
