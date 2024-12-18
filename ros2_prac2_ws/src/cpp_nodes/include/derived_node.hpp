#ifndef DERIVED_NODE_HPP
#define DERIVED_NODE_HPP

#include "base_node.hpp"

class DerivedNode : public BaseNode
{
public:
    explicit DerivedNode(const std::string &node_name);

    void custom_behavior() override; // Override the base class method
    
};

#endif // DERIVED_NODE_HPP