#pragma once

#include <string>


// A creature that is cute and can fight other ones.
class Pokemon{
    private:
        std::string _name;
        int _id;
        static inline int _incremente = 0;

    public:
        Pokemon (const std::string& name): _name {name}, _id {_incremente++} {}

        Pokemon (const Pokemon& other): _name{other.name}, _id{_incremente++} {}

        Pokemon& operator=(const Pokemon& other){
        if (this == &other){
            _name = other._name;
            }
        return *this;
        } 

        const std::string &name() const{
            return _name;
        }

        int id() const{
            return _id;
        }
};


