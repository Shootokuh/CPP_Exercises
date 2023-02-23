#include "ArrayNode.hpp"

std::string ArrayNode::print() const {
    std::string result = "[";
    for (unsigned i = 0; i < _node.size(); ++i)
    {
        if (i > 0)
            result += ",";
        result += _node[i]->print();
    }
    result += ']';
    return result;
}

std::unique_ptr<ArrayNode> ArrayNode::make_ptr(){
    return std::make_unique<ArrayNode>();
}

int ArrayNode::child_count(){
    return _node.size();
}

void ArrayNode::push_back(std::unique_ptr<Node> kind){
    _node.emplace_back(std::move(kind));
}