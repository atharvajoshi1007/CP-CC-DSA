#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int i,j,a,k;
    int col_len=matrix.size();
    int row_len=matrix[0].size();
	for(i=0;i<col_len;i++)
    {
        for(j=0;j<row_len;j++)
        {
            if(matrix[i][j]==0)
            {
                for(a=0;a<row_len;a++)
                {
                    matrix[i][a]=0;
                }
                for(k=0;k<col_len;k++)
                {
                    matrix[k][j]=0;
                }
            }
        }
    }

    for(i=0;i<matrix.size();i++)
    {
        cout<<"[";
        for(j=0;j<matrix[i].size();j++)
        {
             cout<<matrix[i][j]<<", ";
        }
        cout<<"]"<<endl;
    }
}
