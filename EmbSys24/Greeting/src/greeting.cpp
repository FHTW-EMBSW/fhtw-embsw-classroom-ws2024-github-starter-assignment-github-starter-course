#include <cstdlib>
#include <cstdio>

#include "greeting.h"

#include <sstream>

using namespace std;

string greet(const char *name)
{
    string ret = "Hello World!";

    if (name != nullptr && strlen (name))
    {
        stringstream ss;
        ss << "Hello " << name << "!\n";

        ret = ss.str();
    }

    return ret;
}