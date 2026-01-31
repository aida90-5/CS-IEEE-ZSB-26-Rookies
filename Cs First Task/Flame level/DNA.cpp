#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word;
  cin>>word;
  int length=word.length();
  int max =1;
  int repeat =1;
  for(int i=1;i<length;i++)
  {
      if(word[i]==word[i-1])
      {
          repeat++;
      }else
      {
          repeat=1;
                }
       if(repeat > max)
       {
           max=repeat;
       }
  }
         cout<<max;

}
