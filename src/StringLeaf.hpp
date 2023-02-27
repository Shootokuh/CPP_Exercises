#pragma once

#include "Leaf.hpp"
#include "Node.hpp"

class StringLeaf: public Leaf{
    private :
        std::string _data;

    public :
        StringLeaf(std::string data): Leaf { NodeKind::STRING }, _data {data} {};

        static std::unique_ptr<StringLeaf> make_ptr(std::string data);

        std::string data() const;
        std::string print() const override;
};