#include <iostream>
using namespace std;

int main()
{
    int weight;
   cin>>weight;
 bool canDivide=false;
      for(int k=0;k<weight;k++)
      {
          int part=k;
          int Rpart=weight-k;
      if(part>0 && Rpart>0 &&part%2==0 &&Rpart%2==0)
          {
              canDivide=true;
              break;
          }
      }

          if(canDivide)
          {
              cout<<"YES"<<endl;
          }else{
          cout<<"NO"<<endl;
          }
}
