#include<iostream.h>
#include<conio.h>
void main()
{
int sem1,sem2,assignment,attendance;
int endsem,endsem_contribution,p,z,w;
int sem1_contribution,sem2_contribution;
clrscr();
cout<<"WELCOME!!";
cout<<"\n\n\n I am here to solve your doubts regarding exam results";
cout<<"\nEnter your 1st Insem marks:\t";
cin>>sem1;
cout<<"\Enter your 2nd Insem marks:\t";
cin>>sem2;
cout<<"\nEnter your Assigment marks::\t";
cin>>assignment;
cout<<"\nEnter your Attendance marks:\t";
cin>>attendance;
cout<<"\n Enter your end sem marks:\t";
cin>>endsem;
endsem_contribution=endsem/2;
sem1_contribution =(sem1/50)*15;
sem2_contribution =(sem2/50)*15;
z=(endsem_contribution+sem1_contribution+sem2_contribution+attendance+assignment);
if((z>35)&&(endsem>35))
 {
  cout<<"!!! Congarats u have been PASSED !!! \n";
 cout<<"Your score is................. "<<z<<"%\nThank you!!!!!!!";
 }
else
 {
  cout<<"Sorry you are FAILED!!!\n";
  p=z-endsem_contribution;
  w=35-p;
  w=2*w;
  cout<<"\n\n_____* If u had scored more than "<<w;
  cout<<" in ur Endsems u have been passed*____\n";
  cout<<"\n\tBETTER LUCK NEXT TIME";
  }
getch();

}