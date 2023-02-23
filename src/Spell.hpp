#pragma once

#include "Card.hpp"
#include <string>
#include <string_view>
#include <utility>

enum class SpellType{
    Normal,
    Equip,
    Continuous,
    QuickPlay,
    Field,
};

const std::string to_string(const SpellType spelltype){
    switch (spelltype){
        case SpellType::Normal:
            return "Normal";
        case SpellType::Equip:
            return "Equip";
        case SpellType::Continuous:
            return "Continuous";
        case SpellType::QuickPlay:
            return "Quick-Play";
        case SpellType::Field:
            return "Field";  
        }
    return " ";
}


class Spell: public Card {
    private :
        SpellType _spell_type;

    public :
        Spell(std::string id, std::string name, SpellType spelltype): Card {id, CardType::Spell}, _spell_type {spelltype} {
            Card::set_name(name);
        }

        SpellType get_spell_type() const{
            return _spell_type;
        }
}; 