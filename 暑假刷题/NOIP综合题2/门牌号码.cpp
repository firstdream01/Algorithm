#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	cin >> k;
	int a[5010] = {0};
	for(int i = 0; i < 5010; i++){
		a[i] = 1;
	}
	for(int i = 2; i < 5010; i++){   // ʹ������ɸ�ҳ�ȫ������ 
		if(a[i]){
			for(int j = 2; i*j < 5010; j++){
				a[i*j] = 0;
			}
		}
	}
	int ans1 = 0, ans2 = 0;        // �����е������������ж�ʲôʱ�����K 
	for(int i = 2; i < 5010; i++){
		if(a[i]){
			ans1 += i;
			ans2++;
			if(ans1 > k){
				break;
			}
		}
	}
	cout << ans1 - k << " " << ans2;
	return 0;
} 
