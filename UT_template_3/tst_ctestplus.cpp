#include <QString>
#include <QtTest>
#include "testplus.h"

class testcplus : public QObject
{
   Q_OBJECT

public:
    testcplus();

private Q_SLOTS:
    void testCase1();
    void testPlus();
    void testMinus();
    void testMinus_data();//向测试函数testMinus增加测试数据
};

testcplus::testcplus()
{
}

void testcplus::testCase1()
{
    QVERIFY2(true, "Failure");
}

void testcplus::testPlus()
{
    ctestplus sobj;
    QBENCHMARK {
        sobj.value(3);
        sobj.plus(4);
    }
    QCOMPARE(sobj.value(), int(7));//3+4=7
}

void testcplus::testMinus_data()
{
    QTest::addColumn<int>("value");//int means type
    QTest::addColumn<int>("minus");
    QTest::addColumn<int>("result");

    QTest::newRow("3-4")   << 3   << 4   << -1;
    QTest::newRow("-1+5")  << -1  << -5  << 4;
    QTest::newRow("-1+4")  << -1  << -4  << 5;	//	error
    QTest::newRow("4-3")   << 4   << 3   << 1;
}

void testcplus::testMinus()
{

    QFETCH(int, value);//type int
    QFETCH(int, minus);
    QFETCH(int, result);

    ctestplus sobj;

    sobj.value(value);//
    QCOMPARE(sobj.minus(minus), result);
}



QTEST_APPLESS_MAIN(testcplus)

#include "tst_ctestplus.moc"
