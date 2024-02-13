//
//  Workstation.hpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#ifndef Workstation_hpp
#define Workstation_hpp

#include <stdio.h>
#include <iostream>
#include "pugixml.hpp"

class Workstation{
public:
    Workstation(int, int, int);
    // static ни позволява да извикаме функцията без създаден обект
    static Workstation* parseWorkstation(pugi::xml_node);
    
    friend std::ostream &operator<<(std::ostream &os, const Workstation &workstation);
 
private:
    int building;
    int floor;
    int desc;
};
#endif /* Workstation_hpp */
