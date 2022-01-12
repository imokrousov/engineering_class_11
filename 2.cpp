#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	for (int i =0; i <16; i++)
	{
		int t = i;
		int w = t%2; 
		t >>= 1;// t = t/2; 
		int z = t%2; 
		t >>= 1;// t = t/2; 
		int y = t%2; 
		t >>= 1;// t = t/2; 
		int x = t%2; 
		t >>= 1;// t = t/2; 
		if ((!(!z == y) || ((w && !x)==(y&&x)))== 0) 
			cout<<x<<y<<z<<w<<endl;
	}
	
	for (int x = 0; x<2 ; x++)
		for (int y = 0; y<2 ; y++)
			for (int z = 0; z<2 ; z++)
				for (int w = 0; w<2 ; w++)
					if ((!(!z == y) || ((w && !x)==(y&&x)))== 0) 
						cout<<x<<y<<z<<w<<endl;
					
	
	return 0;
}