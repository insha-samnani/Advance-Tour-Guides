#include<iostream> //including required library files
#include<conio.h>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<fstream>
#include<time.h>
#include<windows.h>

int dec=0; //declaring global variable

using namespace std;

class Humans{ //base class of model 1

	protected: //defining access specifiers
		
		string name, gender, address, contact_no, emergency_contact_no, account_no; //declaring class attributes
        int age;
        
	public:
		Humans(){ // defining default constructor
			
			name=" ";
			gender=" ";
			address=" ";
			contact_no=" ";
			emergency_contact_no=" ";
			account_no=" ";
			age=0;
			
		}
		
		Humans(string name, string gender, string address, string contact_no, string emergency_contact_no, string account_no, int age){ //defining parameterized construtor
			
			this->name = name;
			this->gender = gender;
			this->address = address;
			this->contact_no = contact_no;
			this->emergency_contact_no = emergency_contact_no;
			this->account_no = account_no;
			this->age = age;
			
		}
		
		set_name(string name){ //setters and getters 
		    this->name = name;
		}
		set_gender(string gender){
		    this->gender = gender;
		}
		set_address(string address){
		    this->address = address;
		}
		set_contact_no(string contact_no){
		    this->contact_no = contact_no;
		}
		set_emergency_contact_no(string emergency_contact_no){
		    this->emergency_contact_no = emergency_contact_no;
		}
		set_account_no(string account_no){
		    this->account_no = account_no;
		}
		set_age(int age){
		    this->age = age;
		}
		
		string get_name()const{
		    return name;
		}
		string get_gender()const{
		    return gender;
		}
		string get_address()const{
		    return address;
		}
		string get_contact_no()const{
		    return contact_no;
		}
		string get_emergency_contact_no()const{
		    return emergency_contact_no;
		}
		string get_account_no()const{
		    return account_no;
		}
		int get_age()const{
		    return age;
		}
		
		input_data(){ //defining input_data() function of base
		
			cout<<"\nWhat is your full name? \n";
		    fflush(stdin);
		    getline(cin,name);
		    while(1){ //infinite while loop unless the user inputs valid data
		    
		    	cout<<"\nWhat is your gender (Male or Female or Other)? \n";
		        fflush(stdin);
		        getline(cin,gender);
		        if(gender=="Male" || gender=="Female" || gender=="Other"){
				    break;
				}
				else{
					
				    cout<<"S O R R Y !!!"<<"\t You have entered wrong gender !!! \t Please re enter !!!"<<endl;
				}
				
			}
			
		    cout<<"\nWhat is your full address? \n";
		    fflush(stdin);
		    getline(cin,address);
		    while(1){
		    	
		    	cout<<"\nWhat is your contact number(In format +92_________)? \n";
		        fflush(stdin);
		        getline(cin,contact_no);
		        if(contact_no[0]!='+' || contact_no[1]!='9' || contact_no[2]!='2' || contact_no.length()!=13){
		        	
		        	cout<<"S O R R Y !!!"<<"\t You have entered your phone number in wrong format !!! \t Please re enter !!!"<<endl;
				}
				
				else{
					
					break;
				}
				
			}

		    while(1){
		    	
		    	cout<<"\nPlease provide emergency contact number also(In format +92_________). \n";
		        fflush(stdin);
		        getline(cin,emergency_contact_no);

		        if(emergency_contact_no[0]!='+' || emergency_contact_no[1]!='9' || emergency_contact_no[2]!='2' || emergency_contact_no.length()!=13){
		        	
		        	cout<<"S O R R Y !!!"<<"\t You have entered your phone number in wrong format !!! \t Please re enter !!!"<<endl;
				}
				
				else{
					
					break;
				}
				
			}
			
		    cout<<"\nPlease enter your account number: \n";
		    fflush(stdin);
		    getline(cin,account_no);
		    
		    cout<<"\nWhat is your age? \n";
		    cin>>age;
		}
};

class Tourists : public Humans{ //derived class 1 of model 1

	protected:
		
		int *x; //declaring pointer attribute
		char trav_bef;
		string strengths, weakness, interests, med_prob;
		static int k,id; //declaring static attribute
		static string env;
		const string cnic_no; //declaring constant attribute
		
	public:
		
		Tourists(){
			
			x= new int; //assigning new memory to the pointer attribute
			x=&id;
			
			strengths=" ";
			weakness=" ";
			interests=" ";
			med_prob=" ";
			trav_bef=' ';
			
		}
		
		Tourists(string name, string gender, string address, string contact_no, string emergency_contact_no, string account_no, int age, char trav_bef, string strengths, string weakness, string interests, string med_prob, string env) : Humans(name, gender, address, contact_no, emergency_contact_no, account_no, age){
			
			x= new int;
			x=&id;
			
			this->trav_bef = trav_bef;
			this->strengths = strengths;
			this->weakness = weakness;
			this->interests = interests;
			this->med_prob = med_prob;
		
		}
		Tourists(string cnic):cnic_no(cnic){ //constructor overloaded for the assignment of constant attribute
			
		}
		Tourists(const Tourists &T1){ //copy constructor to copy data of previously registered tourists again
			
			x=new int;
			x=&id;
			
			this->name = T1.name;
			this->gender = T1.gender;
			this->address = T1.address;
			this->contact_no = T1.contact_no;
			this->emergency_contact_no = T1.emergency_contact_no;
			this->account_no = T1.account_no;
			this->age = T1.age;
			this->trav_bef = T1.trav_bef;
			this->strengths = T1.strengths;
			this->weakness = T1.weakness;
			this->interests = T1.interests;
			this->med_prob = T1.med_prob;
			
		}
		
		set_trav_bef(char trav_bef){
			this->trav_bef = trav_bef;
		}
		set_strenghts(string strengths){
			this->strengths = strengths;
		}
		set_weakness(string weakness){
			this->weakness = weakness;
		}
		set_interests(string interests){
			this->interests = interests;
		}
		set_med_prob(string med_prob){
			this->med_prob = med_prob;
		}
		set_env(string env){
			this->env = env;
		}
		
		char get_trav_bef()const{
			return trav_bef;
		}
		string get_strengths()const{
			return strengths;
		}
		string get_weakness()const{
			return weakness;
		}
		string get_interests()const{
			return interests;
		}
		string get_med_prob()const{
			return med_prob;
		}
		static string get_env(){
			return env;
		}
		
