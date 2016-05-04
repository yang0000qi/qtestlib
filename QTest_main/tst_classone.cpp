#include <QString>
#include <QtTest>

class classone : public QObject
{
    Q_OBJECT

public:
    classone();

private Q_SLOTS:
    void testCase1();
};

classone::classone()
{
}

void classone::testCase1()
{
    QVERIFY2(true, "Failure");
    qDebug() << "TestClassOne::testCase()";
}


/******************1************************/
//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);
//    classone tc1;
//    return QTest::qExec(&tc1, argc, argv);
//}

/******************2************************/
int main(int argc, char **argv)
{
    classone testCase;
    int testCaseResult = QTest::qExec(&testCase, argc, argv);
    qDebug()<<"MyClassTest: "<<(0 == testCaseResult ? "Success" : "Faillure");
    return testCaseResult;
}

/******************3************************/
//QTEST_APPLESS_MAIN(classone)

#include "tst_classone.moc"
