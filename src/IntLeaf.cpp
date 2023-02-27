#include "IntLeaf.hpp"

    std::unique_ptr<IntLeaf> IntLeaf::make_ptr(int value){
        return std::make_unique<IntLeaf>(value);
    }
