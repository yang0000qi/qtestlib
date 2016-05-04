#include <QtTest/QtTest>

class TestQString: public QObject
{
    Q_OBJECT

private slots:
    void testcase1_data();
    void testcase1();
};

void TestQString::testcase1_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("all lower") << "hello" << "HELLO";
    QTest::newRow("mixed")     << "Hello" << "HELLO";
    QTest::newRow("all upper") << "HELLO" << "HELLO";
}

void TestQString::testcase1()
{
    QFETCH(QString, string);
    QFETCH(QString, result);

    QCOMPARE(string.toUpper(), result);
}


QTEST_MAIN(TestQString)
#include "testqstring.moc"

