#include <iostream>

using namespace std;

int main()
{
   int number;
   cin>>number;
   int arr[number][4];
   for(int k=0;k<number;k++)
   {
       for(int y=0;y<4;y++)
       {
           cin>>arr[k][y];
       }
   }
   for(int k=0;k<number;k++)
   {

        if(arr[k][0] == arr[k][1] && arr[k][1] == arr[k][2] && arr[k][2] == arr[k][3])
          {
              cout<<"YES\n";
          }
       else cout<<"NO\n";
   }
}
