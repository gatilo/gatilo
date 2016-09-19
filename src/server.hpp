//
// Created by ashokpant on 9/18/16.
//

#ifndef GATILO_SERVER_HPP
#define GATILO_SERVER_HPP

#include <iostream>

namespace gatilo {
    class Server {
    public:
        Server(unsigned short port, size_t numThreads, long timeoutRequest = 5, long timeoutContent = 300) {
            //todo
            std::cout << "server initializing..." << std::endl;
        }

        virtual ~Server() { }

        void start() {
            //todo
        }

        void stop() {
            //todo
        }
    };
}
#endif //GATILO_SERVER_HPP
