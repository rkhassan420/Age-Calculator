#include <iostream>
#include <string>
#include <fstream>
using namespace std;


	class Age{
		public:
			int Bd, Bm, By,    Cd, Cm, Cy;
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
			        cin >> Bd;
			        cout << "Month: ";
			        cin >> Bm;
			        cout << "Year: ";
			        cin >> By;

        			if (Bd <= 0 || Bd > 31 || Bm <= 0 || Bm > 12 || By <= 0) {
            		cout << "Invalid input! Please enter valid values for day, month, and year.\n";
        			}
    			  } while (Bd <= 0 || Bd > 31 || Bm <= 0 || Bm > 12 || By <= 0);				
			}
			
			
			void setCurrentDate(){
				
				do{
			        cout << "\n\nAge at the Date of:\n\n";
			        cout << "Day: ";
			        cin >> Cd;
			        cout << "Month: ";
			        cin >> Cm;
			        cout << "Year: ";
			        cin >> Cy;
			
			        if (Cd <= 0 || Cd > 31 || Cm <= 0 || Cm > 12 || Cy <= 0) {
			            cout << "Invalid input! Please enter valid values for day, month, and year.\n";
			        }
			      } while (Cd <= 0 || Cd > 31 || Cm <= 0 || Cm > 12 || Cy <= 0);				
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
				
				
				    year = Cy - By;
				    
				    if (Cm < Bm || (Cm == Bm && Cd < Bd)) {
				        year--;
				        Cm += 12;
				    }
				    
				    month = Cm - Bm;
				    
				    if (Cd < Bd) {
				        month--;
				        // Consider leap year while calculating days
				        Cd += isLeapYear(Cy) ? 29 : 28;
				    }
				    
				    day = Cd - Bd;
				    
				
				    cout << "\nAge:";
				    cout << "\n\nYou are " << year << " years " << month << " months and " << day << " days Old." << endl;
				
				
				
				
				    ofstream ali;
				    ali.open("Age History.txt", ios::app);
				    
					if (ali.is_open()) {
						
				        ali  <<" " << Bd << ":" << Bm << ":" << By << "\t\t\t\t" << Cd << ":" << Cm << ":" << Cy << "\t\t\t\t" << year << " years " << month << " months and " << day << " days old." << endl;
				    
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
				

				
				
				
				
				void checkHistory(){
					
					
					char option;
    				cout << "\nDo you want to see the age history? (y/n): ";
    				cin >> option;

   					 if (option == 'y' || option == 'Y') {
        
					ifstream historyFile("Age History.txt");
        			if (historyFile.is_open()) {
        				
            			string line;
            			while (getline(historyFile, line)) {
                		cout << line << endl;
            		}
            			historyFile.close();
        		
				  } else {
            		cout << "Unable to open file\n";
        }
    }
}		


				void malik(){
					
					cout << "\n\n\t\t\t\t=================================================\n";
    				cout << "\t\t\t\t   Project is Developed By: MR. Ali Hassan                            \n";
    				cout << "\t\t\t\t=================================================\n\n";					
				
				}				
		
	};		
	
		
	int main() {		
   			
   			
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
    		
    		obj3.checkHistory();   	
    		
    		obj3.malik(); 		
    		

    return 0;
}


