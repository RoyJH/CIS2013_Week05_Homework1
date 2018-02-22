#include <iostream>

using namespace std;

void firstDay(int year, int month, int&y);
void theMonth (int, int&);
void printmonth(int, int);
void calendar (int& y, int numdays);
int layout;
int month;
int y;
int year;
int numdays;
int start;
char repeat;
bool again=true;
void redo(char& repeat);
//char Y;
//char N;

int main (){
	
	cout << "Give a Month and Year and a calendar will be displayed.\n";
	
	while (again==true){
		cout << "Enter a month: ";
		cin >> month;
		cout << "Enter a year: ";
		cin >> year;
		cout << endl;
		
		firstDay (year, month, start);
		int layout = start;
		theMonth (month, numdays);
		calendar (y, numdays);
		printmonth(layout, numdays);
		cout << endl << endl;
		cout << "Would you like to try another date? Y/N: \n";
		cin >> repeat;
		redo(repeat);
		
	}
		if (again==false){
		return 0;}
}

void firstDay (int year, int month, int& start){
	int t[12] = {0,3,2,5,0,3,5,1,4,6,2,4};
	int y = year - (month<2);
	y=(y + y/4 - y/100 + y/400 + t[month-1]+1) % 7;
        // y = 0 for Sunday, 1 for Monday.. etc.
	start = y;
}

void theMonth (int startday, int& numdays){
	switch (month){
		case 1:cout<<"   January " << year << endl; numdays = 31; break;
		case 2:cout<<"   February "<< year << endl;
			if ((year%400 == 0 ) || (year%4==0 && year%100 !=0)){
			numdays = 29;
			}
			else {
			numdays = 28;
			}break;
		case 3: cout<<"   March "<< year << endl; numdays = 31; break;
		case 4: cout<<"   April "<< year << endl; numdays = 30; break;
		case 5: cout<<"   May "<< year << endl; numdays = 31; break;
		case 6: cout<<"   June "<< year << endl; numdays = 30; break;
		case 7: cout<<"   July "<< year << endl; numdays = 31; break;
		case 8: cout<<"   August "<< year << endl; numdays = 31; break;
		case 9: cout<<"   September "<< year << endl; numdays =30; break;
		case 10: cout<<"   October "<< year << endl; numdays=31; break;
		case 11: cout<<"   November "<< year << endl; numdays=30;break;
		case 12: cout<<"   December "<< year << endl; numdays=31;break;
		}
		int y = numdays;
}
void calendar (int& layout, int numdays){
	numdays;
	cout << " Su Mo Tu We Th Fr Sa\n";
}
void printmonth (int layout, int numdays){
	int newline;
	switch (layout+1)
	{
		case 1: for (y = 1; y <= numdays; y++ )
			if (y%7==0){
				cout <<  " " << y;
				cout << endl;}
			else if (y<=9){
				cout << "  " << y;}
			else {
	cout <<  " " << y;}break;
			
		case 2: cout << "   "; newline = 1;
			for (y = 1; y <= numdays; y++ )
		
			if (newline>=(7)){
				cout << endl;
				newline =1;
				if (y<=(9)){
					cout <<  "  " << y;}
				else {cout <<  " " << y;}
				}
			else if (y<10){
				cout << "  " << y; newline++;}
			else {
				cout <<  " " << y; newline++;}break;
		
		case 3: cout << "      ";
			newline = 2;
			for (y = 1; y <= numdays; y++ )
		
			if (newline>=(7)){
				cout << endl;
				newline =1;
				if (y<=(9)){
					cout <<  "  " << y;}
				else {cout <<  " " << y;}
				}
			else if (y<10){
				cout << "  " << y; newline++;}
			else {
				cout <<  " " << y; newline++;}break;
		
		case 4: 
			cout << "         ";
			newline = 3;
			for (y = 1; y <= numdays; y++ )
		
			if (newline>=(7)){
				cout << endl;
				newline =1;
				if (y<=(9)){
					cout <<  "  " << y;}
				else {cout <<  " " << y;}
				}
			else if (y<10){
				cout << "  " << y; newline++;}
			else {
				cout <<  " " << y; newline++;}break;
				
		case 5: 
			cout << "            ";
			newline = 4;
			for (y = 1; y <= numdays; y++ )
		
			if (newline>=(7)){
				cout << endl;
				newline =1;
				if (y<=(9)){
					cout <<  "  " << y;}
				else {cout <<  " " << y;}
				}
			else if (y<10){
				cout << "  " << y; newline++;}
			else {
				cout <<  " " << y; newline++;}break;
					
		case 6: 
			cout << "               ";
			newline = 5;
			for (y = 1; y <= numdays; y++ )
		
			if (newline>=(7)){
				cout << endl;
				newline =1;
				if (y<=(9)){
					cout <<  "  " << y;}
				else {cout <<  " " << y;}
				}
			else if (y<10){
				cout << "  " << y; newline++;}
			else {
				cout <<  " " << y; newline++;}break;
					
		case 7:  
			cout << "                  ";
			newline = 6;
			for (y = 1; y <= numdays; y++ )
		
			if (newline>=(7)){
				cout << endl;
				newline =1;
				if (y<=(9)){
					cout <<  "  " << y;}
				else {cout <<  " " << y;}
				}
			else if (y<10){
				cout << "  " << y; newline++;}
			else {
				cout <<  " " << y; newline++;}break;
	}
}
void redo (char& repeat){
	if (repeat==('N') || repeat==('n')){
			again=(false);}
		else if (repeat==('Y') || repeat==('y')){again=(true);}
		else {cout << "Invalid option.  Please enter Y/y or N/n.\n";
		cin>> repeat; redo;}
}