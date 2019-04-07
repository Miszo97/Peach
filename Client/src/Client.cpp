//
// Created by Artur Spek on 2019-03-19.
//

#include <Client.hpp>

int Client::login(const std::string &login, const std::string &password) {
    return 0;
}

User::User(const std::string& login, const std::string& password) : login(login), password(password) {}

User::User() : login("login"), password("password") {}
