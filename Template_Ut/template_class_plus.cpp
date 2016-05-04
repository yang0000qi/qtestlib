#include <QString>
#include <QtTest/QtTest>

class template_class : public QObject
{
    Q_OBJECT

public:
    template_class();

private Q_SLOTS:
    void testCase1();
};

template_class::template_class()
{
}

void template_class::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(template_class)

#include "template_class_plus.moc"
