#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>
using namespace std;



int main()
{
	const int a = 3;
	int j,i,b,fg,chet;
	int sum = 0;
	int sum2 = 0;
	int choose =0;
	srand(time(NULL));
	int matrix[a][a];
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			choose= rand()%2;
			if (choose==0){
				choose= -1;
			}else choose= 1;			
			matrix[i][j]=choose;
			
		}
	}
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			if (j==a-1 && i!=a-1){
				sum+=matrix[i][j]*matrix[i][0]+matrix[i][j]*matrix[i+1][j];
				
			}else if (i==a-1 && j!=a-1){
				sum+=matrix[i][j]*matrix[0][j]+matrix[i][j]*matrix[i][j+1];
				
			}else if (i==a-1 && j==a-1){
				sum+=matrix[i][j]*matrix[i][0]+matrix[i][j]*matrix[0][j];
				
				}else {
				sum+=matrix[i][j]*matrix[i][j+1]+matrix[i][j]*matrix[i+1][j];
			
					}
				}	
			}
	cout<<sum<<endl;
	for (i=0; i<a; i++){
			for (j=0; j<a; j++){
			cout<<matrix[i][j]<<'\t';
		}
		cout<<'\n';

  }
}
