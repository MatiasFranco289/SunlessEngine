#include <string>
#include <map>
#include <any>
#include <stdexcept>

#ifndef MOONTHING_H
#define MOONTHING_H

class MoonThing {
private:
std::string moonThingName;
std::map<int, std::any> satellites;

public:
    MoonThing(std::string name = "");

    template<typename T>
    void AddSatellite(T satellite) {
        this -> satellites[T::id] = satellite;
    }

    //TODO: Manejar errores bien
    template<typename T>
    T GetSatellite() {
        auto it = this -> satellites.find(T::id);

        try{
            try{
                T value = std::any_cast<T>(it -> second);
                return value;
            }
            catch (const std::bad_any_cast& e) {
                throw std::runtime_error("The given key is not a valid Satellite.");
            }
        }
        catch (const std::out_of_range& e) {
            throw std::runtime_error("The MoonThing has no satellites of the requested type.");
        }
    }
};

#endif