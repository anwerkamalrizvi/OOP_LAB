#include <iostream>
#include <string.h>
using namespace std;

class WeekDays{
	string days[8];
	int currentDay;
	public:
	WeekDays(){
//	days = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	this->days[0]="Monday";
	this->days[1]="Tuesday";
	this->days[2]="Wednesday";
	this->days[3]="Thursday";
	this->days[4]="Friday";
	this->days[5]="Saturday";
	this->days[6]="Sunday";
	}
	WeekDays(int currD){
		currentDay = currD;
		while(currD>7){
			currD = currentDay%7;
		}
				 
	}
	void current_Day(){
		for(int i=0;i<7;i++)
		{
			if(currentDay==i){
				cout<<"This is day: "<<days[i]<<endl;
				return;
			}
		}
	}
};

int main(){
	
	return 0;
}
