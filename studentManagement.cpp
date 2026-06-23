//STUDENT DATA MANAGEMENT 
//USING OBJECT ORIENTED LANGUAGE C++
//ADD STUDENT--------------<done><count display--------<done>>
//SHOW ALL-----------------<done>
//ADD RESULT---------------<f seek issue>/<alignment issue><-----canceled----->
//TOTAL STUDENTS-----------<done> 
//REMOVE STUDENT-----------<file pointer---<done>>/<alignment issue> 
//LOG-OUT------------------<done>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
using namespace std;
class student{
	char rollno[10];
	char fname[20];
	char lname[20];
	int rno;//---------------------------------------------------roll no of student to be removed
	public:
		void fyadd()
		{
			cout<<"Last Roll no added:";
			cout<<fy_count();
			ofstream fyit;
			cout<<"\nRollno(Enter roll no in two digits [for eg:09]):";
			cin>>rollno;
			cout<<"First Name:";
			cin>>fname;
			cout<<"Last Name:";
			cin>>lname;
			fyit.open("fyit.txt",std::ios::app);
			//fy();
			fyit<<rollno<<"       Admitted\t"<<fname<<" "<<lname<<"           F.Y.BSc.IT\n";
			fyit.close();
			cout<<"Student Added Successfully\n";
			cout<<"**************************\n";
			cout<<"Do you want to check the added student?:\n";
			cout<<"Enter 1 to check and 0 to exit:";
			int choicce1;
			cin>>choicce1;
			if(choicce1==1)
			{
				fy_all();
			}//1st if closed
			if(choicce1==0)
			{
			   exit(0);	
			}//2nd if closed*/
		}
		int fy_count()
		{
			int count=0;
			ifstream fyit;
		    fyit.open("fyit.txt");
		    string fystring;
			while(getline(fyit,fystring))
			{
				count++;
			}
		    fyit.close();
			return count;
		}
		void fy_all()
		{
			cout<<"=============F.Y.BSc.IT ALL STUDENTS=============\n";
			cout<<"ROLLNO:\t Status: \t NAME:          \t CLASS:    \n";
			ifstream fyit;
		    fyit.open("fyit.txt");
		    string fystring;
			while(getline(fyit,fystring))
			{ 
				cout<<fystring<<endl;
			}
		    fyit.close();
		}
		void remove_fy()
		{
			fy_all();
			fstream fyit;
			fyit.open("fyit.txt");
			cout<<"Enter the roll no of student whose admission is to be cancelled:";
			cin>>rno;
			
			if(rno==1)
			{
				int pos1=9;
				fyit.seekp(pos1);
				fyit<<"Canceled\t";
			}
			else{
				int pos2=61;
				int pos3=fyit.tellp();
				cout<<pos3;
				fyit.seekp(pos2*(rno-1));
				fyit<<"Canceled\t";	
			}
			fyit.close();
			}
		void syadd()
		{
			cout<<"Last Roll no added:";
			cout<<sy_count();
			ofstream syit;   
			cout<<"\nRollno(Enter roll no in two digits [for eg:09])::";
			cin>>rollno;
			cout<<"First Name:";
			cin>>fname;
			cout<<"Last Name:";
			cin>>lname;
			syit.open("syit.txt",std::ios::app);
			//sy();
			syit<<rollno<<"       Admitted\t"<<fname<<" "<<lname<<"           S.Y.BSc.IT\n";
			syit.close();
			cout<<"Student Added Successfully\n";
			cout<<"**************************\n";
			cout<<"Do you want to check the added student?:\n";
			cout<<"Enter 1 to check and 0 to exit:";
			int choicce1;
			cin>>choicce1;
			if(choicce1==1)
			{
				sy_all();
			}//1st if closed
			if(choicce1==0)
			{
			   exit(0);	
			}//2nd if closed*/
		}
		int sy_count()
		{
			int count=0;
			ifstream syit;
		    syit.open("syit.txt");
		    string systring;
			while(getline(syit,systring))
			{
				count++;
			}
		    syit.close();
			return count;
		}
		void sy_all()
		{
			cout<<"=============S.Y.BSc.IT ALL STUDENTS=============\n";
			cout<<"ROLLNO:\t Status: \t NAME:          \t CLASS:    \n";
			ifstream syit;
		    syit.open("syit.txt");
		    string systring;
			while(getline(syit,systring))
			{ 
				cout<<systring<<endl;;
			}
		    syit.close();
		}
		void remove_sy()
		{
			sy_all();
			fstream syit;
			syit.open("syit.txt");
			cout<<"Enter the roll no of student whose admission is to be cancelled:";
			cin>>rno;
			
			if(rno==1)
			{
				int pos1=9;
				syit.seekp(pos1*rno);
				syit<<"Canceled\t";
			}
			else{
				int pos2=61;
				int pos3=syit.tellp();
				cout<<pos3;
				syit.seekp(pos2*(rno-1));
				syit<<"Canceled\t";	
			}
			syit.close();
			}
		void tyadd()
		{
			cout<<"Last Roll no added:";
			cout<<ty_count();
			ofstream tyit;   
			cout<<"\nRollno(Enter roll no in two digits [for eg:09])::";
			cin>>rollno;
			cout<<"First Name:";
			cin>>fname;
			cout<<"Last Name:";
			cin>>lname;
			tyit.open("tyit.txt",std::ios::app);
			//ty();
			tyit<<rollno<<"       Admitted\t"<<fname<<" "<<lname<<"           T.Y.BSc.IT\n";
			tyit.close();
			cout<<"Student Added Successfully\n";
			cout<<"**************************\n";
			cout<<"Do you want to check the added student?:\n";
			cout<<"Enter 1 to check and 0 to exit:";
			int choicce1;
			cin>>choicce1;
			if(choicce1==1)
			{
				ty_all();
			}//1st if closed
			if(choicce1==0)
			{
			   exit(0);	
			}//2nd if closed*/
		}
		int ty_count()
		{
			int count=0;
			ifstream tyit;
		    tyit.open("tyit.txt");
		    string tystring;
			while(getline(tyit,tystring))
			{
				count++;
			}
		    tyit.close();
			return count;
		}
		void ty_all()
		{
			cout<<"=============T.Y.BSc.IT ALL STUDENTS=============\n";
			cout<<"ROLLNO:\t Status: \t NAME:          \t CLASS:    \n";
			ifstream tyit;
		    tyit.open("tyit.txt");
		    string tystring;
			while(getline(tyit,tystring))
			{ 
				cout<<tystring<<endl;;
			}
		    tyit.close();
		}
		void remove_ty()
		{
			ty_all();
			fstream tyit;
			tyit.open("tyit.txt");
			cout<<"Enter the roll no of student whose admission is to be cancelled:";
			cin>>rno;
			
			if(rno==1)
			{
				int pos1=9;
				tyit.seekp(pos1*rno);
				tyit<<"Canceled\t";
			}
			else{
				int pos2=61;
				int pos3=tyit.tellp();
				cout<<pos3;
				tyit.seekp(pos2*(rno-1));
				tyit<<"Canceled\t";	
			}
			tyit.close();
			}
};
int main() 
{
	student S;
	int choice00;
	cout<<"/=======STUDENT'S DATA=======/";
	cout<<"\n\n\n\n";
	cout<<"Gogate Jogalekar college\n";
	cout<<"IT Department Student's Data\n";
	cout<<"==============================\n\n";
	cout<<"Press any key to continue:";
	getch();
	int choice0;
	do{
	system("cls");
	cout<<"=======Student Data Management=======\n";
	cout<<"*************************************\n\n";
	cout<<"1.Add student\n\n";
	cout<<"2.Show all students\n\n";
	cout<<"3.Remove student\n\n";
	cout<<"4.Total Students\n\n";
	cout<<"5.Log out\n\n";
	cout<<"*************************************\n\n";
	cout<<"Enter the number of the task you want to perform:";
	cin>>choice0;
	switch(choice0)
	{
		case 1:
			system("cls");
			cout<<"=======Add Student=======\n";
			cout<<"***************************\n\n";
			cout<<"1.F.Y.BSc.IT\n\n";
			cout<<"2.S.Y.BSc.IT\n\n";
			cout<<"3.T.Y.BSc.IT\n\n";
			cout<<"***************************\n";
			cout<<"Enter in which class the student is to be added:";
			int choice2;
			cin>>choice2;
			if(choice2>0 && choice2<4)
			{
				system("cls");
				if(choice2==1)
				{
					S.fyadd();
				}
				if(choice2==2)
				{
					S.syadd();
				}
				if(choice2==3)
				{
					S.tyadd();
				}			
			}
			else{
				cerr<<"Error: You have entered wrong choice, Please enter number between 1 to 4";
			}
		break;
		case 2:
			system("cls");
			cout<<"=======Show All Students=======\n";
			cout<<"*******************************\n\n";
			cout<<"1.F.Y.BSc.IT\n\n";
			cout<<"2.S.Y.BSc.IT\n\n";
			cout<<"3.T.Y.BSc.IT\n\n";
			cout<<"*******************************\n";
			int choice3;
			cout<<"Enter class:";
			cin>>choice3;
			if(choice3>0 && choice3<4)
			{
				system("cls");
				if(choice3==1)
				{
					system("cls");
					S.fy_all();
				}
				if(choice3==2)
				{
					system("cls");
					S.sy_all();
				}
				if(choice3==3)
				{
					system("cls");
					S.ty_all();
				}
			}
			else{
				cerr<<"Error: You have entered wrong choice, Please enter number between 1 to 4";
			}	
		break;
		case 3:
			system("cls");
			cout<<"=======Remove Student=======\n";
			cout<<"****************************\n\n";
			cout<<"1.F.Y.BSc.IT\n\n";
			cout<<"2.S.Y.BSc.IT\n\n";
			cout<<"3.T.Y.BSc.IT\n\n";
			cout<<"****************************\n";
			int choice5;
			cout<<"Enter the class of student which is to be removed:";
			cin>>choice5;
			if(choice5>0 && choice5<4)
			{
				if(choice5==1)
				{
					system("cls");
					S.remove_fy();
				}
				if(choice5==2)
				{
					system("cls");
					S.remove_sy();
				}
			}
			else{
				cerr<<"Error: You have entered wrong choice, Please enter number between 1 to 4";
			}	
		break;
		case 4:
			system("cls");
			cout<<"=======Total Students=======\n";
			cout<<"****************************\n\n";
			cout<<"1.F.Y.BSc.IT:";
			cout<<S.fy_count();
			cout<<endl;
			cout<<"2.S.Y.BSc.IT:";
			cout<<S.sy_count();
			cout<<endl;
			cout<<"3.T.Y.BSc.IT:";
			cout<<S.ty_count();
			cout<<endl;
			cout<<"Total BSc.IT Students:";
			cout<<S.fy_count()+S.sy_count()+S.ty_count();
			cout<<endl;
			cout<<"****************************\n";
		break;
		case 5:
			system("cls");
			exit(0);
		break;
		default:
			cerr<<"Error: You have entered wrong choice, Please enter number between 1 to 5";
	}
	cout<<"\nDo you want to continue, Please enter 1 to continue and enter 0 to exit:";
	cin>>choice00;
	}while(choice00==1);
	
}
