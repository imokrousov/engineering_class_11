#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;


template <typename X, typename Y> bool my_find(const X & set, const Y & key);
// X итерируем и содержит объекты типа Y

template <typename X> void transform(typename vector<X>::iterator first, typename vector<X>::iterator last, X(*f)(X) );
//Функция применяет transform к каждому элементу 
int plus_1(int x)
{
	return x+1;
}

template <typename T, int size> class myArray;
// Шаблонный массив размера size 
// Поддерживает операцию квадратные скобки
// Может создаваться от вектора и списка инициализации
// Есть метод int memory() который возращает количество занимаемых байт
// В случае если T bool ведет битовое хранение значений 


template <typename T> class binHeap
{
	struct BinHeapNode 
	{
		T key;
		vector <*BinHeapNode> childs;
		int degree;
	};
	int treesCount_;
	vector <*BinHeapNode> tree_roots;
public:
	void push(const T & newKey);
	void merge(const BinHeap<T> & H );
};

int main()
{
	list <int> L;
	int k = 5;
	my_find(L,k);
	map <int,string> M;
	pair<const int,string> p = {5,"df"};
	my_find(M,p);
	vector<int> V = {1,2,3,4};
	transform(V.begin(), V.end(), plus_1);
	
	vector<double> V1(5,5.0);
	myArray<double , 5> mas1, mas2(V1), mas3 = {1.0,2,3,4,5};
	cout<< mas2[2]<<endl;
	myArray<bool , 5> mas4;
	cout<< mas1.memory()<<' '<<mas4.memory()<<endl;
	return 0;
}
