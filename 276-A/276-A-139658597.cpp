#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <complex>
using namespace std;
typedef long long lld;

int n, k;
int f, t;
int max_f, cF;

int main()
{
    scanf("%d%d",&n,&k);
    scanf("%d%d",&f,&t);
    if (t > k) max_f = f - (t-k);
    else max_f = f;
    n--;
    while (n--)
    {
        scanf("%d%d",&f,&t);
        if (t > k) cF = f - (t-k);
        else cF = f;
        if (cF > max_f) max_f = cF;
    }
    cout << max_f << endl;
    return 0;
}