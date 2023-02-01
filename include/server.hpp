/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:04:09 by amantara          #+#    #+#             */
/*   Updated: 2023/02/01 20:04:10 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP

#include <iostream>


bool is_valid_args(int argc, char **argv);

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