#include <iostream>
#include <cstring>
using namespace std;

int Sum( /* in */ int n )
{
  if (n < 8)
    return n + Sum(n + 1);
  else
    return 2;
}

void Test(int i )
{
  if (i < 8)
  {
    Test(i + 1);
    cout << i << ' ';
  }           
}

void removeSubstrFromStr(char *subs, char *s)
{
  if (*s != '\0' && *subs != '\0')
  {
    if (strncmp(subs,s,strlen(subs)) == 0)
    {           
      strcpy(s,s+strlen(subs));           
      removeSubstrFromStr(subs,s);
      cout << s << endl;        
    }        
    else             
      removeSubstrFromStr(subs,++s); 
      cout << "1" << s << endl;    
  }
}

int main() {
  int num = Sum(5);
  Test(4);
  cout << num << endl;
  char sub [] = "oa";
  char word[10]={"goat"};
  removeSubstrFromStr (sub,word);
}