#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int n=0,m=0;
string a,b;
void Order(string a)
{
	if (a.empty())
		{  // û��ʣ����ĸ�ˣ�˵���γ���һ����������
	        cout << b << endl;
	        return;
		}	
	for(int x=0;x<int(a.size());x++)
	{
		if(x>0&&a[x]==a[x-1]) continue;
		char c=a[x];
		b=b+c;
		string a1;
		a1=a;//������ֳ�ͻ�������²㼶���ɵı���
		a1.erase(x,1);
		Order(a1);
		b.pop_back(); 
	}
		
		
	}

int main()
{
	if(!(cin>>a)) return 0;
	sort(a.begin(),a.end());
	m=n=a.length();
	Order(a);
	return 0;
}
