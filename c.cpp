#include <iostream>
using namespace std;

float getGrade(float avg){
	char grade;
	int x=(avg/10);

	if (avg>=70){
	grade ='A';
	return grade;
	}else{

	switch(x){
	case 6:
	grade ='B';
	break;
case 5:
	grade ='C';
	break;
case 4:
	grade ='D';
	break;
default:
	grade ='F';
	break;

		}
return grade;
	}


}
float totalavg=0;
float cavg;
int main()
{
int numstud;
cout << "Enter the number of students"<<endl;
cin >>numstud;

int y=numstud;

	for(y=1; y<=numstud; y++){
	string student;
	cout <<"Enter the name of the student"<<endl;
	cin>>student;

    int math,eng,kis;
	cout <<"Enter the marks for math for "<<student<<endl;
	cin>>math;


	cout << "Enter the marks for eng for "<<student<<endl;
	cin>>eng;

	cout <<"Enter the marks for kis for "<<student<<endl;
	cin>>kis;

	int sum;
	float avg;
	sum=math+eng+kis;
	avg=sum/3.0;
	totalavg=totalavg+avg;
	cavg=totalavg/numstud;

	char grade;
 	grade=getGrade(avg);
	cout<<"Average marks for "<<student<< " "<<"is "<<" "<<avg<<endl;
	cout <<"grade for "<<student<<" "<<"is "<<" "<<grade<<endl;
	cout <<"class average is "<<cavg<<endl;

	}
return 0;
}
