#include <iostream>
#include <cmath>
#include <set>

using namespace std;


int main()
{	int counter = 0;
	set<unsigned long long> del;
	for (unsigned long long x = 500000001ULL;;x++)
	{
		del.clear();
		for (int p = 1; p <=sqrt(x); p ++)
			if (x%p==0) 
			{
				del.insert(p);
				del.insert(x/p);
			}
		unsigned long long mn ;
		if (del.size()<6) mn = 0;
		else{
			mn = 1;
			int i =0;
			for (auto t : del)
			{
				if (i==6) break;
				i++;
				mn*=t;
			}
		}
		
		if (mn<x) 
		{ 
			cout<<mn<<' '<<x<<endl;
			counter++;
		}
		if (counter == 5) break;
	}
	return 0;
}
