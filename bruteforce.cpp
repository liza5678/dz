#include <iostream>
#include <string>
#include <cstdlib> //библиотека для рандома
#include <ctime>	
using namespace std;


int main()
{
int i,j,k;
char i1,j1,k1;
srand(time(NULL));
char z[3];
int x[3];
char y[3];
cin >> y;
for (int i =0 ; i<3 ;i++){
	x[i]=y[i];



	cout<<x[i]<<endl;;
}
 int count=129;	
for (i = 32; i < count; ++i)
for (j = 32; j < count; ++j)
for (k = 32; k < count; ++k)
{
	if (x[0]==i && x[1]==j && x[2]==k){
		z[0]=i;
		z[1]=j;
		z[2]=k;
		
		cout<<"nashel"<< endl;
		break;

	}
}
while(true){
	i=i1=rand()%97+32;
	j=j1=rand()%97+32;
	k=k1=rand()%97+32;
	if(x[0]==i && x[1]==j && x[2]==k){
		cout<<i1<<j1<<k1<<endl;
		break;
	}
}
for (int i = 0; i < 3; ++i)
{
	cout<<z[i];
}
}