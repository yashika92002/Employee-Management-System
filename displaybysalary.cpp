//program to insert record in file
#include "employee.h"
int main()
{ Employee E;
  long min,max;
  int found=0,count=0;
  fstream F;
   
  F.open("employee.db",ios::in|ios::binary);
  if(F==NULL)
  {cout<<"File Not Found...."<<endl;
  }
  else
  {  cout<<"Enter Min Salary?";
     cin>>min;
     cout<<"Enter Max Salary?";
     cin>>max;
  
     cout<<""ID\t\tName\t\tSalary""<<endl;
     cout<<"---------------------------------------"<<endl;
  	 while(!F.eof())
  	 { F.read((char*)&E,sizeof(E));
  	   if(F.eof()){break;}
  	   found=E.search(min,max);
  	   if(found){
  	   E.putEmployee();
		 count++;
		 }
  	   }
  	   if(count==0)
  	   {cout<<"RECORD NOT FOUND....";
  	   
		 }
		else
		{cout<<"Record Found:"<<count;
		 } 
  	   
  }
  
  F.close();
	
}
