#ifndef __subscriber
#define __subscriber

#include<bits/stdc++.h>
#include"platform.h"

using namespace std;

namespace sample{

    class subscriber: public platform{

        private:
            string aa;

        public:
            int login();
            int signup();
			void receive_information(string, string);

    };
}


#endif // __subscriber
