/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: GNode.cpp
@Time: 2022/3/28 23:14
@Desc: 
***************************/

#include "GNode.h"

CGRAPH_NAMESPACE_BEGIN

GNode::GNode() : GElement() {
    node_type_ = GNodeType::BASIC;
    element_type_ = GElementType::NODE;
    session_ = URandom<>::generateSession(CGRAPH_STR_NODE);
}


GNode* GNode::setType(const GNodeType& type) {
    node_type_ = type;
    return this;
}

CGRAPH_NAMESPACE_END
