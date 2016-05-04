#include <QtCore/QString>
#include <QtTest/QtTest>
#include "test1.h"
#include "test2.h"

class UT_template_1Test : public QObject
{
    Q_OBJECT

public:
    UT_template_1Test();

private Q_SLOTS:
    void testCase1();
    void simple();
};

UT_template_1Test::UT_template_1Test()
{
}

void UT_template_1Test::testCase1()
{
    QVERIFY2(true, "Failure");
}

void UT_template_1Test::simple()
{
    Point t1;
//    QBENCHMARK {
//        t1.setPoint(100,200);
//        t1.printPoint();
//    }
    t1.setPoint(1000,2000);
    t1.printPoint();
    QString str = "next";
//    QVERIFY(str.toUpper() == "NEXT");
    QCOMPARE(str.toUpper(), QString("NEXT"));
    Point2 t2;
    t2.setPoint2(100,200);
//    QVERIFY2(false, "Failure");
    QCOMPARE(QString("hello").toUpper(), QString("HELLO"));
    t2.printPoint2();
}

QTEST_APPLESS_MAIN(UT_template_1Test)

#include "tst_ut_template_1test.moc"