		input_data(){ //input_data() function overrided
			
			x=new int;
			x=&id;
			
			if(k==0){
				*x=0;
			}
			
			++*x;
			
			ofstream file; //to create file in write mode
	        file.open("Tourists.txt",ios::app); //file opened in write mode
	        
			string prev_travel;
			k++;
			
	    	cout<<"\n\nInformation of member "<<k<<": "<<endl;
	    	
            Humans :: input_data(); //calling input data function of base
            
            file<<"\nInformation of member "<<k<<": \n\n"; //started writing content to the file
            
            file<<"Tour ID: "<<*x<<"\n";
            file<<"Name: "<<get_name()<<"\n";
            file<<"Gender: "<<get_gender()<<"\n";
            file<<"Address: "<<get_address()<<"\n";
            file<<"Contact number: "<<get_contact_no()<<"\n";
            file<<"Emergency contact number: "<<get_emergency_contact_no()<<"\n";
            file<<"Account number: "<<get_account_no()<<"\n";
            file<<"Age: "<<get_age()<<"\n";
		    
			cout<<"\nHave you ever traveled before (Yes or No)? \n";
		    cin>>trav_bef;
		    if(trav_bef=='Y' || trav_bef=='y'){
		    	
		    	cout<<"\nWhere you traveled? (Just mention countries and cities.) \n";
			    fflush(stdin);
			    getline(cin,prev_travel);
			    
			}
	    	cout<<"\nWhat are your strengths?\n";
		    fflush(stdin);
		    getline(cin,strengths);
		    file<<"Strengths: "<<strengths<<"\n";
		    
		    cout<<"\nWhat are your weaknesses?\n";
		    fflush(stdin);
		    getline(cin,weakness);
		    file<<"Weaknesses: "<<weakness<<"\n";
		    
		    cout<<"\nWe are diffirent from other tour guides as we take care and respect the opinions and interests of our members.\n\nWhat are your interests? Please choose from: \n1-Making or listening to music.\n2-Sports.\n3-Leading troops.\n4-Health care.\n5-Capturing moments.\nNOTE: YOU MUST NOTE DOWN THESE SUGGESTED ACTIVITIES IF YOU LIKE.\nNOTE: AS PER YOUR INTERESTS, WE WILL SUGGEST YOU DIFFIRENT ACTIVITIES IN WHICH YOU CAN PARTICIPATE DURING YOUR TOUR.\nPlease input as per sequence without changing the spelling and case. If your interests are more than 1, seperate them with a comma ',' and space.\n";
		    fflush(stdin);
		    getline(cin,interests);
		    file<<"Interests: "<<interests<<"\n";
		    
			char string[31][100]={ //2D arrays used for storing different combinations of interests
			
	                   "Making or listening to music",
	                   "Sports",
	                   "Leading troops",
	                   "Health care",
	                   "Capturing moments",
	                   "Making or listening to music, Sports",
	                   "Making or listening to music, Leading troops",
	                   "Making or listening to music, Health care",
	                   "Making or listening to music, Capturing moments",
	                   "Sports, Leading troops",
	                   "Sports, Health care",
	                   "Sports, Capturing moments",
	                   "Leading troops, Health care",
	                   "Leading troops, Capturing moments",
	                   "Health care, Capturing moments",
	                   "Making or listening to music, Sports, Leading troops",
	                   "Making or listening to music, Sports, Health care",
	                   "Making or listening to music, Sports, Capturing moments",
	                   "Sports, Leading troops, Health care",
	                   "Sports, Leading troops, Capturing moments",
	                   "Sports, Health care, Capturing moments",
	                   "Leading troops, Health care, Capturing moments",
	                   "Making or listening to music, Leading troops, Health care",
	                   "Making or listening to music, Leading troops, Capturing moments",
	                   "Making or listening to music, Health care, Capturing moments",
	                   "Making or listening to music, Sports, Leading troops, Health care",
	                   "Making or listening to music, Sports, Leading troops, Capturing moments",
	                   "Sports, Leading troops, Health care, Capturing moments",
	                   "Making or listening to music, Sports, Health care, Capturing moments",
	                   "Making or listening to music, Leading troops, Health care, Capturing moments",
	                   "Making or listening to music, Sports, Leading troops, Health care, Capturing moments"
	                   
            };
            
            compareintr(interests,string); //calling comparintr function
            
            cout<<"\nAs mentioned above we respect our passenger's opinions, therefore we are not inforcing any restrictions for those who have any medical issue.\n\nPlease enter your health issue from:\n1-Breathing problem\n2-Blood pressure\n3-Physical disability\nNOTE:YOU MUST NOTE DOWN THESE SUGGESTED PRECAUTIONS IF YOU LIKE.\nPlease input as per sequence without changing the spelling and case. If your interests are more than 1, seperate them with a comma ',' and space.\nIf you are not having any medical problems among these, just simply type 'No'.\n";
		    fflush(stdin);
		    getline(cin,med_prob);
		    file<<"Medical Problems: "<<med_prob<<"\n\n"; 
		    
		    char str[7][100]={ //2D arrays used for storing different combinations of medical problems
	                    "Breathing problem",
						"Blood pressure",
						"Physical disability",
						"Breathing problem, Blood pressure",
						"Breathing problem, Physical disability",
						"Blood pressure, Physical disability",
						"Breathing problem, Blood pressure, Physical disability"
	        };
	        
		    comparemed(med_prob,str); //calling comparemed function
		    
		    file.close(); //closing the file
		    
	}
	
