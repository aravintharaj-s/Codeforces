#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long long ans = 0;
    long long i,n,x1,x2,y1,y2;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		ans += (x2-x1+1)*(y2-y1+1);
	}
	cout << ans << endl;
	return 0;
}