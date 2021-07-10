#include <bits/stdc++.h>

#include "platform.h"
#include "publisher.h"
#include "subscriber.h"

using namespace std;
using namespace sample;

int main() {
  
  cout << "\n*** A Publish/Subscribe platform! ***\n\n";

  bool flag=true;
  int user=0;

  while(flag){

	cout<<"\n";
	cout<<"press 1 to Login as Publisher\n";
	cout<<"press 2 to Login as Subscriber\n";
	cout<<"press 3 to Signup as a new Publisher\n";
	cout<<"press 2 to Signup as a new Subscriber\n\n";
	cout<<"Enter: ";

	user=0; // to check if the user if publisher(1) or subscriber(2)

	int t=0;
	cin>>t;

  	cout<<"\n";

    if(t==1){
      
      flag=false;
	  system("clear");
		publisher old_publisher;

		cout<<"ENTER USERNAME : ";
		old_publisher.input_username();
		cout<<"ENTER PASSWORD : ";
		old_publisher.input_password();
		user=1;

		if(!old_publisher.login()){
			flag=true;
			user=0;
		}

    }

    else if(t==2){

      flag=false;
	  system("clear");
		subscriber old_subscriber;

		cout<<"ENTER USERNAME : ";
		old_subscriber.input_username();
		cout<<"ENTER PASSWORD : ";
		old_subscriber.input_password();
		user=2;

		if(!old_subscriber.login()){
			flag=true;
			user=0;
		}

    }

	else if(t==3){

      flag=false;
	  system("clear");
		publisher new_publisher;

		cout<<"ENTER USERNAME : ";
		new_publisher.input_username();
		cout<<"ENTER PASSWORD : ";
		new_publisher.input_password();
		user=1;

		if(!new_publisher.signup()){
			flag=true;
			user=0;
		}

    }

	else if(t==4){

      flag=false;
	  system("clear");
		subscriber new_subscriber;

		cout<<"ENTER USERNAME : ";
		new_subscriber.input_username();
		cout<<"ENTER PASSWORD : ";
		new_subscriber.input_password();
		user=1;

		if(!new_subscriber.login()){
			flag=true;
			user=0;
		}

    }

	else{
		cout<<"\n INVALID INPUT! \n\n";
		cout<<"Please choose only from the four options as 1, 2, 3 or 4 ...\nTry again\n";
	}

  }


  cout<<"\n\n Creating a platform for you!\n";
  cout<<"Performing Platform Operations...";

  subscriber platform;
  platform.published();
  platform.dessiminate();
  cout<<"\n";


  if(user==1){  // publisher
  	cout<<"Since you are a publisher, so \n";
  	cout<<"Functions you can Perform: \n\n";
	
	bool ff=true;

	while(ff){
		cout<<"press 1 to execute put_information()\n";
		cout<<"Enter: ";
		int t=0;
		cin>>t;

		cout<<"\n";

		if(t==1){
			ff=false;
			publisher temp;
			temp.put_information();
		}

		else{
			cout<<"\nINVALID RESPONSE\nTry again...\n\n";
		}

	}
	

  }

  else if(user==2){   //// subscriber
	cout<<"Since you are a subscriber, so \n\n";
	cout<<"Showing List of current publishers: \n";
	string us,pass;
	fstream input("pubdata.txt");
	int ctr=1;

	while(input>>us>>pass){
		cout<<ctr<<") "<<us<<"\n";
		ctr++;
	}

	cout<<"\n\n";
	cout<<"Functions you can Perform: \n\n";
	
	bool ff=true;

	while(ff){

		cout<<"Press 1 to execute receive_information()\n";
		cout<<"Enter: ";
		int t=0;
		cin>>t;

		if(t==1){
			ff=false;
			cout<<"\nEnter publisher name: ";
			string s;
			cin>>s;

			subscriber temp;
			temp.receive_information("1221",s);
		}

		else{
			cout<<"\nINVALID RESPONSE\nTry again...\n\n";
		}
		
	}

  }

  cout<<"\n *** Thank You for visiting Publish/Subscribe platform ***\n\n";

  return 0;
}