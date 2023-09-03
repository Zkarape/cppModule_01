/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:17:05 by zkarapet          #+#    #+#             */
/*   Updated: 2023/09/03 18:36:04 by zkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl   K;

    K.complain("INFO");
    K.complain("WARNING");
    K.complain("ERROR");
    K.complain("DEBUG");
    K.complain("INFO");
    K.complain("WARNING");
    K.complain("ERROR");
}
