#include<stdio.h>
#include <fstream>

//concrete implementation for all functions


//calculate the sales tax on multiple items
void sales_Program()
{
	struct Item{
		char name[20];
		float price;
	}Items[20];
	
	bool choice=true;

	
	while(choice)
	{
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                          Sales Receipt Program                             ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î   This will print out a detailed receipt that will display as follows      ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                   ¡ô1    the name of item followed by item                 ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                   ¡ô2    the total sales price                             ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                   ¡ô3    the amount of sales tax                           ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                   ¡ô4    the total purchase price                          ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl<< endl;
	
	
	
	cout << endl<<endl;
	
	
	getchar();
	
	
	int items=0;
	cout<<"How many sales items do you have ? :";
	cin>>items;
	cout<<endl<<endl;
	
	string name;
	float price;
	for(int i=0;i<items;i++)
	{
		
		cout<<"Enter the name of sales item "<<i+1<<" :";
		cin>>Items[i].name;
		cout<<"Enter the price of the "<<name<<" : $";
		cin>>Items[i].price;
		
		
		
		cout<<endl;
	}
	
	float percent;
	cout<<"Enter in the sales tax percentage"<<endl;
	cout<<"( enter 10,means 10% ) :";
	cin>>percent;
	cout<<endl<<endl<<endl;
	
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î          Receipt  Of  Sales                  ¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î    Item                 Price                ¡î" << endl;
	cout << "¡î----------------------------------------------¡î" << endl;
	
	float sum=0;
	int l;
	
	for(int j=0;j<items;j++)
	{
		
		l=0;
		while(Items[j].name[l]!='\0')
		{
			l++;
		}
		cout<<"    ¡ô"<<Items[j].name;
		
		for(int i=0;i<18-l;i++){
			cout<<" ";
		}
		cout<<"$   ";
		
		printf("%.2f",Items[j].price);
		
		sum=sum+Items[j].price;
		
		cout<<endl<<endl;
		
	}
	
	float tax;
	tax=sum*percent/100;
	
	float total=0;
	total=sum-tax;
	
	cout << "¡î----------------------------------------------¡î" << endl;
	cout <<"    ¡ôTotal Sales         $   ";
	printf("%.2f\n",sum);
	cout <<"    ¡ôSales Tax           $   ";
	printf("%.2f\n",tax);
	cout <<"                          -----------"<<endl;
	cout <<"    ¡ôGrand Total         $   ";
	printf("%.2f\n\n",total);
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl<<endl;
	
	
	char x;
	cout<<"do you want to run this program again?(y/n)";
	cin>>x;
	if(x=='y'||x=='Y')
		choice=true;
	else 
		choice=false;
		
	
		

		
		
	}
	
	
	
	
	
	
	
}


//have the user enter in a customer¡¯s address and output the customer¡¯s address in form of a record.
void customer_Card()
{
	char fullname[20];
	string address;
	string city;
	string state;
	string zipCode;
	string phone;
	bool choice=true;
	while(choice)
	{
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î          Welcome to the Customer             ¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î       Record Information Card Screen         ¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl<<endl;
	
	cout<<"Please input the customer's Information : "<<endl<<endl;
	
	cout<<"       ¡ôFull Name      : ";
	cin>>fullname; 
	cout<<endl;
	cout<<"       ¡ôStreet Address : ";
	cin>>address; 
	cout<<endl;
	cout<<"       ¡ôCity           : ";
	cin>>city; 
	cout<<endl;
	cout<<"       ¡ôState          : ";
	cin>>state; 
	cout<<endl;
	cout<<"       ¡ôZip Code       : ";
	cin>>zipCode; 
	cout<<endl;
	cout<<"       ¡ôPhone Number   : ";
	cin>>phone; 
	cout<<endl;
	
	system("cls");
	
	int l=0;
	while(fullname[l]!='\0')
	{
		l++;
	}
	cout<<endl;
	cout<<"       "<<fullname<<"'s contact card will look as follows:"<<endl<<endl;
	
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                              ¡î" << endl;
	
	cout << "¡î                   "<<fullname;
	for(int j=0;j<27-l;j++)
	{
		cout<<" ";
	}
	cout<<"¡î" << endl;
	
	cout << "¡î                                              ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl<<endl;
	
	cout<<"                 ¡ô FullName       :"<<fullname<<endl<<endl;
	cout<<"                 ¡ô Street Address :"<<address<<endl<<endl;
	cout<<"                 ¡ô City           : "<<city<<endl<<endl;
	cout<<"                 ¡ô State          : "<<state<<endl<<endl;
	cout<<"                 ¡ô Zip Code       : "<<zipCode<<endl<<endl;
	cout<<"                 ¡ô Phone Number   : "<<phone<<endl<<endl;
	
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl<<endl<<endl;
	
	char x;
	cout<<"do you want to enter another customer card ?(y/n)";
	cin>>x;
	if(x=='y'||x=='Y')
		choice=true;
	else 
		choice=false;
		
	}
	
	//fullname[20]="";
	address="";
	city="";
	state="";
	zipCode="";
	phone="";
	
}


