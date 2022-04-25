#include <iostream>
	
using namespace std;


int main()
{
	int a,d,n,o,m,y,gf;
	n=10;
	o=1;
	cin>> a;
	y=1;
	while(m!=1){
		
		if (a>n){
			n=n*10;
			o++;
		}else{m=1;}	
}
int mat[o];

if (y!=o){
	for (int i = 0; i < o; ++i){	
		y++;
		mat[i]=a%10;
		a=a/10;
		cout<<mat[i];


}
cout<<endl;	
}
n=n/10;
for (int i = 0; i < o; ++i){
	gf+= mat[i]*n;
	n=n/10;
}
gf++;
	cout<<gf;
	
		
	return 0;


}