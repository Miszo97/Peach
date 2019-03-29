//
// Created by Artur Spek on 2019-03-19.
//

#ifndef PEACH_CLIENT_HPP
#define PEACH_CLIENT_HPP


#include <iostream>

class Client {
public:
    Client(){
        std::cout<<"Starting client...\n";
    }

    virtual ~Client() {
        std::cout<<"Client destructor...\n";
    }

    int login(const std::string& login, const std::string& password);

private:

};


#endif //PEACH_CLIENT_HPP
