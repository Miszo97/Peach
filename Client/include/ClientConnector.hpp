//
// Created by Artur Spek on 2019-03-19.
//

#ifndef PEACH_CLIENTCONNECTOR_HPP
#define PEACH_CLIENTCONNECTOR_HPP

#include <string>
#include <zmq.hpp>

#include <zmq.hpp>

struct Endpoint{

    Endpoint(const std::string &ip, const std::string &port);

    Endpoint();

    std::string ip;
    std::string port;

};

class ClientConnector {
public:
    ClientConnector();

    virtual ~ClientConnector();

    void setEndpoint(const Endpoint &ep);

private:

    void connectToEndpoint();

    std::unique_ptr<zmq::context_t> ctext;

    std::unique_ptr<zmq::socket_t> req_soc;
    std::unique_ptr<zmq::socket_t> sub_soc;

    Endpoint ep;


};


#endif //PEACH_CLIENTCONNECTOR_HPP
