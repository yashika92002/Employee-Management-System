#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char * getPassword()
{ char x=' ';
  char password[30];
  int i=0;
  while(x!='\r')
  { x=getch();
    cout<<"*";
    password[i++]=x;
  	
   } 
   password[i-1]=0;
   return password;
}

int main()
{ char *pwd;
  cout<<"Enter Password:";
  pwd=getPassword();
  cout<<"\n\n";
  if(strcmp(pwd,"12345")==0)
  {system("Linking.exe");
  }
  else
  { cout<<"Invalid Password....";
  }

}
