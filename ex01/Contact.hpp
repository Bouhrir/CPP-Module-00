/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:57:56 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/17 21:02:03 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Contact 
{
	private :
		string firstname;
		string lastname;
		string nickname;
		string phonenumber;
		string darksecret;

	public :
		Contact();
		void SETfirstname(string value);
		string GETfirstname();
		
		void SETlastname(string value);
		string GETlastname();
		
		void SETnickname(string value);
		string GETnickname();
		
		void SETphonenumber(string value);
		string GETphonenumber();
		
		void SETdarksecret(string value);
		string GETdarksecret();
		~Contact();
};

#endif