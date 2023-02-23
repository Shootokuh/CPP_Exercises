#pragma once

#include "Card.hpp"
#include <string>
#include <string_view>
#include <utility>

enum class TrapType{
    Normal,
    Continuous,
    Counter
};

const std::string to_string(const TrapType traptype){
    switch (traptype){
        case TrapType::Normal:
            return "Normal";
        case TrapType::Counter:
            return "Counter";
        case TrapType::Continuous:
            return "Continuous";
    return " ";
};

class Trap: public Card{
    private:
        TrapType _trap_type;
    public:
        Trap(std::string id, std::string name, TrapType traptype): Card {id, CardType::Trap}, _trap_type {traptype} {
            Card::set_name(name);
        }

        TrapType get_trap_type() const{
            return _trap_type;
        }

};