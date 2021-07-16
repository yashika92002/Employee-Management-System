#include<iostream>

using namespace std;
int main()
{
  int ch;
   do{
   
   cout<<"Main Menu\n1]Insert\n2]Display All\n3]Edit Record\n4]Delete Record\n5]Exit\n";
   cout<<"Your Choice:";
   cin>>ch;
   switch(ch)
   { case 1:
   	 system("insert.exe");
	 break;
   	 case 2:
   	 system("displayall.exe");
	 break;
	 
	 case 3:
   	 system("Edit.exe");
	 break;
	 
	 case 4:
   	 system("Delete.exe");
	 break;
	 
	 case 5:
   	 
	 break;
   	 default:
   	 cout<<"Wrong Option..."<<endl;
	 break;
   	} 
}while(ch!=5);

}
