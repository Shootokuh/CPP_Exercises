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

int ArrayNode::child_count() const{
    return _node.size();
}

/*size_t ArrayNode::height() const{
    if (this->child_count() == 0){
        return 0u;
    }
    size_t result = 0u;
    for (const auto& val : _node){
        size_t child_height = val->height();
        if (child_height > result){
            result = child_height;
        }
    }
    return result + 1;
}*/

/*size_t ArrayNode::node_count() const{
    size_t result = 1u;
    for (const auto& child : _node){
        result += child->node_count();
    }
    return result;
}*/

void ArrayNode::push_back(std::unique_ptr<Node> kind){
    _node.emplace_back(std::move(kind));
}