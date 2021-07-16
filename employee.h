#include<iostream>
#include<fstream>
using namespace std;
class Employee
{ private:
	 int id;
     char name[30];
	 long salary;
  public:
     void getEmployee()
	 { cout<<"Employee Id:";
	   cin>>id;
	   cout<<"Employee Name:";
	   cin>>name;
	   cout<<"Employee Salary:";
	   cin>>salary;
     }
	void putEmployee()
	 { cout<<id<<"\t\t"<<name<<"\t\t"<<salary<<endl;
      }
      
     	void putEditEmployee()
	 { int f; 
	 
	 cout<<"ID"<<id<<"\n"<<"1] Name:"<<name<<"\n"<<"2] Salary:"<<salary<<"\n"<<"3] Exit:"<<endl;
    cout<<"Which Field You Want To Edit?";
    cin>>f;
    switch(f)
    { case 1:
    	 cout<<"Enter Name:";
    	 cin>>name;
         break;
	  case 2:
	  	 cout<<"Enter Salary:";
    	 cin>>salary;
         break; 	
	  case 3:
	     break;
      default:
	    cout<<"Wrong Option"<<endl;
		break;		 	  
	}
	  
	  }
	 
	    
	   int search(long,long);
     
     
     int search(int);
     
};

int Employee::search(int id)
{  if(id==this->id)
    { return(1);
	}
	return(0);
}

int Employee::search(long min,long max)
{  if(salary>=min && salary<=max)
    { return(1);
	}
	return(0);
}
