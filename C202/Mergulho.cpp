#include <iostream>
using namespace std;

int main()
{
	int n, r;
	bool v[10004]; //numero de mergulhadores
	while(cin >> n >> r) //EOF
	{
		for(int i = 0; i <= n; i++) //zerando posições pra saber quem voltou
			v[i] = 0; 
		
		int x;
		for(int i = 0; i < r; i++) //escrevendo quem voltou
		{
			cin >> x;
			v[x] = 1;
		}
		
		for(int i = 1; i <= n; i++) //comparando quem voltou
		{
			if(v[i] == 0)
				cout << i << " ";
		}
		
		if(n == r) cout << "*"; //se todos voltaram
		cout << endl;
	}
}