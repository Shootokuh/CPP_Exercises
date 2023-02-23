#include "ObjectNode.hpp"

std::string ObjectNode::print() const {
        return "{}";
}

std::unique_ptr<ObjectNode> ObjectNode::make_ptr(){
    return std::make_unique<ObjectNode> ();
}