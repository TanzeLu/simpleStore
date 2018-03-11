#include <iostream>
#include <stdlib.h>
#include<string.h>

using namespace std;


//welcome screen,input name
void menu1()
{
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î         WELCOME    TO    YOUR    ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î          FINAL    PROGRAM        ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl  << endl << endl << endl;
	

	
}

//welcome screen

void menu2(char name[])
{
	int i=0;
	while(name[i]!='\0')
		i++; 

	 
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î            WELCOME               ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	
	cout << "¡î¡î             "<<name;
	
	for(int j=0;j<21-i;j++)
	cout<<" ";                  
	
	cout<<"¡î¡î" << endl;
	
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î          MAY      THE            ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î            COMPUTER              ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î          GODS    HAVE            ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î             MERCY                ¡î¡î" << endl;
	cout << "¡î¡î                                  ¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl  << endl << endl << endl;
	
	//cout<<i<<endl;
	cout << "Please enter any key to next step...... " ;
	getchar();
	
}


//print menu

int menu3()
{
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î                                              ¡î¡î" << endl;
	cout << "¡î¡î                  CMPSC                       ¡î¡î" << endl;
	cout << "¡î¡î                                              ¡î¡î" << endl;
	cout << "¡î¡î              FINAL     PROGRAM               ¡î¡î" << endl;
	cout << "¡î¡î                                              ¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl   << endl;
	
	
	cout << "¡ïChoice                  ¡ïDiscription " <<endl<<endl;
	cout << "====================================================== " <<endl<<endl; 
	cout <<"¡ô1                         Caculate sales tax on multiple sales items"<<endl<<endl;
	cout <<"¡ô2                         Create a customer contact card"<<endl<<endl;
	cout <<"¡ô3                         Balance a checkbook"<<endl<<endl;
	cout <<"¡ô4                         Convertion utility"<<endl<<endl;
	cout <<"¡ô0                         Exit"<<endl<<endl;
	cout << "====================================================== "<<endl<<endl;
	cout <<"Enter you choice:";
	
	int choice;
	cin>>choice;
	return choice;
	
	
}
