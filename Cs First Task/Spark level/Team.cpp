#include <iostream>

using namespace std;

int main()
{
    int number;
    cin>>number;
   int  arr[number][3];
    for(int n=0; n<number ;n++)
    {
        for(int m=0;m<3;m++)
        {
            cin>>arr[n][m];

        }

    }
    int count =0;
 for(int n=0; n<number ;n++)
    {
    int ones =0;
        for(int m=0;m<3;m++)
        {
            if(arr[n][m]==1)ones++;

        }
       if (ones>=2)count++;
    }
    cout<<count<<endl;
}
