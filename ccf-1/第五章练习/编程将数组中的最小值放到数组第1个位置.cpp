#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100000];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++){   // �������� 
		cin >> a[i];
	}
	int mina = a[0];
	int t = 0;
	for(int i = 1; i < n; i++){   // �ҵ���С�������ڵ�λ�� 
		if(mina > a[i]){
			mina = a[i];
			t = i;
		}
	}
	int temp = a[t];   // ������С���� 
	while(t){          // �ƶ�����������λ�� 
		a[t] = a[t-1];
		t--;
	}
	a[0] = temp;       // ����С����������ǰ�� 
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
} 


