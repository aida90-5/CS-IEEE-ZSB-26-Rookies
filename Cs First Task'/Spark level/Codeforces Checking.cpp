#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cin>>number;
    char inputs[26];
  char arr[]={'c','o','d','e','f','o','r','c','e','s'};
  int arrsize= sizeof(arr)/sizeof(arr[0]);
  char results [26][4];

  for(int i=0;i<number;i++)
  {

     cin>>inputs[i];}
  for(int i=0;i<number;i++)
  {

     bool found=false;
     for(int j=0;j< arrsize;j++)
     {
         if(inputs[i]==arr[j])
         {
             found=true;
             break;
         }
     }
     if(found) cout<<"YES\n";
    else cout<<"NO\n";

  }


}
