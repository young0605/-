#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[3][3],b[2],n[9];
	int x[9];
	 vector<int>v(9);
	int m=0;
	b[0]=10000;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];//TODO
			if(a[i][j]>=0)
			{
				if(a[i][j]){
						n[m]=abs(4-a[i][j]);//TODO//TODO
				}
				else n[m]=0;
				m++;
			}
		}//TODO
	}//求出所需改变的值
	for(x[0]=0;x[0]<4;x[0]++)//枚举举出所有符合条件的数组
	{
		for(x[1]=0;x[1]<4;x[1]++)
		{
			for(x[2]=0;x[2]<4;x[2]++)
			{
					x[3]=n[0];
					x[4]=n[1]-x[0]-x[1]-x[2];
					x[5]=n[2]-x[1]-x[2];
					x[6]=n[3]-x[0]-x[3]-x[4];
					x[7]=n[6]-x[3]-x[6];
					x[8]=n[8]-x[5]-x[7];
					if(x[2]+x[0]+x[4]+x[6]==n[4]&&x[2]+x[4]+x[5]+x[8]==n[5])
					{
						if(x[4]+x[6]+x[7]==n[7])//比较，选取最简单的方法
						{	
							b[1]=0;
							for(int i=0;i<9;i++){
								b[1]+=x[i];
							}
							if(b[0]>b[1])
								{
									b[0]=b[1];
									for(int i=0;i<9;i++)
									{
										v[i]=x[i];
									}
								}
						}//TODO
					}
				
			}
		}
	}
		for(int i:v){
			cout<<i;	//TODO
		}
	return 0;
}
