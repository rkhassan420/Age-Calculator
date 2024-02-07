#include <iostream>
#include <string>
#include <fstream>
using namespace std;

	class Age{
		public:
			int d1, m1, y1, d2, m2, y2;
			int year, month, day;
			
			Age(){
				
				cout << "\t\t\t\t=================================================\n";
    			cout << "\t\t\t\t\t\t Age Calculator                            \n";
    			cout << "\t\t\t\t=================================================\n\n";				
			}
			
			void setBirthDate(){
				
				do{
			        cout << "Enter Your Date of Birth:\n\n";
			        cout << "Day: ";
			        cin >> d1;
			        cout << "Month: ";
			        cin >> m1;
			        cout << "Year: ";
			        cin >> y1;

        			if (d1 <= 0 || d1 > 31 || m1 <= 0 || m1 > 12 || y1 <= 0) {
            		cout << "Invalid input! Please enter valid values for day, month, and year.\n";
        			}
    			  } while (d1 <= 0 || d1 > 31 || m1 <= 0 || m1 > 12 || y1 <= 0);				
			}
			
			void setCurrentDate(){
				
				do{
			        cout << "\n\nAge at the Date of:\n\n";
			        cout << "Day: ";
			        cin >> d2;
			        cout << "Month: ";
			        cin >> m2;
			        cout << "Year: ";
			        cin >> y2;
			
			        if (d2 <= 0 || d2 > 31 || m2 <= 0 || m2 > 12 || y2 <= 0) {
			            cout << "Invalid input! Please enter valid values for day, month, and year.\n";
			        }
			      } while (d2 <= 0 || d2 > 31 || m2 <= 0 || m2 > 12 || y2 <= 0);				
			}
			
			Age(string process){			
		
				cout<<process;
				for (int i = 0; i < 10; ++i) {
					for (long long j = 5; j > 4; ++j) {
						
						if (j == 99999999) {
						cout << ".";
						break;
						}
					}
				}
			}
			
			
			bool isLeapYear(int year) {
    		// A leap year is divisible by 4, but not divisible by 100 unless it is also divisible by 400
    		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
			}			
			
			
			void ageCalculation(){
				
				
				    year = y2 - y1;
				    
				    if (m2 < m1 || (m2 == m1 && d2 < d1)) {
				        year--;
				        m2 += 12;
				    }
				    
				    month = m2 - m1;
				    
				    if (d2 < d1) {
				        month--;
				        // Consider leap year while calculating days
				        d2 += isLeapYear(y2) ? 29 : 28;
				    }
				    
				    day = d2 - d1;
				
				    cout << "\nAge:";
				    cout << "\n\nYou are " << year << " years " << month << " months and " << day << " days Old." << endl;
				
				
				    ofstream ali;
				    ali.open("Age History.txt", ios::app);
				    if (ali.is_open()) {
				        ali << "First Date = " << d1 << ":" << m1 << ":" << y1 << "\t\tLast Date " << d2 << ":" << m2 << ":" << y2 << "\t\tAge Calculation: " << year << " years " << month << " months and " << day << " days old." << endl;
				    } else {
				        cout << "Unable to write in file!";
				    }
				}		
				   
			
			
   };
			
			
			class Units :  public Age{
				public:
					int total_months;
					int total_weeks;
					int total_days;
					int total_hours;
					int total_minutes;
					int total_seconds;				
					
				
					
			    void calculateUnits(int year, int month, int day) {
					
					total_months = year * 12 + month;
    				cout << "or " << total_months << " Months " << day << " days" << endl;
    				
    				total_days = year * 365 + month * 30 + day;
    				cout << "or " << total_days << " days" << endl;    				
    				
    				total_weeks = total_days / 7;
   				    int remaining_days = total_days % 7;
   					cout << "or Weeks " << total_weeks << " Weeks and " << remaining_days << " days"<<endl;
   					
   					total_hours = total_days * 24;
    				cout<<"or Hours"<<total_hours<<endl;
    
   					total_minutes = total_hours * 60;
    				cout<<"or Minute "<<total_minutes<<endl;
    
    				total_seconds = total_minutes * 60;
    				cout<<"or Seconds"<<total_seconds<<endl;

				}		
				
				void nextBirthDay(int month, int day) {
				
				
    			int birth_month = 11-month;
    			int birth_day = 30-day;
    			cout<<"Next Birthday in " <<birth_month<< " months and "<<birth_day<<" days\n\n\n";
    			
}

				void malik(){
					
					cout << "\t\t\t\t=================================================\n";
    				cout << "\t\t\t\t   Project is Developed By: The Great Ali Hassan                            \n";
    				cout << "\t\t\t\t=================================================\n\n";
					
				
				}
		
	};		
	
		
	int main() {
		
   			// super class
   			
		    Age obj1;
		    obj1.setBirthDate();
		    obj1.setCurrentDate();

    		// Age calculation message
    		Age obj2("\n\n\t\t\t\tCalculating Your Age");

    		obj1.ageCalculation();

    		// Derive class
    		
			Units obj3;  
    		obj3.calculateUnits(obj1.year, obj1.month, obj1.day);
    		
    		obj3.nextBirthDay(obj1.month, obj1.day);
    		
    		obj3.malik();
    		
    		

    return 0;
}

		
	/*
	

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    // A leap year is divisible by 4, but not divisible by 100 unless it is also divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {

    int d1, m1, y1, d2, m2, y2;

    cout << "\t\t\t\t=================================================\n";
    cout << "\t\t\t\t\t\t Age Calculator                            \n";
    cout << "\t\t\t\t=================================================\n\n";

    do {
        cout << "Enter Your Date of Birth:\n\n";
        cout << "Day: ";
        cin >> d1;
        cout << "Month: ";
        cin >> m1;
        cout << "Year: ";
        cin >> y1;

        if (d1 <= 0 || d1 > 31 || m1 <= 0 || m1 > 12 || y1 <= 0) {
            cout << "Invalid input! Please enter valid values for day, month, and year.\n";
        }
    } while (d1 <= 0 || d1 > 31 || m1 <= 0 || m1 > 12 || y1 <= 0);


    do {
        cout << "\n\nAge at the Date of:\n\n";
        cout << "Day: ";
        cin >> d2;
        cout << "Month: ";
        cin >> m2;
        cout << "Year: ";
        cin >> y2;

        if (d2 <= 0 || d2 > 31 || m2 <= 0 || m2 > 12 || y2 <= 0) {
            cout << "Invalid input! Please enter valid values for day, month, and year.\n";
        }
    } while (d2 <= 0 || d2 > 31 || m2 <= 0 || m2 > 12 || y2 <= 0);

    cout << "\n\n\t\t\t\tCalculating Your Age........\n";

    int year, month, day;

    year = y2 - y1;

    if (m1 <= m2) {
        month = m2 - m1;
    }
    else if (m2 < m1) {
        year = year - 1;
        m2 = m2 + 12;
        month = m2 - m1;
    }

    if (d1 <= d2) {
        day = d2 - d1;
    }
    else if (d2 > d1) {
        month = month - 1;
        // Consider leap year while calculating days
    d2 = d2 + (isLeapYear(y2) ? 366 : 365);

        day = d2 - d1;
    }

    cout << "Age:";
    cout << "\n\nYou are " << year << " year " << month << " months and " << day << " days Old." << endl;

    int total_months = year * 12 + month;
    cout << "or " << total_months << " Months " << day << " days" << endl;

    // Calculate total days considering leap years
 int total_days = year * 365 + month * 30 + day;

    cout << "Total days: " << total_days << " days" << endl;

    int total_weeks = total_days / 7;
    int remaining_days = total_days % 7;

    cout << "Total weeks: " << total_weeks << " Weeks and " << remaining_days << " days"<<endl;
    
    int total_hour = total_days * 24;
    cout<<"Total Hours"<<total_hour<<endl;
    
    int total_minute = total_hour * 60;
    cout<<"Minute "<<total_minute<<endl;
    
    int total_second = total_minute * 60;
    cout<<"Seconds"<<total_second;
    
    cout<<"\n Your next birthday is"<<endl;
    int birth_month = 11-month;
    int birth_day = 30-day;
    cout<<"Month = "<<birth_month;
    cout<<"  Day "<<birth_day;

    return 0;
}
*/
