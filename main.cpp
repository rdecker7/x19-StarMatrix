//Author: Riley Decker

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main ()
{
    //Collect user input for grid size
    int rows;
    int cols;
    cout<<"Please input desired number of rows."<<endl;
    cin>>rows;
    cout<<"Please input desired number of columns."<<endl;
    cin>>cols;

    if(rows>0 && cols>0)
    {
        vector< vector< char> > starMatrix(rows);
        for(int r=0;r<starMatrix.size();r++)
        {
            starMatrix[r].resize(cols);
            for(int c=0;c<starMatrix[r].size();c++)
            {
                starMatrix[r][c]= '*';
                cout<<starMatrix[r][c]<<" ";
            }
            cout<<endl;
        }
    }
    
return 0;
}