//The user will enter the necessary information needed to balance a checkbook.
void BalanceCheck()
{
	bool choice=true;
	ofstream mycout("balanceFile.txt");
	
	while(choice)
	{
			
		system("cls");
		cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î               Please look at the following instructions                    ¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î               This program will balance your checkbook                     ¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		
		cout<<endl<<endl;
		
		float balance,balancetemp;
		int deposits;
		float depos[20];
		cout<<"                   Enter your beginning balance : $ ";
		cin>>balance;
		balancetemp=balance;
		
		cout<<endl;
		cout<<"                   How many deposits did you have the past months : ";
		cin>>deposits;
		cout<<endl;
		
		for(int i=0;i<deposits;i++)
		{
		cout<<"                   ¡ôEnter deposit number "<<i+1<<": $ ";
		cin>>depos[i];
		cout<<endl;	
		}
		
		cout<<endl<<endl;
		
		int withdraws;
		float withdra[20];
		
		cout<<"                   How many withdraws did you have the past months : ";
		cin>>withdraws;
		cout<<endl;
		
		for(int i=0;i<withdraws;i++)
		{
		cout<<"                   ¡ôEnter withdraw number "<<i+1<<": $ ";
		cin>>withdra[i];
		cout<<endl;	
		}
		
	
		
		system("cls");
		cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î                         CheckBook Balance Sheet                            ¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		
		cout<<endl<<endl;
		
		cout<<"             Deposits            Withdraws             Balance  "<<endl;
		cout<<"================================================================================="<<endl;
		cout<<"                                                        ";
		printf("%.2f\n",balance);
		
		
		float sum=0;
		sum=balance;
		for(int i=0;i<deposits;i++)
		{
		sum=sum+depos[i];
		cout<<"\t\t";
		printf("%.2f",depos[i]);
		                    cout<<"\t\t\t\t\t";
		printf("%.2f\n",sum);	
		}
		
		for(int i=0;i<withdraws;i++)
		{
			sum=sum-withdra[i];
		cout<<"\t\t\t\t";
		printf("  %.2f",withdra[i]);
												cout<<"\t\t\t";
		printf("%.2f\n",sum);
		}
		
		cout<<endl;
		cout<<"================================================================================="<<endl;
		
		cout<<endl<<endl;
		
		char file;
		
		cout<<"Do you want a copy of the check book balance file sheet on file?(y/n) : ";
		cin>>file;
		
		cout<<endl;
		
		if(file=='y' || file=='Y')
		
		{
			
			
		mycout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		mycout << "¡î                                                                            ¡î" << endl;
		mycout << "¡î                         CheckBook Balance Sheet                            ¡î" << endl;
		mycout << "¡î                                                                            ¡î" << endl;
		mycout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		
		mycout<<endl<<endl;
		
		mycout<<"             Deposits            Withdraws             Balance  "<<endl;
		mycout<<"================================================================================="<<endl;
		
		mycout<<"                                                        ";
		mycout<<balancetemp<<endl;
			
		sum=balancetemp;
		
		for(int i=0;i<deposits;i++)
		{
		sum=sum+depos[i];
		mycout<<"\t\t";
		mycout<<depos[i];
		                    mycout<<"\t\t\t\t\t";
		mycout<<sum<<endl;	
		}
		
		for(int i=0;i<withdraws;i++)
		{
		sum=sum-withdra[i];
		mycout<<"\t\t\t\t";
		mycout<<withdra[i];
												mycout<<"\t\t\t";
		mycout<<sum<<endl;
		}
		
		mycout<<endl;
		mycout<<"================================================================================="<<endl;
		
		mycout<<endl<<endl;
		
		
			
		cout<<"The file have been created ."<<endl;
			
		}
			
		
		
		cout<<endl<<endl;
		
		char x;
		cout<<"do you want to balance another checkbook ?(y/n)";
		cin>>x;
		if(x=='y'||x=='Y')
			choice=true;
		else 
			choice=false;	
		
	}
	
	mycout.close();
}



