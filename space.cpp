#include "space.h"
#include <string>
#include <map>

namespace space_age {

double ages(double age,std::string planet) {
    std::map<std::string,int> planets = {
        {"Mercury",0.2408467},
        {"Venus",0.61519726},
        {"Earth",1.0},
        {"Mars",1.8808158},
        {"Jupiter",11.862615},
        {"Saturn",29.447498},
        {"Uranus",84.016846},
        {"Neptune",164.79132}
    };
    return planets[planet]*age/31557600;
}

}  // namespace space_age
