#ifndef __platform
#define __platform

#include <bits/stdc++.h>
#include "platform.h"

#include <string>
using std::string;

namespace sample{
	
  class platform {
		
    private:
		string username;
		string password;

	public:
		virtual int login()=0;
		string access_username();
		string access_password();
		void input_username();
		void input_password();
		void set_username(string);
		void published();
		void dessiminate();

  };

}

#endif
