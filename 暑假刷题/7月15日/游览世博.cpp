// ��̰�ģ���ѡСչ�ݣ���ѡ��չ�� 
#include <bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("test.in", "r", stdin); 
	int n, s, ans = 0;
	cin >> n >> s;
	int a[105]={0};
	int b[105]={0};
	int c[105]={0};                  // �������ߵ���n��չ��ʱ�����Բι۵�չ���� 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = n-1; i >= 1; i--){
		for(int j = 0; j < i; j++){
			if(a[j]>a[j+1]){
				swap(a[j], a[j+1]);
				swap(b[j], b[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++){   
		a[i] = s - a[i];
		c[i] = 1;
		if(b[i]==1){
			a[i] -= 30;
		}
		else{
			a[i] -= 60;
		}
		if(a[i]<0){
			continue;
		}
		for(int j = 0; j < i; j++){  // ��ѡ��ǰi���е�Сչ�� 
			if(b[j]==1){
				a[i] -= 30;
				c[i]++;
			}
			if(a[i]<0){
				c[i]--;
				break;
			}
		}
		for(int j = 0; j < i; j++){  // ��ѡ��ǰi���еĴ�չ�� 
			if(b[j]==2){
				a[i] -= 60;
				c[i]++;
			}
			if(a[i]<0){
				c[i]--;
				break;
			}
		}
	}
	int max = 0;
	for(int i = 0; i < n; i++){
		if(c[i] > max){
			max = c[i];
		}
	}
	cout << max << endl;
	return 0;
} 
