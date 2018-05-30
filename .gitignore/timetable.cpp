#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Set
{
protected:
int m;
int start_time[100];
int end_time[100];
int class_no;
string class_name[50];

public:
virtual void display() = 0; //pure virtual function of polymorphism
};

class Monday:public Set //single inheritance
{

public:
void enter(){
cout << "Enter the number of class on Monday: ";
cin >> class_no;
 
for(int m = 0; m < class_no; m++) // Retrieves the names
    {
        cout << "Enter class name: ";
        cin >> class_name[m];
        cout << "Set start time [0000]: ";
        cin >> start_time[m];
        cout << "Set end time [0000]: ";
        cin >> end_time[m];
        cout << endl;


    }
}
void display(){ //display output
        cout << "Monday            \n";
for(int m = 0; m < class_no; m++){
        cout << "                    ";
        cout << setw(15)<<setfill(' ')<<class_name[m];//setw and setfill functions usage for uniform spacing
        cout << "                 "<<setfill('0') << setw(4)<< start_time[m]<<"-";
        cout << setfill('0') << setw(4)<< end_time[m]<<endl;


}
 }

};

class Tuesday:public Set //single inheritance
{

public:
void enter(){
cout<< "Enter the number of class on Tuesday: ";
cin >>class_no;

for(int m = 0; m < class_no; m++) // Retrieves the names
    {
        cout << "Enter class name: ";
        cin >> class_name[m];
        cout << "Set start time [0000]: ";
        cin >> start_time[m];
        cout << "Set end time [0000]: ";
        cin >> end_time[m];
        cout<<"\n";


    }
}
void display(){  //display output
        cout <<"Tuesday           \n";
for(int m = 0; m < class_no; m++){
        cout <<"                    ";
        cout << setw(15)<<setfill(' ')<<class_name[m]; //setw and setfill functions usage for uniform spacing
        cout << "                 "<< setfill('0') << setw(4)<< start_time[m]<<"-";
        cout << setfill('0') << setw(4)<<end_time[m]<<endl;

}
}

};

class Wednesday:public Set //single inheritance
{

public:
void enter(){
cout<< "Enter the number of class on Wednesday: ";
cin >>class_no;

for(int m = 0; m < class_no; m++) // Retrieves the names
    {
        cout << "Enter class name: ";
        cin >> class_name[m];
        cout << "Set start time [0000]: ";
        cin >> start_time[m];
        cout << "Set end time [0000]: ";
        cin >> end_time[m];
        cout<<"\n";


    }
}
void display(){  //display output
        cout <<"Wednesday         \n";
for(int m = 0; m < class_no; m++){
        cout <<"                    ";
        cout <<setw(15)<<setfill(' ')<<class_name[m]; //setw and setfill functions usage for uniform spacing
        cout << "                 "<< setfill('0') << setw(4)<< start_time[m]<<"-";
        cout << setfill('0') << setw(4)<< end_time[m]<<endl;

}
 }

};

class Thursday:public Set //single inheritance
{

public:
void enter(){
    cout<< "Enter the number of class on Thursday: ";
    cin >>class_no;

    for(int m = 0; m < class_no; m++) // Retrieves the names
    {
        cout << "Enter class name: ";
        cin >> class_name[m];
        cout << "Set start time [0000]: ";
        cin >> start_time[m];
        cout << "Set end time [0000]: ";
        cin >> end_time[m];
        cout<<"\n";


    }
}
void display(){  //display output
        cout <<"Thursday          \n";
for(int m = 0; m < class_no; m++){
        cout <<"                    ";
        cout << setw(15)<<setfill(' ')<<class_name[m]; //setw and setfill functions usage for uniform spacing
        cout << "                 "<< setfill('0') << setw(4)<< start_time[m]<<"-";
        cout << setfill('0') << setw(4)<< end_time[m]<<endl;

}
 }

};

class Friday:public Set //single inheritance
{

public:
void enter(){
cout << "Enter the number of class on Friday: ";
cin >> class_no;

for(int m = 0; m < class_no; m++) // Retrieves the names
    {
        cout << "Enter class name: ";
        cin >> class_name[m];
        cout << "Set start time [0000]: ";
        cin >> start_time[m];
        cout << "Set end time [0000]: ";
        cin >> end_time[m];
        cout<<"\n";


    }
}
void display(){  //display output
        cout <<"Friday            \n";
for(int m = 0; m < class_no; m++){
        cout <<"                    ";
        cout <<setw(15)<<setfill(' ')<<class_name[m]; //setw and setfill functions usage for uniform spacing
        cout << "                 "<< setfill('0') << setw(4)<< start_time[m]<<"-";
        cout << setfill('0') << setw(4)<< end_time[m]<<endl;

}
 }

};



int main()
{
char choice;
bool run = true;
while(run)
{


Monday md;
Tuesday tu;
Wednesday we;
Thursday th;
Friday fr;


md.enter();
tu.enter();
we.enter();
th.enter();
fr.enter();

cout<<"\n\n";//timetable template
cout<<"                    Course Timetable\n";
cout<<"-----------------------------------------------------------------\n";
cout<<" Days         |         Course          |             Time       \n";
cout<<"-----------------------------------------------------------------\n";
md.display();
cout<<"-----------------------------------------------------------------\n";
tu.display();
cout<<"-----------------------------------------------------------------\n";
we.display();
cout<<"-----------------------------------------------------------------\n";
th.display();
cout<<"-----------------------------------------------------------------\n";
fr.display();
cout<<"-----------------------------------------------------------------\n";

    do{
        cout<<"Would you like to generate another table?(Y/N)"<<endl;
        cin >> choice;
        cout<<"\n\n";
        choice = tolower(choice);//Put your letter to its lower case
      }while (choice != 'n' && choice != 'y');
        if(choice =='n')
        {
            run = false;
        }
}
return 0;


}
