#pragma once

#include "Leaf.hpp"

class ArrayNode: public Leaf{
    private :
        std::vector <std::unique_ptr<Node>> _node;

    public :
        ArrayNode(): Leaf { NodeKind::ARRAY} {};

        std::string print() const override;

        static std::unique_ptr<ArrayNode> make_ptr();

        int child_count() const; 

        void push_back(std::unique_ptr<Node> kind);

        //size_t height() const override;

        //size_t node_count() const override;
};