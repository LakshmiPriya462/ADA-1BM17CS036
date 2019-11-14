
#include <iostream>

using namespace std;
void floyds(int b[][5])
{
    int i, j, k;
    for (k = 0; k < 5; k++)
    {
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout<<"\nMinimum :"<<i<<endl;
        for (j = 0; j < 5; j++)
        {
            cout<<b[i][j]<<"\t";
        }
 
    }
}
int main()
{
    int b[5][5];
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter values for "<<(i+1)<<" row"<<endl;
        for (int j = 0; j < 5; j++)
        {
            cin>>b[i][j];
        }
    }
    floyds(b);
   
}
