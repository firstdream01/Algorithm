#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = 1, b = 0;
	for(int i = 1; i <= n; i++){
		a = a*i;
		while(a>=10){
			if(a%10==0){
				b++;
				a = a/10;
			}
			else{
				break;
			}
		}
		a = a%10000;                      // ����ط�Ҫ����n�ķ�Χ��ȷ��ȡģ��ֵ 
	}
	cout << b << endl << a%10 << endl;
	return 0;
} 
