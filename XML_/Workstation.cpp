//
//  Workstation.cpp
//  XML
//
//  Created by Ralitsa Toneva on 13.02.24.
//

#include "Workstation.hpp"

Workstation::Workstation(int building, int floor, int desc){
    this->building = building;
    this->floor = floor;
    this->desc = desc;
}
Workstation *Workstation::parseWorkstation(pugi::xml_node workstationNode){
    int b = workstationNode.attribute("Building").as_int();
    int f = workstationNode.attribute("Floor").as_int();
    int d = workstationNode.attribute("Desc").as_int();
    
    return  new Workstation(b, f, d); // new ни връща адреса
}

std::ostream &operator<<(std::ostream &os, const Workstation &workstation) {
    os << "building: " << workstation.building << " floor: " << workstation.floor << " desc: " << workstation.desc;
    return os;
}
