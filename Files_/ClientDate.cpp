//
//  ClientDate.cpp
//  26.01.24
//
//  Created by Ralitsa Toneva on 26.01.24.
//

#include "ClientDate.hpp"


ClientData::ClientData( int accountNumberValue,
   std::string lastNameValue, std::string firstNameValue, double balanceValue )
{
   setAccountNumber( accountNumberValue );
   setLastName( lastNameValue );
   setFirstName( firstNameValue );
   setBalance( balanceValue );
}

int ClientData::getAccountNumber() const{
   return accountNumber;
}
void ClientData::setAccountNumber( int accountNumberValue ){
   accountNumber = accountNumberValue;
}
std::string ClientData::getLastName() const{
   return lastName;
}
void ClientData::setLastName( std::string lastNameString ){
   const char *lastNameValue = lastNameString.data();
   int length = lastNameString.size();
   length = ( length < 15 ? length : 14 );
   std::strncpy( lastName, lastNameValue, length );
   lastName[ length ] = '\0';
}
std::string ClientData::getFirstName() const{
   return firstName;
}
void ClientData::setFirstName( std::string firstNameString ){
   // copy at most 10 characters from string to firstName
   const char *firstNameValue = firstNameString.data();
   int length = firstNameString.size();
   length = ( length < 10 ? length : 9 );
   std::strncpy( firstName, firstNameValue, length );
   firstName[ length ] = '\0'; // append null character to firstName
}
double ClientData::getBalance() const{
   return balance;
}
void ClientData::setBalance( double balanceValue ){
   balance = balanceValue;
}

