#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	int a[105][105];
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	} 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			bool flag = true;
			for(int k = 0; k < n; k++){  // �ж��Ƿ��Ǹ��е����ֵ 
				if(a[i][j]<a[k][j]){
					flag = false;
				}
			} 
			for(int k = 0; k < m; k++){  // �ж��Ƿ��Ǹ��е���Сֵ 
				if(a[i][j]>a[i][k]){
					flag = false;
				} 
			}
			if(flag){
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
	return 0;
}
