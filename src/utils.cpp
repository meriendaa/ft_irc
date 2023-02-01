/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:04:02 by amantara          #+#    #+#             */
/*   Updated: 2023/02/01 20:04:04 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Server.hpp"

void show_err(std::string err)
{
    std::cerr << err << std::endl;
    exit(0); 
}

bool is_valid_args(int argc, char **argv) {
    if(argc != 3)
    {
        show_err("Error Numero de argumentos");
        return false;
    }
    int port = std::stoll(argv[1]);
    std::string password = argv[2];
    if(port <= 1023){
        show_err("Error el numero de puerto reservado.");
        return false;
    } else if(port > 65535) {
        show_err("Error numero puerto demasiado alto.");
        return false;
    } else if(!password.size()) {
        show_err("Contraseña vacia");
        return false;
    }
    //All values are correct
    return true;
}