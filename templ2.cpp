#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;


template <typename X, typename Y> bool my_find(const X & set, const Y & key);
// X итерируем и содержит объекты типа Y

template <typename X> void transform(typename vector<X>::iterator first, 
									typename vector<X>::iterator last, 
									X(*f)(X) );
int plus_1(int x)
{
	return x+1;
}

int main()
{
	list <int> L;
	int k = 5;
	my_find(L,k);
	map <int,string> M;
	pair<int,string> p = {5,"df"};
	my_find(M,p);
	vector<int> V = {1,2,3,4};
	transform(V.begin(), V.end(), plus_1);

	return 0;
}