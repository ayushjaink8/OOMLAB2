#include<bits/stdc++.h>
#include<fstream>
#include"platform.h"
using namespace std;


namespace sample{
	
	void platform::input_username(){
		cin>>username;
	}

	void platform::input_password(){
		cin>>password;
	}

	string platform::access_username(){
		return username;
	}

	string platform::access_password(){
		return password;
	}

	void platform::set_username(string us){
		username=us;
	}
	void platform::published(){
		cout<<"\n Receiving this message from published() function\n";
	}
	void platform::dessiminate(){
		cout<<"\n Receiving this message from dessiminate() function\n";
	}

}
