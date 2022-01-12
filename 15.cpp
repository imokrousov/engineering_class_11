#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	for (int A = 0; A<1000; A++)
	{
		int flag = 0;
		for (int x = 0; x<10000; x++)
		{
			//cout<< x&105<< ' '<< x&58<<' '<< x&A <<endl; 
			if ((!((x&105) == 0) || (((x&58) == 0) ||((x&A) != 0)) ) ==false)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0) 
		{
			cout<<A<<endl;
			break;
		}
	}
}
