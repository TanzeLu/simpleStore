#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;


//welcome screen,input name
void menu1()
{
	system("cls");
	cout << "����������������������" << endl;
	cout << "����������������������" << endl;
	cout << "���                                  ���" << endl;
	cout << "���         WELCOME    TO    YOUR    ���" << endl;
	cout << "���                                  ���" << endl;
	cout << "���          FINAL    PROGRAM        ���" << endl;
	cout << "���                                  ���" << endl;
	cout << "����������������������" << endl;
	cout << "����������������������" << endl  << endl << endl << endl;
	

	
}

//welcome screen

void menu2(char name[])
{
	int i=0;
	while(name[i]!='\0')
		i++; 

	 
	system("cls");
	cout << "����������������������" << endl;
	cout << "����������������������" << endl;
	cout << "���                                  ���" << endl;
	cout << "���            WELCOME               ���" << endl;
	cout << "���                                  ���" << endl;
	
	cout << "���             "<<name;
	
	for(int j=0;j<21-i;j++)
	cout<<" ";                  
	
	cout<<"���" << endl;
	
	cout << "���                                  ���" << endl;
	cout << "���          MAY      THE            ���" << endl;
	cout << "���                                  ���" << endl;
	cout << "���            COMPUTER              ���" << endl;
	cout << "���                                  ���" << endl;
	cout << "���          GODS    HAVE            ���" << endl;
	cout << "���                                  ���" << endl;
	cout << "���             MERCY                ���" << endl;
	cout << "���                                  ���" << endl;
	cout << "����������������������" << endl;
	cout << "����������������������" << endl  << endl << endl << endl;
	
	//cout<<i<<endl;
	cout << "Please enter any key to next step...... " ;
	getchar();
	
}


//print menu

int menu3()
{
	system("cls");
	cout << "����������������������������" << endl;
	cout << "����������������������������" << endl;
	cout << "���                                              ���" << endl;
	cout << "���                  CMPSC                       ���" << endl;
	cout << "���                                              ���" << endl;
	cout << "���              FINAL     PROGRAM               ���" << endl;
	cout << "���                                              ���" << endl;
	cout << "����������������������������" << endl;
	cout << "����������������������������" << endl   << endl;
	
	
	cout << "��Choice                  ��Discription " <<endl<<endl;
	cout << "====================================================== " <<endl<<endl; 
	cout <<"��1                         Caculate sales tax on multiple sales items"<<endl<<endl;
	cout <<"��2                         Create a customer contact card"<<endl<<endl;
	cout <<"��3                         Balance a checkbook"<<endl<<endl;
	cout <<"��4                         Convertion utility"<<endl<<endl;
	cout <<"��0                         Exit"<<endl<<endl;
	cout << "====================================================== "<<endl<<endl;
	cout <<"Enter you choice:";
	
	int choice;
	cin>>choice;
	return choice;
	
	
}
