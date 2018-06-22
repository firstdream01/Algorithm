#include <iostream>
#include <string>
using namespace std;

int apple(int m, int n)
{
	if(m==0||n==1){
		return 1;
	}
	if(m < 0){
		return 0;
	}
	if(m<n){
		return apple(m, m);
	}
	return apple(m, n-1)+apple(m-n, n);
}

int main()
{
	int m, n, k;    //�˴���k����N��Ȼ��һ��ͨ��������֪��Ϊɶ 
	cin >> k;
	while(k--){
		cin >> m >> n;
		cout << apple(m, n) << endl;
	}
	return 0;
} 
