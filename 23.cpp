#include <iostream>
#include <cmath>

using namespace std;

int F(int from, int to)
{
	// if (from == zapret) return 0;
	if (from == to) return 1;
	if (from > to ) return 0;
	return F(from+1,to) + F(from*3,to);
}

int main()
{
	cout<< F(2,26)*F(26,87);
	
}
