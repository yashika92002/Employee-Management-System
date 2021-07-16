//program to insert record in file
#include "employee.h"
int main()
{ Employee E;
  fstream F;
 
  F.open("employee.db",ios::in|ios::binary);
  if(F==NULL)
  {cout<<"File Not Found...."<<endl;
  }
  else
  {  cout<<"ID\t\tName\t\tSalary"<<endl;
     cout<<"---------------------------------------"<<endl;
  	 while(!F.eof())
  	 { F.read((char*)&E,sizeof(E));
  	   if(F.eof()){break;}
  	   E.putEmployee();
  	   }
  }
  
  F.close();
	
}
