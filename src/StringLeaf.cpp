#include "StringLeaf.hpp"

std::string StringLeaf::data() const {
        return _data;
    }

std::string StringLeaf::print() const{
    return "\"" + _data + "\"";
}

std::unique_ptr<StringLeaf> StringLeaf::make_ptr(std::string data){
    return std::make_unique<StringLeaf>(std::move(data));
}