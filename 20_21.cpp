#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include <queue>
#include <algorithm>

using namespace std;

int h1(int x) {return x*2;} // Варианты действий с камнями
int h2(int x) {return x+1;}
int neg_max(vector<int> V)
{
	int m;
	for (auto x : V) 
	{
		if (x<0) m = x;
	}
	return m;
}

int main()
{
	const int N = 77; //Условие победы
	const int F = 7; // Количество камней в первой куче
	int D [N][N]; // Таблица с ответами на вопрос, кто выйграет
	for (int i = N-1; i>=0; i --)
		for (int j = N-1; j>=0; j--)
		{
			if (i+j >= N) 
			{
				D[i][j] = 0;
				continue;
			}
			vector <int> V1 = {h1(i)+j, h2(i)+j,i+h1(j),i+h2(j)}; // Сколько можно получить камней первым ходом Пети
			sort(V1.begin(),V1.end());
			if (V1[3] >=N) 
			{
				D[i][j]=1;
				continue;
			}
			vector <int> V2 = {D[h1(i)][j],D[h2(i)][j],D[i][h1(j)],D[i][h2(j)]}; // Кто побеждает в достижимых клетках
			sort(V2.begin(),V2.end());
			if (V2[0]<0) D[i][j] = -neg_max(V2)+1;
			else D[i][j] = - V2[3];
			
		}
	for (int i =0; i < N; i++)
	{
		cout<<i<<' '<<D[F][i]<<endl;
	}
	return 0;
}






