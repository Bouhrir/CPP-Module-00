/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:51:37 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/17 20:51:13 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av) {
	if (ac > 1){
		std::string str;
		int i = 1;
		while (av[i]){
			str = av[i];
			for(int j = 0; str[j];j++){
				std::putchar(std::toupper(str[j]));
			}
			i++;
		}
		std::putchar('\n');
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
