#include <QString>
#include <QtTest>

class TestKeyType : public QObject
{
    Q_OBJECT

public:
    TestKeyType();

private Q_SLOTS:
    void testCase1();
};

TestKeyType::TestKeyType()
{
}

void TestKeyType::testCase1()
{
    QVERIFY2(true, "Failure");
}



QTEST_APPLESS_MAIN(TestKeyType)

#include "tst_testkeytype.moc"
