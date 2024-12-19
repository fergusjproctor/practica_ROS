#ifndef DERIVED_INPUT_NODE_HPP
#define DERIVED_INPUT_NODE_HPP

#include "input_node.hpp"

class DerivedInputNode : public InputNode
{
    public:
        explicit DerivedInputNode(const std::string &node_name);
        //void get_user_input() override;
        void test_function();

    private:
        std::string user_input_;    
        
};

#endif 