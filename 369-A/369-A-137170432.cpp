#include <iostream>

using namespace std;

int main()
{
	int n, m, k, type;
	int ans = 0;
	cin >> n >> m >> k;
	
	for(int i = 0; i < n; i++)
	{
		cin >> type;
		
		if (type == 1)
		{
			if (m == 0)
				ans++;
			else
				m--;
		}
		else
		{
			if (k != 0)
			{
				k--;
				continue;
			}	
			
			if (m != 0)
			{
				m--;
				continue;
			}
			
			ans++;
		}
	}
	
	cout << ans << endl;
}