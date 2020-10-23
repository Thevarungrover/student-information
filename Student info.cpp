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
	cout<<"\n4.Marks in 5 subjects : ";
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
	int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
	if(sum > 90) // 91 - 100
	{
		cout<<"\n\tYou get grade 'A' ";
	}
	else if(sum <=81  && sum < 90) // 81 -90
	{
		cout<<"\n\tYou get grade 'B' ";
	}
	else if(sum <=71  && sum < 80) // 71 -80
	{
		cout<<"\n\tYou get grade 'C' ";
	}
	else if(sum <=51  && sum < 70) // 51 -70
	{
		cout<<"\n\tYou get grade 'D' ";
	}
	else if(sum <= 50) // LESS THAN 50
	{
		cout<<"\n\tYou get grade 'E' ";
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


