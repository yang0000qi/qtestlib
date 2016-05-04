#ifndef TESTPLUS_H
#define TESTPLUS_H

class ctestplus
{
public :
    ctestplus();
    virtual ~ctestplus();

    //	calc method
    int plus(int val);
    int minus(int val);

    //	value method
    int value();
    void value(int val);

private :
    int m_value[3];
};

#endif // TESTPLUS_H
