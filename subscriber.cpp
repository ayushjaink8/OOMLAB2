#include <bits/stdc++.h>

#include "subscriber.h"
#include"platform.h"

#include <fstream>
#include <string>

using namespace std;
using std::string;

namespace sample{

    int subscriber::login(){

        int cnt=0;
		string us,pass;

        fstream input("subdata.txt");

        while(input>>us>>pass){

            if(us==access_username() && pass==access_password()){
                system("clear");
                cout<<"\nLogin successful.\nHello "<<us<<'\n';
                cnt=1;
                input.close();
            }

            else if(us==access_username()){
                cnt=-1;
            }

            else{
                cnt=0;
            }

        }

        if(cnt==-1){
            system("clear");
            cout<<'\a';
            cout<<"Sorry :(\n";
            cout<<"Password is incorrect!\nLogin Failed.\nPlease try again later.\n";
            input.close();
            return 0;
        }

        else if(cnt==0){
            cout<<'\a';
            cout<<"Subscriber could not be found.\nTry again with correct credentials or register as a new Publisher\n";
            return 0;
        }

        return 1;
    }



    int subscriber::signup(){
        
		int cntt=0;
        string us,pass;

        fstream input("subdata.txt",ios::in);

        while(input>>us>>pass){

            if(us==access_username()){
                cout<<'\a';
                cout<<"Username already taken\n";
                cout<<"Try again with a different username...\n";
                return 0;
            }

        }

        input.close();
        
		// fstream output("database.txt",ios::app);
        // output<<'\n'<<access_username()<<' '<<access_password();
        // output.close();
        
        system("clear");
        cout<<"Successfully registered :)\nContinue using this Platform ...\n";
        
		return 1;
    }

	void subscriber::receive_information(string id, string msg){
		
		cout<<"\n\nMessage Consumed\n";

		cout<<"Publisher's ID: "<<id<<"\n";
		cout<<"Message: "<<msg<<"\n";

	}

}
