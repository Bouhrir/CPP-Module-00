/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 22:41:53 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:35 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void fill(string str, string &line){
	cout << str;
	std::getline(std::cin, line);
	if (std::cin.eof())
			exit('x');
	while(1)
	{
		if (!line.empty()){
			break;
		}
		else {
			cout << str;
			std::getline(std::cin, line);
			if (std::cin.eof())
				exit('x');
		}
	}	
}

void sub(string str){
	if (str.length() > 10){
		str[9] = '.';
		cout << str.substr(0,10);
	}
	else
		cout << str;
}

void	info(string &line, Contact contact, PhoneBook phone){
	cout << "enter 'INDEX'\n";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit('x');
	if (line.c_str()[0] >= '0' && line.c_str()[0] <= '7')
	{
		int nb = std::atoi(line.c_str());
		if (!line.empty() &&  (nb >= 0 && nb <= 7)){
			cout << "first name :"<< phone.get_contact(contact, nb).GETfirstname() << endl;
			cout << "last name :" << phone.get_contact(contact, nb).GETlastname() << endl;
			cout << "nick name :" << phone.get_contact(contact, nb).GETnickname() << endl;
			cout << "phone number :" << phone.get_contact(contact, nb).GETphonenumber() << endl;
			cout << "darket secret :" << phone.get_contact(contact, nb).GETdarksecret() << endl;
		}	
	}
}

void	book_index(Contact contact, PhoneBook phone){
	cout << "-------------Phone Book List-------------" << endl;
	cout << "   Index   " << "  F.Name   " << "   L.Name  " << "   N.Name   " << endl;
	for(int i = 0;i < 8;i++)
	{
		cout << "|" << std::setw(10) << i;
		cout << "|" << std::setw(10); sub(phone.get_contact(contact, i).GETfirstname());
		cout << "|" << std::setw(10); sub(phone.get_contact(contact, i).GETlastname());
		cout << "|" << std::setw(10); sub(phone.get_contact(contact, i).GETnickname());
		cout << "|" << endl;
	}
	
}

int main()
{
	Contact	 contact;	
	PhoneBook phone;
	string  line;
	int i = 0;
	
	while (true){
		cout << "Enter: 'ADD' | 'SEARCH' | 'EXIT'" << endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
			exit('x');
		if (line == "ADD")
		{
			cout << "----add new contact----" << endl;
			fill("first name: ", line);
			contact.SETfirstname(line);
			fill("last name: ", line);
			contact.SETlastname(line);
			fill("nick name: ", line);
			contact.SETnickname(line);
			fill("phone number: ", line);
			contact.SETphonenumber(line);
			fill("darkest secret: ", line);
			contact.SETdarksecret(line);
			phone.add_contact(contact, i);
			i++;
			if (i == 8)
				i = 0;
		}
		if (line == "SEARCH"){
			book_index(contact, phone);
			info(line, contact, phone);
		}
		if (line == "EXIT"){
			exit('x');
		}
	}
	return (0);
}