//convert time from Military to Civilian or from Civilian to Military times
void conversion_Utility()
{
	bool choice=true;
	while(choice)
	{
	system("cls");
	char cm;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                          Conversion    Utility                             ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                 Convert from Civilian to Military Time                     ¡î" << endl;
	cout << "¡î                                   OR                                       ¡î" << endl;
	cout << "¡î                      from Military to Civilian Time                        ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "                                                                                " << endl;
	cout << "                     Input C for Civilian or M for Military :";
	cin  >>cm;
	
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	
	int hour=0;
	int minutes=0;
	string ap;
	
	if(cm=='c' or cm=='C')
	{
		cout << "                      Enter your time in Civilian "<<endl;
		cout<<endl;
		cout << "                      ¡ôEnter your Hour    : ";
		cin>>hour;
		cout<<endl;
		cout << "                      ¡ôEnter your Minutes : ";
		cin>>minutes;
		cout<<endl;
		cout << "                      ¡ôEnter AM or PM     : ";
		cin>>ap;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		
		if(ap=="am"||ap=="AM")
		{
			ap="AM";
		}
		else if(ap=="pm"||"PM")
		{
			ap="PM";
		}
		
		cout << "                      Civilian Time : "<<hour<<":"<<minutes<<" "<<ap<<endl;
		cout<<endl;
		
		if(ap=="am"||ap=="AM")
		{
			if(hour<12)
				cout << "                      Military Time : 0"<<hour<<":"<<minutes<<endl;
			else
				cout << "                      Military Time : 0"<<hour-12<<":"<<minutes<<endl;
		}
		else if(ap=="pm"||"PM")
		{
			if(hour<12)
				cout << "                      Military Time : "<<hour+12<<":"<<minutes<<endl;
			else
				cout << "                      Military Time : "<<hour<<":"<<minutes<<endl;
		}
		
		
		
	}
	else if(cm=='m' or cm=='M')
	{
		cout << "                      Enter your time in Military "<<endl<<endl;
		cout << "                      ¡ôEnter your Hour    : ";
		cin>>hour;
		cout<<endl;
		cout << "                      ¡ôEnter your Minutes : ";
		cin>>minutes;
		
		
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		
		if(hour==0)
		{
			ap="AM";
			cout << "                      Civilian Time : "<<hour+12<<":"<<minutes<<" "<<ap<<endl;
			cout<<endl;
		}
		else if(hour>0 && hour<12)
		{
			ap="AM";
			cout << "                      Civilian Time : 0"<<hour<<":"<<minutes<<" "<<ap<<endl;
			cout<<endl;
		}
		else if(hour==12)
		{
			ap="PM";
			cout << "                      Civilian Time : "<<hour<<":"<<minutes<<" "<<ap<<endl;
			cout<<endl;
		}
		else if(hour>12)
		{
			ap="PM";
			cout << "                      Civilian Time : 0"<<hour-12<<":"<<minutes<<" "<<ap<<endl;
			cout<<endl;
		}
		
		if(hour<12)
			cout << "                      Military Time : 0"<<hour<<":"<<minutes<<endl;
		else
			cout << "                      Military Time : "<<hour<<":"<<minutes<<endl;
	}
		
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î                                                                            ¡î" << endl;
		cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
		cout<<endl<<endl;
		
		char x;
		cout<<"do you want to enter another customer card ?(y/n)";
		cin>>x;
		if(x=='y'||x=='Y')
			choice=true;
		else 
			choice=false;
	}
}



//If the user types in an invalid entry, they will need to be notified of this and ask to re-enter the Main Menu.
void Error(int &selection)
{
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                           Invalid     Reply                                ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                  You   had   input   a   wrong   number                    ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	
	cout<<endl<<endl;
	
	char choice;
	cout<<"Would you like to re-enter the main menu?(y/n) : ";
	cin>>choice;
	if(choice=='y'||choice=='Y')
		selection=1;
	else
		selection=0;
	
}


// have a screen thanking the user for using this application
void Over()
{
	system("cls");
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                         Thank You For Your Time                            ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î                    Looking Forward to Your Next Visit                      ¡î" << endl;
	cout << "¡î                                                                            ¡î" << endl;
	cout << "¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î¡î" << endl;
	
	cout<<endl<<endl;
	
	cout<<"Please press any key to Exit......"<<endl;
	getchar();
	
	
} 
