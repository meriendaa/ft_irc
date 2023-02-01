/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:03:49 by amantara          #+#    #+#             */
/*   Updated: 2023/02/01 20:03:51 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Server.hpp"

int main(int argc, char **argv)
{

    if (!is_valid_args(argc, argv)){
        return (1);
    }

    std::cout << "Todos los argumentos son validos" << std::endl;

    Server server(std::stoll(argv[1]), argv[2]);
    // server.setPass(password);
    // server.setPort(port);

}