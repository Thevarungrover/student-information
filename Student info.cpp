#include<iostream>
using namespace std;

class student{
	private : 
		int regno;
		char name[20];
		int standard;
		int marks[5]; // MARKS IN 5 SUBJECTS
		char grade;
	public :
		getstuinfo(); // ENTER STUDENT INFO
		displayinfo(); // DISPLAY ENTERED STUDENT INFO
		calcugrade(); // TO CALCULATE GRADE
};

// TO ENTER DATA
student :: getstuinfo(){
	cout<<"Enter the following details :";
	cout<<"\n1.Registration number : ";
	cin>>regno;
	cout<<"\n2.Name : ";
	cin>>name;
	cout<<"\n3.Class : ";
	cin>>standard;
	cout<<"\n4.Marks in 5 subjects out of 100 : ";
	int i;
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
	}
}

// DISPLAY DATA
student :: displayinfo(){
	cout<<"\nYou entered : ";
	cout<<"\n1.Registration number : "<<regno;
	cout<<"\n2.Name : "<<name;
	cout<<"\n3.Class : "<<standard;
	cout<<"\n4.Marks in 5 subjects out of 100 : ";
	int i;
	for(i=0;i<5;i++)
	{
		cout<<marks[i]<<" ";
	}
}

// CALCULATE GRADE
student :: calcugrade(){
	int sum = 0;
	for(int i = 0;i < 5;i++)
	{
		sum = sum + marks[i];
	}
	float percent = (sum/500)*100;
	if(percent > ) // 91 - 100
	{
		cout<<"\n\tYou get grade 'A' ";
	}
	else if(percent <=81  && percent < 90) // 81 -90
	{
		cout<<"\n\tYou get grade 'B' ";
	}
	else if(percent <=71  && percent < 80) // 71 -80
	{
		cout<<"\n\tYou get grade 'C' ";
	}
	else if(percent <=51  && percent < 70) // 51 -70
	{
		cout<<"\n\tYou get grade 'D' ";
	}
	else if(percent <= 50) // LESS THAN 50
	{
		cout<<"\n\tYou get grade 'F' ";
	}
	
}

// MAIN FUNCTION
main(){
	student s1;
	s1.getstuinfo();
	int choice;
	cout<<"\nDo you want to see the entered data ? ";
	cout<<"\nEnter '1' for 'yes' or '0' for 'no' ";
	cin>>choice;
	if(choice == 1)
	{
		s1.displayinfo();
	}
	
		s1.calcugrade();
		
	return 0;
}


