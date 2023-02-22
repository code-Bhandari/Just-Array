#include <iostream>

using namespace std;

int main()
{
    for (int i = 0 ; i<=5 ; i++)
    {
       for(int j = i ; j<=5;j++)
       {
          cout<<"*";
       }
       cout<<" "<<endl;
    }
    return 0;
}

******
*****
****
***
**
*

int main()
{
   int n = 5;
    for (int i = 0 ; i<n ; i++)
    {
       for(int j = 0 ; j<=i ; j++)
       {
          cout<<"*";
       }
       cout<<" "<<endl;
    }
    return 0;
}

*
**
***
****
*****
******

#include <iostream>

using namespace std;

int main()
{
   int n = 5,k= 0;
    for (int i = 1 ; i<n ; i++,k=0)
    {
       for(int j = 1 ; j<=n-i ; j++)
       {
          cout<<" ";
       }
          while(k != 2*i-1){
             cout<<"*";
             ++k;
          }
       
       cout<<" "<<endl;
    }
    return 0;
}

    *
   ***
  *****
 *******
*********

#include <iostream>

using namespace std;

int main()
{
   int n = 5;
    for (int i = n ; i>=1 ; --i)
    {
       for(int s=0;s<n-i;++s)
       cout<<" ";
       for(int j=i;j<=2*i-1;++j)
       cout<<"* ";
       for(int j=0;j<i-1;++j)
       cout<<"* ";
       cout<<" "<<endl;
    }
    return 0;
}

*******
 *****
  ***
   *
