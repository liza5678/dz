#include <iostream>
#include <cstdlib> 
#include <ctime>	
using namespace std;


int main()
{
srand(time(NULL));
int w=0;
char q[3];
cin >> q;
int count=129;	

for (int i = 32; i < count; ++i)
for (int j = 32; j < count; ++j)
for (int k = 32; k < count; ++k)
{
	if (q[0]==i && q[1]==j && q[2]==k){
		cout << (char) i<< (char) j << (char)k<<endl;

		
		cout<<"success"<< endl;
		break;
	else w+=1;


	}

}
cout<<w<<endl;

while(true){
	int qw=rand()%97+32;
	int qwe=rand()%97+32;
	int qwer=rand()%97+32;
	if(q[0]==qw && q[1]==qwe && q[2]==qwer){
		cout<<(char)qw<<(char)qwe<<(char)qwer<<endl;
		break;
	}
}

}
