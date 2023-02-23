#pragma once

#include "Leaf.hpp"

class ObjectNode: public Leaf{

    private :

    public :
        ObjectNode(): Leaf {NodeKind::OBJECT} {};

        std::string print() const override;

        static std::unique_ptr<ObjectNode> make_ptr();
};