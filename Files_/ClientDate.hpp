//
//  ClientDate.hpp
//  26.01.24
//
//  Created by Ralitsa Toneva on 26.01.24.
//

#ifndef ClientDate_hpp
#define ClientDate_hpp

#include <stdio.h>
#include <string>

class ClientData
{
public:
   ClientData( int = 0, std::string = "", std::string = "", double = 0.0 );

   void setAccountNumber( int );
   int getAccountNumber() const;
   void setLastName( std::string );
   std::string getLastName() const;
   void setFirstName( std::string );
   std::string getFirstName() const;
   void setBalance( double );
   double getBalance() const;
    
private:
   int accountNumber;
   char lastName[15];
   char firstName[10];
   double balance;
};

#endif 
