//
// Created by Artur Spek on 2019-03-19.
//

#include "../include/ClientConnector.hpp"
#include <zmq.hpp>

ClientConnector::ClientConnector() :
                                    ctext(new zmq::context_t(1)),
                                    sub_soc(new zmq::socket_t(*ctext, ZMQ_SUB)),
                                    req_soc(new zmq::socket_t(*ctext, ZMQ_REQ)) {}

ClientConnector::~ClientConnector() {

}

void ClientConnector::setEndpoint(const Endpoint &ep) {
    ClientConnector::ep = ep;
}


Endpoint::Endpoint(const std::string &ip, const std::string &port) : ip(ip), port(port) {}

Endpoint::Endpoint() : ip("127.0.0.1"), port("7478") {}
