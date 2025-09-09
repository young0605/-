#include<iostream>
#include<string>
#define N 30
using namespace std;
int GetBit(int a,int i)
{
	return (a>>i)&1;
}//展示当前位置的值
void SetBit(int &a,int i,int v)
{
	if(v==1)
		a |=(1<<i);
	else
		a &=~(1<<i);
}//初始设置该位置的值
void FliBit(int& a,int i)
{
	a^=(1<<i);
}//反转当前位置的值
int main()
{
	int c=0,u=0,d=0;
	int ori=0,ord=0;
	string s1,s2;
		cin>>s1>>s2;
		for (int m = 0; m < int(s1.length());m++)                 
			{    
				if (s1[m] == '0') 
					{	
						SetBit(ori, m, 0);  
						u++;
					}
				else if(s1[m]=='1')
					{	
						SetBit(ori, m, 1);
						u++;
					}	
			}	
				for (int m = 0; m < int(s2.length());m++)                 
					{    
						if (s2[m] == '0') 
							{	
								SetBit(ord, m, 0); 
							}
						else if(s2[m]=='1')
							{	
								SetBit(ord, m, 1);
							}
					}	
			int ori1=ori;
		for(int i=0;i<u-1;i++)
		{
			if(GetBit(ori,i)!=GetBit(ord,i))
			{
				FliBit(ori,i+1);
				FliBit(ori,i);
				if(i<u-2)
				FliBit(ori,i+2);
				c++;
			}
			if(ori==ord){
				cout<<c;
				return 0;
			}
		}//第0个先不翻
			for(int i=0;i<u-1;i++)
				{
					if(GetBit(ori1,i)!=GetBit(ord,i))
					{
						FliBit(ori1,i);
						if(i<u-1)
						FliBit(ori1,i+1);
						if(i>0)
						FliBit(ori1,i-1);
						d++;
					}
					if(ori1==ord){
						cout<<d;
						return 0;
					}
				}
		if(ori!=ord&&ori1!=ord)
		cout<<"impossible"<<endl;
	return 0;
}
