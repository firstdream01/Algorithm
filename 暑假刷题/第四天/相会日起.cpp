/*
�������ϴϺͻ�������ͬѧ������ȥ�����ġ�����Ժ���幤������ÿa��ȥһ�Ρ��ϴ�ÿb��ȥһ�Ρ�����ÿc��ȥһ�Ρ�2014��5��1������ͬ�ۡ����ġ�����Ժ������һ���ǳ�������ġ���һ���Ͷ��ڡ��ʣ���һ����������ۡ����ġ�����Ժ���������꼸�¼��գ�
�����롿a  b  c  ��0<a<100,0<b<100,0<c<100 ��
�����������۵��ꡢ�¡���  ����1���ո������
�����������룺1  2  3
�����2014  5  7 
*/ 

#include <iostream>
#include <cmath>
#include <cstdio> 
using namespace std;

int getMax(int a, int b, int c)
{
	int ans = a;
	if(ans < b)
		ans = b;
	if(ans < c)
		ans = c;
	return ans;
}

int main()
{
    int a, b, c, t, maxn;
    int i = 1;
    int m1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> a >> b >> c;
    maxn = getMax(a, b, c);
    while(true){
    	t = maxn * i;
    	if(t%a==0&&t%b==0&&t%c==0)
    		break;
    	i++;
    }
    int y = 2014, m = 5, d = 1;
    while(t >= 366)
    {
    	y++;
    	if((y%4==0&&y%100!=0)||(y%400==0)){
			t = t - 366; 
		}
		else{
			t = t - 365;
		}
    }
    if(t == 365){
    	t = t - 365;
    	y++;
    }
    
    if(((y+1)%4==0&&(y+1)%100!=0)||((y+1)%400==0)){
    	while(t > m2[m] - 1){
	    	t = t - m2[m];
	    	if(m==12)
	    		m = 1;
	    	else
	    		m = m + 1;
	    }
	    d = d + t;
	}
    else{
    	while(t > m1[m] - 1){
	    	t = t - m1[m];
	    	if(m==12)
	    		m = 1;
	    	else
	    		m = m + 1;
	    }
	    d = d + t;
    }
    if(m < 5){
    	y++;
    }
    cout << y << " " << m << " " << d << endl;
	return 0;
}
