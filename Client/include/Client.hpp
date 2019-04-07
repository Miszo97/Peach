//
// Created by Artur Spek on 2019-03-19.
//

#ifndef PEACH_CLIENT_HPP
#define PEACH_CLIENT_HPP


#include <iostream>
#include "ClientConnector.hpp"

struct User{
    User(const std::string& login, const std::string& password);

    User();

    std::string login;
    std::string password;
};

class Client {
public:
    Client(){
        std::cout<<"Starting client...\n";
    }

    virtual ~Client() {
        std::cout<<"Client destructor...\n";
    }

    int login(const std::string& login, const std::string& password);
    void logout();
    int sendMessage(const std::string& message);

private:
    ClientConnector clientConnector;
    User user;

};



#endif //PEACH_CLIENT_HPP
