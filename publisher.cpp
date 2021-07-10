#include <bits/stdc++.h>

#include "publisher.h"
#include"platform.h"

#include <fstream>
#include <string>

using namespace std;
using std::string;
namespace sample
{
    int publisher::login(){

        int cnt=0;
		string us,pass;

        fstream input("pubdata.txt");

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
            cout<<"Publisher could not be found.\nTry again with correct credentials or register as a new Publisher\n";
            return 0;
        }

        return 1;
    }



    int publisher::signup(){
        
		int cntt=0;
        string us,pass;

        fstream input("pubdata.txt",ios::in);

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

	void publisher::put_information(){
		cout<<"\nGenerated Data...\n";
	}

}
