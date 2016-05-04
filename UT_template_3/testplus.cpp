#include "testplus.h"


ctestplus::ctestplus()
{
    for(int ni=0;ni<3;ni++)
        m_value[ni]=0;
}

ctestplus::~ctestplus()
{
}

int ctestplus::plus(int val)
{
    m_value[0]=m_value[2];
    m_value[1]=val;
    m_value[2]=m_value[0]+m_value[1];
    return value();
}

int ctestplus::minus(int val)
{
    m_value[0]=m_value[2];
    m_value[1]=val;
    m_value[2]=m_value[0]-m_value[1];
    return value();
}

int ctestplus::value()
{
    return m_value[2];
}
void ctestplus::value(int val)
{
    m_value[2]=val;
}
