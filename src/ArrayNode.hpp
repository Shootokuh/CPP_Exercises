#pragma once

#include "Leaf.hpp"

class ArrayNode: public Leaf{
    private :
        std::vector <std::unique_ptr<Node>> _node;

    public :
        ArrayNode(): Leaf { NodeKind::ARRAY} {};

        std::string print() const override;

        static std::unique_ptr<ArrayNode> make_ptr();

        int child_count(); 

        void push_back(std::unique_ptr<Node> kind);
};