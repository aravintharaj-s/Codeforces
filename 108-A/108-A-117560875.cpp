#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
     int m,h;
     char d;
     cin>>h>>d>>m;
      do 
    {
        ++m;
        if (m == 60)
        {
            ++h;
            m= 0;
        }
        if (h== 24)
        {
            h = 0;
        }
    } while (h % 10 * 10 + h / 10 != m);
     printf("%02d:%02d\n", h, m);
}