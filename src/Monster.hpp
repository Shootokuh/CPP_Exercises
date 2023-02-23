#pragma once

#include "Card.hpp"
#include <string>
#include <string_view>
#include <utility>

enum class Attribute{
    Dark,
    Divine,
    Earth,
    Fire,
    Light,
    Water,
    Wind,
};

const std::string to_symbol(const Attribute attribute){
    switch (attribute){
        case Attribute::Dark:
            return u8"闇";
        case Attribute::Divine:
            return u8"神";
        case Attribute::Earth:
            return u8"地";
        case Attribute::Fire:
            return u8"炎";
        case Attribute::Light:
            return u8"光";  
        case Attribute::Water:
            return u8"水";  
        case Attribute::Wind:
            return u8"風"; 
    }
    return " ";
}

class Monster: public Card{
    private :
        Attribute _attribute;
        std::string _monster_type;
        int _atk = 0;
        int _def = 0;

    public :  
        Monster(std::string id, std::string name, Attribute attribute, std::string monster_type, int atk, int def): Card { id, CardType::Monster }, _attribute {attribute}, _monster_type {monster_type}, _atk {atk}, _def {def} {
            Card::set_name(name);
        }

        Attribute get_attribute() const{
            return _attribute;
        }

        int get_atk() const{
            return _atk;
        }

        int get_def() const{
            return _def;
        }

        std::string get_description() const{
            return "[" + _monster_type + "]\n" + Card::get_description() + "\n" + "ATK/" + std::to_string(_atk) + " " + "DEF/" + std::to_string(_def);
        }

};