#ifndef SERVER_HPP
# define SERVER_HPP

#include <iostream>

class Server{
    private:
        int port;
        std::string password;
    public:
        Server(int port, std::string password);
        ~Server();
        int getPort() const;
        void setPort(int port);
        std::string getPass() const;
        void setPass(std::string password);
};


#endif