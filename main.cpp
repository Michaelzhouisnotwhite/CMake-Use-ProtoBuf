#include <iostream>
#include "proto/data.pb.h"
int main(int args, char* argv[])
{   
    Contact contact;
    auto person = contact.add_persons();
    person->set_name("abc");

    std::puts("hello world");
    contact.PrintDebugString();
    return 0;
}