		compareintr(string interests,char string[31][100]){ //defination of compareintr function for comapring interests
		
	        int j;
	        j=0;
		
		    if(interests==string[j]){
		    	
	            cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n";
		    }
        
		    if(interests==string[j+1]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n";
			}
        
		    if(interests==string[j+2]){
		    	
	           cout<<"\nYou can do following: \n\n1-Mapping and locating.\n\n2-Conducting Trips.\n";
            }
        
		    if(interests==string[j+3]){
		    	
	           cout<<"\nYou can do following: \n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
        
		    if(interests==string[j+4]){
		    	
	           cout<<"\nYou can do following: \n\n1-Blogging.\n\n2-Vlogging.\n";
            }
        
		    if(interests==string[j+5]){
		    	
               cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n";
            }
        
		    if(interests==string[j+6]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in delse iffirent competitions including Singing and various Talent Shows.\n\n\n1-mapping and locating.\n\n2-Conducting Trips.\n";
            }
        
		    if(interests==string[j+7]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
        
		    if(interests==string[j+8]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
        
		    if(interests==string[j+9]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n";
            }
        
		    if(interests==string[j+10]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Yoga.\n\n2-excercising.\n\n3-Jogging.\n";
            }
        
		    if(interests==string[j+11]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
        
		    if(interests==string[j+12]){
		    	
               cout<<"\nYou can do following: \n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
        
		    if(interests==string[j+13]){
		    	
	           cout<<"\nYou can do following: \n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
        
		    if(interests==string[j+14]){
		    	
    	       cout<<"\nYou can do following: \n\n1-Yoga.\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
        
		    if(interests==string[j+15]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n";
            }
        
		    if(interests==string[j+16]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
          
		    if(interests==string[j+17]){
		    	
		       cout<<"\nYou can do following: 1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
           
		    if(interests==string[j+18]){
		    	
	           cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
            
			if(interests==string[j+19]){
				
	           cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+20]){
				
    	       cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+21]){
				
	           cout<<"\nYou can do following: \n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+22]){
				
    	       cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
            
			if(interests==string[j+23]){
				
               cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+24]){
				
    	       cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+25]){
				
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n";
            }
            
			if(interests==string[j+26]){
				
    	       cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+27]){
				
    	       cout<<"\nYou can do following: \n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+28]){
				
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+29]){
				
               cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
            }
            
			if(interests==string[j+30]){
				
	           cout<<"\nYou can do following: \n\n1-Playing instruments on various occasions including born fires and get together parties.\n\n2-Taking part in diffirent competitions including Singing and various Talent Shows.\n\n\n1-Playing INDOOR games including:\nHide and Seek, Musical Chairs, Scabble, Pictionary, Card Games, Indoor Bowling, Hangman and Puzzles.\n\n2-Playing INDOOR sports including:\nIndoor Badminton, Indoor Basketball, Indoor Soccer, Indoor Table Tennis and Indoor Volleyball.\n\n3-Playing OUTDOOR games:\nHiking and Camping, Mountain Climbing, Hunting and Fishing, Sailing and Motorboating, Biking, Rock Climbing, Horseback Riding, Ice Skating, Skiing and Restoration and Conservation Volunteering.\n\n4-Participating in OUTDOOR sports including:\nCricket, Football, Hockey, Outdoor Basketball, Outdoor Badminton, Outdoor Soccer and Outdoor Volleyball.\n\n\n1-Mapping and locating.\n\n2-Conducting Trips.\n\n\n1-Yoga,\n\n2-excercising.\n\n3-Jogging.\n\n\n1-Blogging.\n\n2-Vlogging.\n";
       }
       
   }
   
	    comparemed(string med_prob, char str[7][100]){ //defination of comparemed function for comapring medical problems
	    	
	        int j;
	        j=0;
	        
	        if(med_prob==str[j]){
	        	
	            cout<<"\nYou must avoid hiking and climbing of mountains as it can cause severe effect on your health.\n";
            }
            
			if(med_prob==str[j+1]){
				
	            cout<<"\nYou must maintain a healthy diet and should avoid irregular food patterns.\n";
            }
            
			if(med_prob==str[j+2]){
				
	            cout<<"\nIf you are having any physical disability you must travel on your own responsibility under some care.\n";
            }
            
			if(med_prob==str[j+3]){
				
	            cout<<"\nYou must avoid hiking and climbing of mountains as it can cause severe effect on your health.\n\nYou must maintain a healthy diet and should avoid irregular food patterns.\n";
            }
            
			if(med_prob==str[j+4]){
            	
	            cout<<"\nYou must avoid hiking and climbing of mountains as it can cause severe effect on your health.\n\nIf you are having any physical disability you must travel on your own responsibility under some care.\n";
            }
            
            if(med_prob==str[j+5]){
            	
	            cout<<"\nYou must maintain a healthy diet and should avoid irregular food patterns.\n\nIf you are having any physical disability you must travel on your own responsibility under some care.\n";
            }
            
            if(med_prob==str[j+6])
            {
            	
        	    cout<<"\nYou must avoid hiking and climbing of mountains as it can cause severe effect on your health.\n\nYou must maintain a healthy diet and should avoid irregular food patterns.\n\nIf you are having any physical disability you must travel on your own responsibility under some care.\n";
            }
            
        }
        
        static set_env(){ //defination of static set_env function for the selection of environment
        	
        	ofstream file;
	        file.open("Tourists.txt",ios::app);
	        
        	cout<<"\n\nAdventure and tour would be more exciting and fun if it is according to your comfort. Do share weather in which you would be most comfortable according to which you can choose your tour package:\n1-Natural and green environment\n2-Hot and windy environment\n3-Cold and calm environment\n4-Historical environment\n"<<endl<<"We have arranged various tour packages for our travellers as per their choice of recommendation.\nPlease input environment in the same case and spelling as provided.\n";
		    fflush(stdin);
		    getline(cin,env);
		    file<<"Environment selected by whole group is: "<<env<<"\n";
		    file.close();
		    
        	string myText;
        	
		    if(env=="Natural and green environment"){
		    	
	        	ifstream file1; //to create file in read mode
	        	file1.open("Package1.txt"); //file opened in the read mode
	        	
		        while(getline(file1,myText)){
		        	
		        	cout<<myText<<endl;
				}
				
		    file1.close();
		    
	        }
	        
         	if(env=="Hot and windy environment"){
         		
	        	ifstream file1;
	        	file1.open("Package2.txt");
	        	
		        while(getline(file1,myText)){
		        	
		        	cout<<myText<<endl;
				}
				
		    file1.close();
		    
		    }
		    
	        else if(env=="Cold and calm environment"){
	        	
	        	ifstream file1;
	        	file1.open("Package3.txt");
	        	
		        while(getline(file1,myText)){
		        	
		        	cout<<myText<<endl;
				}
				
		    file1.close();
		    
	        }
	        
        	else if(env=="Historical environment"){
        		
	        	ifstream file1;
	        	file1.open("Package4.txt");
	        	
		        while(getline(file1,myText)){
		        	
		        	cout<<myText<<endl;
				}
				
		    file1.close();
	        }
	        
	}
};
int Tourists :: k=0;
int Tourists :: id=0;
string Tourists :: env="Its NULL";

class Tour_Guides : public Humans{ //derived class 2 of model 1

	protected:
		
		string skills, type;
		int no_of_tour;
		float rating, experience, salary;
		
	public:
		Tour_Guides(){
			
			skills=" ";
			type=" ";
			no_of_tour=0;
			rating=0.0;
			experience=0.0;
			salary=0.0;
			
		}
		Tour_Guides(string name, string gender, string address, string contact_no, string emergency_contact_no, string account_no, int age, string skills, string type,  int no_of_tour, float rating, float experience, float salary) : Humans(name, gender, address, contact_no, emergency_contact_no, account_no, age){
			this->skills = skills;
			this->type = type;
			this->no_of_tour = no_of_tour;
			this->rating = rating;
			this->experience = experience;
			this->salary = salary;
		}
		
		set_skills(string skills){
			this->skills = skills;
		}
		set_type(string type){
			this->type = type;
		}
		set_no_of_tour(int no_of_tour){
			this->no_of_tour = no_of_tour;
		}
		set_rating(float rating){
			this->rating = rating;
		}
		set_experience(float experience){
			this->experience = experience;
		}
		set_salary(int salary){
			this->salary = salary;
		}
		
		string get_skills()const{
			return skills;
		}
		string get_type()const{
			return type;
		}
		int get_no_of_tour()const{
			return no_of_tour;
		}
		float get_rating()const{
			return rating;
		}
		float get_experience()const{
			return experience;
		}
		float get_salary()const{
			return salary;
		}
		
		input_data(){
			
			Humans :: input_data();
			cout<<"\nWhat are your skills?\n";
		    fflush(stdin);
		    getline(cin,skills);
		    
			cout<<"\nWe assign four different types of tour guides that includes: \n"<<endl<<"1- Nature Lovers"<<endl<<"2- Wind Lovers"<<endl<<"3- Winter Lovers"<<endl<<"4- Historical Lovers\n";
		    fflush(stdin);
		    getline(cin,type);
			
			cout<<"\nHow many tours you have conducted uptil now?\n";
		    cin>>no_of_tour;
		    
			cout<<"\nWhat is your tour ratings? (Out of 5)\n";
		    cin>>rating;
		    
			cout<<"\nWhat is your experience? (Mention in years)\n";
		    cin>>experience;
		    
			cout<<"\nWhat is your salary? (Per tour)\n";
		    cin>>salary;
		
		}
		
		perform(){ //defination of perform function for initiating menudriven characterstic
		
			int choice;
			
			cout<<endl<<"Okay, so you have several options, please select the number, WHAT YOU PREFER TO DO: "<<endl<<endl<<"1- Display your data. "<<endl<<"2- Update your data. "<<endl<<"3- Delete your data. "<<endl<<"4- Enter yourself as a tour guide (IF YOU ARE NEW.)"<<endl;
		    cin>>choice;
		    
			if(choice==1){
				
				string name,myText;
				int c=3;
				
				ifstream file2;
				file2.open("Tour_Guides.txt");
				
				cout<<endl<<"Enter your name in the way (Ali Amar): ";
				fflush(stdin);
				getline(cin,name);
				
				while(getline(file2,myText)){
					
		            if(myText==name){
		            	
			        c=1;
	            	}
	            	
	            	if(c==1){
	            		
		                if(myText=="Tour Guide:"){
		               	
		                 	break;
					   }
					   
					    else{
					   	
					        cout<<myText<<endl; //displaying content from file
					   }
					   
				    }
		       }
	        }
	        
			else if(choice==2){
				string myText,name2;
				int c=0;
				
				ifstream file;
				file.open("Tour_Guides.txt");
				ofstream file2;
				file2.open("Tour_Guides2.txt");
				
				cout<<endl<<"Enter your name in the way (Ali Amar): ";
				fflush(stdin);
				getline(cin,name2);
				
				while(getline(file,myText)){
					
					if(myText==name2){
						
						c=1;
						continue;
						
					}
					
					if(myText=="Tour Guide:"){
						
						file2<<myText<<endl; //writing the content to new file
						c=0;
						continue;
						
			    	}
			    	
			    	else if(c==0){
			    		
			    		file2<<myText<<endl;
			    		continue;
			    		
					}
					
			    	else if(c==1){
			    		
			    		continue;
					}
					
                }
                
                file.close();
    			file2.close();
    			
                cout<<endl<<"Start entering your updated information: "<<endl<<endl;
				input_data();
				
    			ofstream file3;
			    file3.open("Tour_Guides2.txt",ios::app);
			    file3<<"\nTour Guide:\n"<<type<<"\n";
    			file3<<name<<"\n"<<gender<<"\n"<<address<<"\n"<<contact_no<<"\n"<<emergency_contact_no<<"\n"<<account_no<<"\n"<<age<<"\n"<<skills<<"\n"<<type<<"\n"<<no_of_tour<<"\n"<<rating<<"\n"<<experience<<"\n"<<salary<<"\n";
   			    file3.close();
    			
				cout<<endl<<"Updated Successfully!!!"<<endl;
				
				remove("Tour_Guides.txt"); //removing original file
                rename("Tour_Guides2.txt", "Tour_Guides.txt"); //renaming new file to original file
                
            }
        
			else if(choice==3){
				string myText,name;
				int c=0;
				
				ifstream file;
				file.open("Tour_Guides.txt");
				ofstream file2;
				file2.open("Tour_Guides2.txt");
				
				cout<<endl<<"Enter your name in the way (Ali Amar): ";
				fflush(stdin);
				getline(cin,name);
				
				while(getline(file,myText)){
					
					if(myText==name){
						
						c=1;
						continue;
						
					}
					if(myText=="Tour Guide:"){
						
						file2<<myText<<endl;
						c=0;
						continue;
						
			    	}
			    	else if(c==0){
			    		
			    		file2<<myText<<endl;
			    		continue;
			    		
					}
			    	else if(c==1){
			    		
			    		continue;
					}
					
                }
                file.close();
    			file2.close();
    			
                cout<<endl<<"Deleted Successfully!!!"<<endl;
                
                remove("Tour_Guides.txt");
                rename("Tour_Guides2.txt", "Tour_Guides.txt");
                
			}
			
			else if(choice==4){
				
				input_data();
				
				ofstream file2;
				file2.open("Tour_Guides.txt",ios::app);
				file2<<"\n\nTour Guide:\n"<<type<<"\n";
				file2<<name<<"\n"<<gender<<"\n"<<address<<"\n"<<contact_no<<"\n"<<emergency_contact_no<<"\n"<<account_no<<"\n"<<age<<"\n"<<skills<<"\n"<<type<<"\n"<<no_of_tour<<"\n"<<rating<<"\n"<<experience<<"\n"<<salary<<"\n";
				
				cout<<endl<<"Your Information is Entered Successfully!!!"<<endl;
				
			}
			
			else{
				
				cout<<"S O R R Y !!!"<<"\t You have entered wrong choice !!! \t Please re enter !!!"<<endl;
				perform();
				
			}
		}
};

class Admin{ //standalone class 

	private:
		
		string guide_name;
		
	public:
		
		Admin(){
			
			guide_name=" ";
		}
		
	assign_Tour_Guide(){ //defining the assign_Tour_Guide function
	    	
		    string phone_lead,name_lead;
		    
		    cout<<endl<<"Please select a member as group leader and enter your name: ";
		    getline(cin,name_lead);
		    cout<<"Please provide phone number also: ";
		    getline(cin,phone_lead);
		    
		    if(Tourists :: get_env()=="Natural and green environment"){ //calling the function from Tourists class
		    	
		    string myText;
	        int c=1;
	        
		    ifstream file;
		    file.open("Tour_Guides.txt");
		    
		    cout<<endl<<"Information is displayed in the format: "<<endl<<"1- Name"<<endl<<"2- Gender"<<endl<<"3- Address"<<endl<<"4- Contact Number"<<endl<<"5- Emergency Contact Number"<<endl<<"6- Account Number"<<endl<<"7- Age"<<endl<<"8- Skills"<<endl<<"10- Type"<<endl<<"11- Number of tours conducted"<<endl<<"12- Ratings"<<endl<<"13- Experience"<<endl<<"14- Salary"<<endl<<endl;
		    
			while(getline(file,myText)){
				
		        if(myText=="Nature Lovers"){
		        	
			        c=1;
			        cout<<myText<<endl;
			        continue;
			        
		       }
		       
	        	else if(myText=="Tour Guide:"){
	        		
		            c=0;
		            continue;
		       }
		       
	            else if(c==0){
	            	
			        continue;
		       }
		       
	            else if(c==1){
	            	
		            cout<<myText<<endl;
	        	}
	            }
	
	        file.close();
	    
	        cout<<"We have following Tour Guides, kindly select one by mentioning their name in exact case: ";
	        getline(cin,guide_name);
	    
	        ofstream file_t;
	        file_t.open("Tourists.txt",ios::app);
	        file_t<<"\nAppointed Tour Guide: "<<guide_name<<"\n\n\n\n";
	        file_t.close();
	    
	        ifstream file_p;
	        file_p.open("Tour_Guides.txt");
	        ofstream file2;
	        file2.open("Tour_Guides2.txt");
	    
	        while(getline(file_p,myText)){
	    	
		    if(myText==guide_name){
			
			file2<<myText<<endl<<"\t\t\tAppointed to group whose Leader Name is: "<<name_lead<<" and Phone Number is: "<<phone_lead<<"\tPlease contact to them as soon as possible.\n";
		    }
		
		    else{
			
			file2<<myText<<endl;
	    	}
       }
    
       file_p.close();
       file2.close();
    
	   remove("Tour_Guides.txt");
       rename("Tour_Guides2.txt", "Tour_Guides.txt");
    
	   cout<<"Your are appointed with "<<guide_name<<" as your TOUR GUIDE."<<endl<<endl<<"Their team will contact you soon..."<<endl;
    
	   }
	
		else if(Tourists :: get_env()=="Hot and windy environment"){
			
		string myText;
	    int c=1;
	    
		ifstream file;
		file.open("Tour_Guides.txt");
		
		cout<<endl<<"Information is displayed in the format: "<<endl<<"1- Name"<<endl<<"2- Gender"<<endl<<"3- Address"<<endl<<"4- Contact Number"<<endl<<"5- Emergency Contact Number"<<endl<<"6- Account Number"<<endl<<"7- Age"<<endl<<"8- Skills"<<endl<<"10- Type"<<endl<<"11- Number of tours conducted"<<endl<<"12- Ratings"<<endl<<"13- Experience"<<endl<<"14- Salary"<<endl<<endl;
		
		while(getline(file,myText)){
			
	    	if(myText=="Wind Lovers"){
			
		    	c=1;
		    	cout<<myText<<endl;
		    	continue;
			
		    }
		
	    	else if(myText=="Tour Guide:"){
			
		        c=0;
		        continue;
	    	}
		
	        else if(c==0){
	    	
		    	continue;
	    	}
		
	        else if(c==1){
	    	
		        cout<<myText<<endl;
		    }
	   }
	
	    file.close();
	   
	    cout<<"We have following Tour Guides, kindly select one by mentioning their name in exact case: ";
	    getline(cin,guide_name);
	   
	    ofstream file_t;
	    file_t.open("Tourists.txt",ios::app);
	    file_t<<"\nAppointed Tour Guide: "<<guide_name<<"\n\n\n\n";
	    file_t.close();
	    ifstream file_p;
        file_p.open("Tour_Guides.txt");
	    ofstream file2;
	    file2.open("Tour_Guides2.txt");
	   
	    while(getline(file_p,myText)){
	    	
		if(myText==guide_name){
			
			file2<<myText<<endl<<"\t\t\tAppointed to group whose Leader Name is: "<<name_lead<<" and Phone Number is: "<<phone_lead<<"\tPlease contact to them as soon as possible.\n";
		}
		
		else{
			
			file2<<myText<<endl;
		}
		
        }
    
    file_p.close();
    file2.close();
    
	remove("Tour_Guides.txt");
    rename("Tour_Guides2.txt", "Tour_Guides.txt");
    
	cout<<"Your are appointed with "<<guide_name<<" as your TOUR GUIDE."<<endl<<endl<<"Their team will contact you soon..."<<endl;
	
	}
		
		else if(Tourists :: get_env()=="Cold and calm environment"){
			
	    	string myText;
	        int c=1;
	    
	    	ifstream file;
    		file.open("Tour_Guides.txt");
    
			cout<<endl<<"Information is displayed in the format: "<<endl<<"1- Name"<<endl<<"2- Gender"<<endl<<"3- Address"<<endl<<"4- Contact Number"<<endl<<"5- Emergency Contact Number"<<endl<<"6- Account Number"<<endl<<"7- Age"<<endl<<"8- Skills"<<endl<<"10- Type"<<endl<<"11- Number of tours conducted"<<endl<<"12- Ratings"<<endl<<"13- Experience"<<endl<<"14- Salary"<<endl<<endl;
	    
			while(getline(file,myText)){
				
    	    	if(myText=="Winter Lovers"){
    			
		        	c=1;
		        	cout<<myText<<endl;
		        	continue;
	     	    }
	     	    
	        	else if(myText=="Tour Guide:"){
		            c=0;
		            continue;
		            
		        }
		        
	            else if(c==0){
	            	
		     	continue;
		        }
		        
	            else if(c==1){
	            	
		    cout<<myText<<endl;
		        }
		        
	   }
	     
	    file.close();
	   
	    cout<<endl<<"We have following Tour Guides, kindly select one by mentioning their name in exact case: ";
	    getline(cin,guide_name);
	   
	    ofstream file_t;
   	    file_t.open("Tourists.txt",ios::app);
    	file_t<<"\nAppointed Tour Guide: "<<guide_name<<"\n\n\n\n";
    	file_t.close();
    	ifstream file_p;
    	file_p.open("Tour_Guides.txt");
    	ofstream file2;
    	file2.open("Tour_Guides2.txt");
    	
    	while(getline(file_p,myText)){
    		
	     	if(myText==guide_name){
	     		
	 	    	file2<<myText<<endl<<"\t\t\tAppointed to group whose Leader Name is: "<<name_lead<<" and Phone Number is: "<<phone_lead<<"\tPlease contact to them as soon as possible.\n";
	    	}
	    	
	    	else{
	    		
			file2<<myText<<endl;
	    	}
        }
        
    file_p.close();
    file2.close();
    
	remove("Tour_Guides.txt");
    rename("Tour_Guides2.txt", "Tour_Guides.txt");
	
	cout<<"Your are appointed with "<<guide_name<<" as your TOUR GUIDE."<<endl<<endl<<"Their team will contact you soon..."<<endl;
    }
    
		else if(Tourists :: get_env()=="Historical environment"){
			
	    	string myText;
	        int c=1;
	        
    		ifstream file;
	    	file.open("Tour_Guides.txt");
	    
			cout<<endl<<"Information is displayed in the format: "<<endl<<"1- Name"<<endl<<"2- Gender"<<endl<<"3- Address"<<endl<<"4- Contact Number"<<endl<<"5- Emergency Contact Number"<<endl<<"6- Account Number"<<endl<<"7- Age"<<endl<<"8- Skills"<<endl<<"10- Type"<<endl<<"11- Number of tours conducted"<<endl<<"12- Ratings"<<endl<<"13- Experience"<<endl<<"14- Salary"<<endl<<endl;
	    
			while(getline(file,myText)){
				
	        	if(myText=="Historical Lovers"){
	        		
		        	c=1;
		        	cout<<myText<<endl;
	        		continue;
	        	}
	        	
	        	else if(myText=="Tour Guide:"){
	        		
		            c=0;
		            continue;
	         	}
		
	            else if(c==0){
	            	
			        continue;
		        }
		        
	            else if(c==1){
	        	    cout<<myText<<endl;
	        	}
    }
	    
	file.close();
	
	cout<<"We have following Tour Guides, kindly select one by mentioning their name in exact case: ";
	getline(cin,guide_name);
	
	ofstream file_t;
	file_t.open("Tourists.txt",ios::app);
	file_t<<"\nAppointed Tour Guide: "<<guide_name<<"\n";
	file_t.close();
	ifstream file_p;
	file_p.open("Tour_Guides.txt");
	ofstream file2;
	file2.open("Tour_Guides2.txt");
	
	while(getline(file_p,myText)){
		
		if(myText==guide_name){
			
			file2<<myText<<endl<<"\t\t\tAppointed to group whose Leader Name is: "<<name_lead<<" and Phone Number is: "<<phone_lead<<"\tPlease contact to them as soon as possible.\n";
		}
		
		else{
			
			file2<<myText<<endl;
		}
		
    }
    
    file_p.close();
    file2.close();
    
	remove("Tour_Guides.txt");
    rename("Tour_Guides2.txt", "Tour_Guides.txt");
    
	cout<<"Your are appointed with "<<guide_name<<" as your TOUR GUIDE."<<endl<<endl<<"Their team will contact you soon...";
	
	}
	}
	
};

class TravelAgency{ //Abstract base class of model 2

public:
	
    virtual void setData(void)=0; //pure virtual functions
    virtual void getData(void)=0;
    
};

class Health:virtual public TravelAgency{ //derived class 1 of model 2

    protected:
    	
    	float doctorPrice;
        float nursePrice;
        float clinicPrice;
        float firstAidPrice;
        double bill;
        
    public:
    	
        Health():doctorPrice(99.9),nursePrice(49.9),clinicPrice(29.9),firstAidPrice(9.9),bill(0){
		
		}
		
        void setdoctorPrice(float doctorPrice){
		    this->doctorPrice=doctorPrice;
		}
        void setnursePrice(float nursePrice){
		    this->nursePrice=nursePrice;
		}
        void setclinicPrice(float clinicPrice){
		    this->clinicPrice=clinicPrice;
		}
        void setfirstAidPrice(float firstAidPrice){
		    this->firstAidPrice=firstAidPrice;
		}
        void setbill(double bill){
		    this->bill=bill;
		}
		
        float getdoctorPrice()const{
		    return doctorPrice;
		}
        float getnursePrice()const{
		    return nursePrice;
		}
        float getclinicPrice()const{
		    return clinicPrice;
		}
		float getfirstAidPrice()const{
		    return firstAidPrice;
		}
        double getbill()const{
		    return bill;
		}
		
        void HealthOption(void){ //defining HealthOption function
        int opt;
        cout<<endl<<"Enter what kind of medical facility you want at your journey:"<<endl;
            cout<<"0.No Medical Facility\n1.Doctor\n2.Nurse\n3.Clinic\n4.First Aid Box"<<endl;
            cin>>opt;
            cout<<endl;

            if(opt==0){ //verifying opt to execute particular statements

                cout<<"We recommend safety, and wish you a very safe trip"<<endl<<endl;
            }

            else if(opt==1){

                bill+=doctorPrice;
                cout<<"Doctor is added to your package"<<endl<<endl;
            }

            else if(opt==2){

                cout<<"Nurse is added to your package"<<endl<<endl;
                bill+=nursePrice;
            }

            else if(opt==3){

                cout<<"Clinic Facility is added to your package"<<endl<<endl;
                bill+=clinicPrice;
            }

            else if(opt==4){

                cout<<"First Aid is added to your package"<<endl<<endl;
                bill+=firstAidPrice;
            }

            else{

                cout<<"Please Enter a valid option."<<endl<<endl;
            }
        }
        
    virtual void setData(void)=0;
    virtual void getData(void)=0;
};

class Transport:virtual public TravelAgency{ //derived class 2 of model 2
	
	protected:

        int rideType;
        float carPrice;
        float jeepPrice;
        float busPrice;
        float airlinePrice;
        float driverSalary;
        float trainPrice;
        double bill1;
        
    public:
    	
        Transport():carPrice(109.9),jeepPrice(129.9),busPrice(29.9),airlinePrice(499.9),driverSalary(4999.9),trainPrice(69.9),bill1(0){
		
		}
		
        void setRideType(int rideType){
		    this->rideType=rideType;
		}
        void setCarPrice(float carPrice){
		    this->carPrice=carPrice;
		}
        void setJeepPrice(float jeepPrice){
		    this->jeepPrice=jeepPrice;
		}
        void setBusPrice(float busPrice){
		    this->busPrice=busPrice;
		}
        void setAirlinePrice(float airlinePrice){
		    this->airlinePrice=airlinePrice;
		}
        void setDriverSalary(float driverSalary){
	        this->driverSalary=driverSalary;
		}
        void setTrainPrice(float trainPrice){
		    this->trainPrice=trainPrice;
		}
        void setBill1(double bill1){
		    this->bill1=bill1;
		}
		
        getRideType()const{
		    return rideType;
		}
        getCarPrice()const{
		    return carPrice;
		}
        float getJeepPrice()const{
		    return jeepPrice;
		}
        float getBusPrice()const{
		    return busPrice;
		}
        float getAirlinePrice()const{
		    return airlinePrice;
		}
        float getDriverSalary()const{
		    return driverSalary;
		}
        float getTrainPrice()const{
		    return trainPrice;
		}
        double getBill1()const{
		    return bill1;
		}
		
    void TransportOption(void){
    	
        int opt;
        
        cout<<endl<<"Enter type of ride you want to take:"<<endl;
        cout<<"1.Sedan\n2.Jeep(4x4)\n3.Bus\n4.Train\n5.AirPlane"<<endl;
        cin>>rideType;

		cout<<endl;
        if(rideType==1){

            cout<<"Enter 1 if you want a Driver, else enter 0"<<endl;
            cin>>opt;
            if(opt==1){

                bill1+=carPrice+driverSalary;
                cout<<endl<<"Sedan and a driver is booked."<<endl<<endl;
            }

            else{

                bill1+=carPrice;
                cout<<endl<<"Sedan is booked."<<endl<<endl;
            }
        }

        else if(rideType==2){

            cout<<"Enter 1 if you want a Driver, else enter 0"<<endl;
            cin>>opt;

            if(opt==1){

                bill1+=jeepPrice+driverSalary;
                cout<<endl<<"Jeep and a driver is booked."<<endl<<endl;
            }

            else{

                bill1+=jeepPrice;
                cout<<endl<<"Jeep is booked."<<endl<<endl;
            }
        }

        else if(rideType==3){

            cout<<endl<<"Enter how many tickets:"<<endl;
            cin>>opt;

            bill1+=(opt*busPrice);
            cout<<endl<<opt<<" Tickets of Bus are booked."<<endl<<endl;
        }

        else if(rideType==4){

            cout<<"Enter how many tickets:"<<endl;
            cin>>opt;

            bill1+=(opt*trainPrice);
            cout<<endl<<opt<<" Tickets of Train are booked."<<endl<<endl;
        }

        else if(rideType==5){

            cout<<"Enter how many tickets:"<<endl;
            cin>>opt;

            bill1+=(opt*airlinePrice);
            cout<<endl<<opt<<" Tickets of Airplane are booked."<<endl<<endl;
        }

        else{

            cout<<endl<<"Please enter a valid option"<<endl<<endl;
        }
    }

    virtual void setData(void)=0;
    virtual void getData(void)=0;
    
};

class Hotel:virtual public TravelAgency{ //derived class 3 of model 2

    protected:

        int hotelType;
        float hotelPrice;
        float resortPrice;
        float restaurantPrice;
        float guestHousePrice;
        float foodPrice;
        double bill2;

    public:
        Hotel():hotelPrice(99.9),resortPrice(89.9),restaurantPrice(69.9),guestHousePrice(89.9),foodPrice(29.9),bill2(0){
		
		}
		
        void setHotelType(int hotelType){
		    this->hotelType=hotelType;
		}
        void setHotelPrice(float hotelPrice){
		    this->hotelPrice=hotelPrice;
		}
        void setResortPrice(float resortPrice){
		    this->resortPrice=resortPrice;
		}
        void setRestaurantPrice(float restaurantPrice){
		    this->restaurantPrice=restaurantPrice;
		}
        void setGuestHousePrice(float guestHousePrice){
		    this->guestHousePrice=guestHousePrice;
		}
        void setFoodPrice(float foodPrice){
		    this->foodPrice=foodPrice;
		}
        void setBill2(double bill2){
		    this->bill2=bill2;
		}
    int getHotelType()const{
		    return hotelType;
		}
        float getHotelPrice()const{
		    return hotelPrice;
		}
        float getResortPrice()const{
		    return resortPrice;
		}
        float getRestaurantPrice()const{
		    return restaurantPrice;
		}
        float getGuestHousePrice()const{
		    return guestHousePrice;
		}
        float getFoodPrice()const{
		    return foodPrice;
		}
        double getBill2()const{
		    return bill2;
		}
		
        void HotelOption(void){
        	
        int opt;
            
        cout<<endl<<"Enter the place you want to stay on your trip:"<<endl;
        cout<<"1.Hotel\n2.Resort\n3.Restaurant\n4.Guest House"<<endl;
        cin>>hotelType;

        if(hotelType==1){

            cout<<endl<<"Do you want to include food?\nEnter 1 for YES,0 for NO:"<<endl;
            cin>>opt;

            if(opt==1){

                bill2+=hotelPrice+foodPrice;
                cout<<endl<<"Food and Hotel are booked."<<endl<<endl;
            }

            else if(opt==0){

                bill2+=hotelPrice;
                cout<<endl<<"Hotel is booked."<<endl<<endl;
            }

            else{

                bill2+=hotelPrice;
                cout<<endl<<"Only Hotel is Included."<<endl<<endl;
            }
        }

        else if(hotelType==2){

            cout<<endl<<"Do you want to include food?\nEnter 1 for YES,0 for NO:"<<endl;
            cin>>opt;

            if(opt==1){

                bill2+=resortPrice+foodPrice;
                cout<<endl<<"Food and Resort are booked."<<endl<<endl;
            }

            else if(opt==0){

                bill2+=resortPrice;
                cout<<endl<<"Resort is booked."<<endl<<endl;
            }

            else{

                bill2+=resortPrice;
                cout<<endl<<"Only Resort is Included."<<endl<<endl;
            }
        }

        else if(hotelType==3){

            cout<<endl<<"Do you want to include food?\nEnter 1 for YES,0 for NO:"<<endl;
            cin>>opt;

            if(opt==1){

                bill2+=restaurantPrice+foodPrice;
                cout<<endl<<"Food and Restaurant are booked."<<endl<<endl;
            }

            else if(opt==0){

                bill2+=restaurantPrice;
                cout<<endl<<"Restaurant is booked."<<endl<<endl;
            }

            else{

                bill2+=restaurantPrice;
                cout<<endl<<"Only Restaurant is Included."<<endl<<endl;
            }
        }

        else if(hotelType==4){

            cout<<endl<<"Do you want to include food?\nEnter 1 for YES,0 for NO:"<<endl;
            cin>>opt;

            if(opt==1){

                bill2+=guestHousePrice+foodPrice;
                cout<<endl<<"Food and Guest house are booked."<<endl<<endl;
            }

            else if(opt==0){

                bill2+=guestHousePrice;
                cout<<endl<<"Guest House is booked."<<endl<<endl;
            }

            else{

                bill2+=guestHousePrice;
                cout<<endl<<"Only Guest House is Included."<<endl<<endl;
            }
        }

        else{

            cout<<endl<<"Enter a valid option please."<<endl<<endl;
        }
    }
    
    virtual void setData(void)=0;
    virtual void getData(void)=0;

};

class Bank:virtual public TravelAgency{ //derived class 4 of model 2

    protected:

        string accNo;
        string accName;
        double total;
        float discount;
        float loan;

    public:
        Bank():total(0),discount(0.8),loan(0){
		
		}
		
        virtual void setData(void)=0;
        virtual void getData(void)=0;
        
        void setaccNo(string accNo){
		    this->accNo=accNo;
		}
        void setaccName(string accName){
		    this->accName=accName;
		}
        void setTotal(double total){
		    this->total=total;
		}
        void setDiscount(float discount){
		    this->discount=discount;
		}
        void setLoan(float loan){
	       this->loan=loan;
		}
		
	    string getaccNo()const{
		    return accNo;
		}
        string getaccName()const{
		    return accName;
		}
        double getTotal()const{
		    return total;
		}
        float getDiscount()const{
		    return discount;
		}
        float getLoan()const{
		    return loan;
		}
		
};

class Services:public Hotel,public Transport,public Bank,public Health{ //derived class 5 of model 2 

    public:
    	 Services(){

		}
		
    void PaymentOption(void){
       
        int opt,n;
        cout<<endl<<"Enter 1 if you have traveled with us before, else enter 0:"<<endl;
        cin>>opt;

        ofstream file_t;
    	file_t.open("Tourists.txt",ios::app);

        if(opt==1){

            cout<<endl<<"Congratulations! You got a discount of 20% on total bill:"<<endl;

            cout<<endl<<"Enter your Account name:"<<endl;
            cin>>accName;
            cout<<"Enter your Account Number:"<<endl;
            cin>>accNo;
            cout<<"Enter 0 to apply for loan, else enter 1:"<<endl;
            cin>>n;

            if(n==0){

                double pay;

                cout<<"Enter your annual income:"<<endl;
                cin>>pay;

                  if(pay>100000){

                    cout<<"Total Amount to be paid:"<<total*discount<<endl;
                    file_t<<"Total Amount to be paid:"<<total*discount<<"\n"; //calculating amount to be paid
                    cout<<"Loan approved, You have to pay 10,000 per month."<<endl;

                  }


                  else{
                    cout<<"Total Amount to be paid:"<<total*discount<<endl;
                    file_t<<"Total Amount to be paid:"<<total*discount<<"\n";
                    cout<<"Loan can not be granted, pay your dues."<<endl;
                    PaymentOption(); //calling PaymentOption function

                  }
            }

            else if(n==1){

                cout<<endl<<"Total Amount to be paid:"<<total<<endl;
                file_t<<"Total Amount to be paid:"<<total*discount<<"\n";
                cout<<"Payment has done through Bank service.\nThank-you for coming, Have a safe journey with us!"<<endl;

            }
        }

        else if(opt==0){

            cout<<"Enter your Account name:"<<endl;
            cin>>accName;
            cout<<"Enter your Account Number:"<<endl;
            cin>>accNo;
            cout<<"Enter 0 to apply for loan, else enter 1:"<<endl;
            cin>>n;

            if(n==0){

                double pay;

                cout<<"Enter your annual income:"<<endl;
                cin>>pay;

                  if(pay>100000){

                    cout<<endl<<"Total Amount to be paid:"<<total<<endl;
                    file_t<<"Total Amount to be paid:"<<total*discount<<"\n"; 
                    cout<<"Loan approved, You have to pay 10,000 per month."<<endl;

                  }

                  else{

                    cout<<endl<<"Total Amount to be paid:"<<total<<endl;
                    file_t<<"Total Amount to be paid:"<<total*discount<<"\n";
                    cout<<"Loan can not be granted, pay your dues."<<endl;
                    PaymentOption();

                  }
            }

            else if(n==1){

                cout<<endl<<"Total Amount to be paid:"<<total<<endl;
                file_t<<"Total Amount to be paid:"<<total*discount<<"\n";
                cout<<"Payment has done through Bank service.\nThank-you for coming, Have a safe journey with us!"<<endl;

            }
        }

        file_t.close();
    }

    void Options(void){ //defining Options function

        int f;

        A:
            cout<<endl<<"Choose the following options:"<<endl;
            cout<<"1.Health Options\n2.Transport Options\n3.Hotel Options\n4.Payment Options\n5.Updation(Only for Admin Use)"<<endl;
            cin>>f;

            switch(f){ //using switch case to execute particular option

            case 1:
                HealthOption(); //calling HealthOption function
                goto A; //to make function run again 
                break;

            case 2:
                TransportOption(); //calling TransportOption function
                goto A;
                break;

            case 3:
                HotelOption(); //calling HotelOption function
                goto A;
                break;

            case 4:
                Totaling(); //calling Totaling function
                PaymentOption();
                goto B; //to exit
                break;

            case 5:
                setData(); //calling setData function
                break;

            default:
                goto B; 
                break;
            }

       B:
           cout<<"Exit"<<endl;
    }

    void Totaling(void){
        total=bill1+bill2+bill;
    }

    void setData(void){ //defining setData function

        string email;
        string password;

        cout<<"TO UPDATE THE DATA PLEASE LOG-IN TO YOUR MANAGEMENTS ACCOUNT:"<<endl;

        A:
        cout<<"Email:";
        cin>>email;
        cout<<endl<<"Password:";
        cin>>password;

        if(email=="k200165@nu.edu.pk"||email=="k200207@nu.edu.pk"||email=="k200247@nu.edu.pk"){

            B:
            if(password=="oopproject"){

            	int g;

            	cout<<"What would you like to update:"<<endl;
            	cout<<"1-Doctor price\n2-Nurse price\n3-Clinic price\n4-First aid price\n5-Car price\n6-Jeep price\n7-Bus price\n8-Airline price\n9-Driver slary\n10-Train price\n11-Hotel price\n12-Resort price\n13-Restaurant price\n14-Guest house price\n15-Food price\n16-Discount\n";
            	cin>>g;

            	switch(g){

            	case 1:
				cout<<"Enter the updated doctor price: ";
				cin>>doctorPrice;
				setdoctorPrice(doctorPrice);
				break;

				case 2:
				cout<<"Enter the updated nurse price: ";
				cin>>nursePrice;
				setnursePrice(nursePrice);
				break;

				case 3:
				cout<<"Enter the updated clinic price: ";
				cin>>clinicPrice;
				setclinicPrice(clinicPrice);
				break;

				case 4:
				cout<<"Enter the updated firstaid price: ";
				cin>>firstAidPrice;
				setfirstAidPrice(firstAidPrice);
				break;

				case 5:
				cout<<"Enter the updated car price: ";
				cin>>carPrice;
				setCarPrice(carPrice);
				break;

				case 6:
				cout<<"Enter the updated jeep price: ";
				cin>>jeepPrice;
				setJeepPrice(jeepPrice);
				break;

				case 7:
				cout<<"Enter the updated bus price: ";
				cin>>busPrice;
				setBusPrice(busPrice);
				break;

				case 8:
				cout<<"Enter the updated airline price: ";
				cin>>airlinePrice;
				setAirlinePrice(airlinePrice);
				break;

				case 9:
				cout<<"Enter the updated driver salary: ";
				cin>>driverSalary;
				setDriverSalary(driverSalary);
				break;

				case 10:
				cout<<"Enter the updated train price: ";
				cin>>trainPrice;
				setTrainPrice(trainPrice);
				break;

				case 11:
				cout<<"Enter the updated hotel price: ";
				cin>>hotelPrice;
				setHotelPrice(hotelPrice);
				break;

				case 12:
				cout<<"Enter the updated resort price: ";
				cin>>resortPrice;
				setResortPrice(resortPrice);
				break;

				case 13:
				cout<<"Enter the updated restaurant price: ";
				cin>>restaurantPrice;
				setRestaurantPrice(restaurantPrice);
				break;

				case 14:
				cout<<"Enter the updated guest house price: ";
				cin>>guestHousePrice;
				setGuestHousePrice(guestHousePrice);
				break;

				case 15:
				cout<<"Enter the updated food price: ";
				cin>>foodPrice;
				setFoodPrice(foodPrice);
				break;

				case 16:
				cout<<"Enter the updated discount: ";
				cin>>discount;
				setDiscount(discount);
				break;

				default:
                goto C; //to make function run again if the choice is other than specified one
				break;
				}
            }

            else{

                cout<<endl<<"Incorrect Password, Try again";
                goto B;
            }
        }

        else{

            cout<<endl<<"Incorrect Email, try again";
            goto A;
        }

        C:
            cout<<endl<<"Changes have made successfully"<<endl;
    }

        void getData(void){ //defining getData function

    	    cout<<"PRICE LIST!!!"<<endl;
            cout<<"DOCTOR PRICE: "<<getdoctorPrice()<<endl;
            cout<<"NURSE PRICE: "<<getnursePrice()<<endl;
            cout<<"CLINIC PRICE: "<<getclinicPrice()<<endl;
            cout<<"FISRT AID PRICE: "<<getfirstAidPrice()<<endl;
            cout<<"CAR PRICE: "<<getCarPrice()<<endl;
            cout<<"JEEP PRICE: "<<getJeepPrice()<<endl;
            cout<<"BUS PRICE: "<<getBusPrice()<<endl;
            cout<<"AIR LINE PRICE: "<<getAirlinePrice()<<endl;
            cout<<"DRIVER SALARY PRICE: "<<getDriverSalary()<<endl;
            cout<<"TRAIN PRICE: "<<getTrainPrice()<<endl;
            cout<<"HOTEL PRICE: "<<getHotelPrice()<<endl;
            cout<<"RESORT PRICE: "<<getResortPrice()<<endl;
            cout<<"RESTAURANT PRICE: "<<getRestaurantPrice()<<endl;
            cout<<"GUEST HOUSE PRICE: "<<getGuestHousePrice()<<endl;
            cout<<"FOOD PRICE: "<<getFoodPrice()<<endl;
            cout<<"DISCOUNT: "<<getDiscount()<<endl;

    }
    
};

void fun(void){ //defining fun function
    
    string type;
	
	cout<<"H E L L O !!!"<<endl<<"Please let us know that who you are???"<<endl<<endl<<"1- T O U R I S T S"<<endl<<"2- T O U R  G U I D E"<<endl<<endl<<"Please write in as it is case as provided.."<<endl;
	getline(cin,type); //asking for the type of user
	
	if(type=="TOURISTS"){
		
		ofstream file;
	    file.open("Tourists.txt",ios::app);
		file<<"\n\n\nN E W   G R O U P!!!!!\n\n"; 
		file.close();
		
		::dec=1;
		int no_of_members;
		
		cout<<"\t\t\t\t\t\t\tLooking for not just a tour but an adventure also??\n\nThen what are you waiting for? Just grab your phone and make it for resgistrations.\n\nSo, here we are offering various tours of Pakistan as per your interests and concern. Tour that we are going to provide you is for 12 OR 14 days in which we will try our best to let you explore and adventure various locations of Pakistan that are mesmerizing. Information that you will provide will entertain you as per that.\n\nMake the best of this opportunity to make it a lifetime rememberable experience.";
	    cout<<"Here are some policies related to tour:\n\nMEMBERS ALLOWED:\nMinimum: 10 Members.\nMaximum: 30 Members.\n\nDISCOUNT POLICY:\nOne more interesting thing we have for you is the special discount offer that awaits for those who have maximum 30 people in their troops. They will be given a discountof 20%%.\n\nREFUND POLICY:\nIn case of cancellation of your tour you will get refund if you cancel your booking before below days of tour:\n15 Days: 50%%\n10 Days: 25%%\n\nCHILDREN POLICY:\nTroops who are carying children must take care of them and their belongings. In case of winter, you must have enough clothes andother basic necessities as per need. We will NOT be responsible for any disruptions.\n\nFOOD POLICY:\nYou must carry your own food items and other basics with yourself. But availability of food by us is for three times a day. You can opt as per your range.\n\nHOTEL'S POLICY:\nResting places or hotels will be allotted as according to your class and range. Once you will be done with your registeration you will be informed about your hotels\nthrough E-mail.\n\nPAYMENT POLICY:\nYou can pay your charges via:\n1-Cash\n2-Cheque\nNOTE: You must pay your charges atleast 1 month before your tour.\n";
		cout<<"\n\nHow many members will be in your group? \n";
	    cin>>no_of_members; //asking for number of members in group
		
		Tourists tourists[no_of_members]; //creating array of objects for Tourists class
		string cnic[no_of_members]; //creating seperate array for CNIC
		
		for(int i=0; i<no_of_members; i++){ //loop working till number of members
			
			tourists[i].input_data(); //calling input_data function
			cout<<endl<<"Please enter your CNIC number: ";
			getline(cin,cnic[i]);
		}
		
		for(int i=0; i<no_of_members; i++){
			
			Tourists tourists[i]=Tourists(cnic[i]); //calling parameterized overloaded constructor to set CNIC
		}
		
		
		Tourists :: set_env();
		
		Admin ad; //creating object of Admin class
	    ad.assign_Tour_Guide(); //calling assign_Tour_Guide function
	    
	}
	
	else if(type=="TOUR GUIDE"){ 
		
		Tour_Guides tg; //creating object of Tour_Guides class
		tg.perform(); //calling perform function
	}
	
}

void gotoxy(int x, int y){ //gotoxy function is used to move the cursor on the x/y axis

  static HANDLE h = NULL;
  if(!h)
  h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c); //here h stands for x-axis while c stands for y axis
  
}

void Title(void){ //function made for the title page
 	
    int i;
    char p[]=" WELCOME TO OUR TOUR GUIDING CONSOLE BASED MANAGEMENT SYSTEM ";
    gotoxy(20,10); //20 spaces on x-axis and 10 on y-axis
    
    for(i=0;i<12;i++){
	
        Sleep(55); //sleep function is used to delay the timing for the appearance of colon(:)
        cout<<":";
    }

    for(i=0;i<strlen(p);i++){
	
        Sleep(50);
        cout<<p[i];
    }

    for(i=0;i<12;i++){
	
        Sleep(55);
        cout<<":";
    }

    char d[]={"A Project developed by"};
    gotoxy(49,0);

    for(i=0;i<strlen(d);i++){
	
        Sleep(50);
        cout<<d[i];
    }

    char S[]={"Sanan Baig 20K-0165"}; //use of char to enter every element with a delay
    char I[]={"Insha Samnani 20K-0247"};
    char Y[]={"Yusra Adam 20K-0207"};
    gotoxy(50,1);

    for(i=0;i<strlen(S);i++){
	
        Sleep(50);
        cout<<S[i]; //printing sanan
    }

    gotoxy(50,2);

    for(i=0;i<strlen(I);i++){

        Sleep(50);
        cout<<I[i]; //printing Insha

    }
	  
    gotoxy(50,3);

    for(i=0;i<strlen(Y);i++){
	
        Sleep(50);
        cout<<Y[i]; //printing yusra
    }
}

int main(){ //start of main body

    system("color f4"); //setting color for console
    Title(); //calling title function
    system("CLS");
    
    fun(); //calling fun function
    
    if(::dec==1){ //check to initiate model 2 if type was TOURISTS
    	
    	Services *S,S1; //craeting pointer and object of Services class
    	S=new Services[100]; //creating array of objects of service class
        TravelAgency *T; //creating abstract base class pointer of TravelAgency class
        T=&S1; //assigning address of Services class object to TravelAgency class
        T->getData(); //calling derived class getData function through base class pointer
    	S->Options(); //calling Options function
    	
	}
	
    return 0;
} //end of main body
