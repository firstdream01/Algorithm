#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[21][21];
	memset(a, 0, sizeof(a));
	int n;
	cin >> n;
	// ������1���ڵ�һ�е����м�
	a[1][n/2+1] = 1;
	// ����ȥ����������
	int i = 1;
	int j = n/2+1;
	for(int k = 2; k <= n*n; k++){
		if((k-1)%n == 0){ // ��1�ܱ�n��������� 
			i = i + 1;
			a[i][j] = k;
		}
		else{
			i = i - 1;
			j = j + 1;
			if(i == 0){
				i = n;
			} 
			if(j == n+1){
				j = 1;
			}
			a[i][j] = k;
		}
	} 
	// ���
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	} 
	
	return 0;
}




