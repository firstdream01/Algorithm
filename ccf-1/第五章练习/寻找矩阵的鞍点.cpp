#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5] = {0};
	int maxa[5];
	int mina[5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	// Ѱ��ÿһ�е����ֵ 
	for(int i = 0; i < 5; i++){
		maxa[i] = a[i][0];
		for(int j = 1; j < 5; j++){
			if(maxa[i] < a[i][j]){
				maxa[i] = a[i][j];
			}
		}
	}
	// Ѱ��ÿһ�е���Сֵ 
	for(int j = 0; j < 5; j++){
		mina[j] = a[0][j];
		for(int i = 1; i < 5; i++){
			if(mina[j] > a[i][j]){
				mina[j] = a[i][j];
			}
		}
	}
	// �ж����� 
	bool flag = false;
	int c, l;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(a[i][j] == mina[j] && a[i][j] == maxa[i]){
				flag = true;
				c = i;
				l = j;
			}
		}
	}
	if(flag){
		cout << c+1 << " " << l+1 << " " << a[c][l] << endl;
	}
	else{
		cout << "not found" << endl;
	}
	return 0;
}


