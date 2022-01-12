#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int ans = 0;
	int s,n;
	for (int i = -10000; i<10000; i++)
	{
		s=i;
		s = 3*(s/10);
		n=1;
		while (s<221){
			s= s+13;
			n = n*2;
		}
		if (n==256) ans++;
	}
	cout<<ans;
	return 0;
}