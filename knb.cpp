#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{ 
	int a;
	char circle;            
	int noyt;            
	srand(time(NULL)); 
	while(circle!='n'){  
		cout<<"0-rock, 1-paper, 2-scissors"<< endl;          
		cout<<"your choose: "<< endl;
		cin>> a;
			
		noyt = rand()%3;  
		cout<<noyt<<endl;  
		if (a==noyt){    
			cout<< "nichy"<<endl;



		}else if ((a == 1 && noyt ==2) || (a == 2 && noyt ==0) || (a == 0 && noyt ==1) ){ 
				
			cout<<"lose"<<endl;
				
		}else if ((a == 2 && noyt ==1) ||(a == 0 && noyt ==2) || (a == 1 && noyt ==0)){
				
			cout<<"win"<<endl;
				
		}
			
		cout<<"for circle input 'y' or 'n' "<<endl;
		cin>> circle; 
	}
	return 0;
		
	
}
