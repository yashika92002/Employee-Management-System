//program to insert record in file
#include "employee.h"
int main()
{ Employee E;
  fstream F;
  char ch;
  F.open("employee.db",ios::out|ios::app|ios::binary);
  do{
  	E.getEmployee();
  	F.write((char*)&E,sizeof(E));
  	cout<<"Add More Records[y/n]:";
  	cin>>ch;
  	
  }while(ch=='y' || ch=='Y');
  F.close();
	
}
