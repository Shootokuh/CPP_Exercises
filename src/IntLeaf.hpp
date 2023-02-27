#pragma once

#include "Leaf.hpp"

class IntLeaf: public Leaf{
    private :
        int _value;

    public :
        IntLeaf(int value): Leaf{ NodeKind::INT }, _value {value} {};

        static std::unique_ptr<IntLeaf> make_ptr(int value);

        std::string print() const{
            return std::to_string(_value);
        }

        int data() const{
            return _value;
        }

};