#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>	
using namespace std;


int main()
{
int g;
srand(time(NULL));
int len= 500;
int arr1[sizes];
int arr2[10] {0};
for (int i = 0; i < sizes; ++i)
{

	arr1[i]=rand()%10;

}

for (int i = 0; i < sizes; ++i)
{

	for (int j = 0; j < 10; ++j)
	{
		if (arr1[i]==j){

			arr2[j]+=1;

		}
	}
}

for (int i = 0; i < 10; ++i)
{	
	cout<<arr2[i]/2<<' '<<arr2[i]/3<<endl;

}
return 0;
}