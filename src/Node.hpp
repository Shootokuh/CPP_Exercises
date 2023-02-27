#pragma once

#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "NodeKind.hpp"
#include "InstanceCounter.hpp"

class Node;

using NodePtr = std::unique_ptr<Node>;

class Node: public InstanceCounter{
    private :
        const NodeKind _kind;

    protected : 
        Node(NodeKind kind): _kind(kind){}

    public :
        NodeKind kind() const;
        virtual ~Node() = default;
        virtual std::string print() const = 0;
        //virtual size_t height() const = 0;
        //virtual size_t node_count() const = 0; 
};