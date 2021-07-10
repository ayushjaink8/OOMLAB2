#ifndef __publisher
#define __publisher

#include<bits/stdc++.h>
#include"platform.h"

using namespace std;

namespace sample{

    class publisher: public platform{

        private:
            string aa;

        public:
            int login();
            int signup();
			void put_information();

    };
}


#endif // __publisher
