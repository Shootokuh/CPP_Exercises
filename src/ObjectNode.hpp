#pragma once

#include "Node.hpp"

#include <map>

class ObjectNode: public Node{

    private :
        std::map<std::string, std::unique_ptr<Node>> _data;

    public :
        ObjectNode(): Node {NodeKind::OBJECT} {};

        std::string print() const override;

        static std::unique_ptr<ObjectNode> make_ptr();
        
        size_t child_count() const;

        //size_t height() const override;

        //size_t node_count() const override;

        void insert(std::string key, NodePtr type);
};