//program to insert record in file
#include "employee.h"
#include<stdlib.h>
int main()
{ Employee E;
  fstream F,T;
   int id,f,found=0,fd=0;
  F.open("employee.db",ios::in|ios::binary);
  T.open("temp.db",ios::out|ios::binary);
  if(F==NULL)
  {cout<<"File Not Found...."<<endl;
  }
  else
  {  cout<<"Enter Employee Id U Want Delete?";
     cin>>id;
  
    
  	 while(!F.eof())
  	 { F.read((char*)&E,sizeof(E));
  	   if(F.eof()){break;}
  	   found=E.search(id);
  	   if(!found){
  	    T.write((char*)&E,sizeof(E));}
  	   else
		 {fd=1;
		 E.putEmployee();
		 cout<<"Record Deleted....";
		  } 
  	   }
  	   if(!fd)
  	   {cout<<"RECORD NOT FOUND....";
		 }  	   
  }
  
  F.close();
  T.close();
  remove("employee.db");
  rename("temp.db","employee.db");
	
}
