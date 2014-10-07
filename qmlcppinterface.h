#ifndef QMLCPPINTERFACE_H
#define QMLCPPINTERFACE_H

#include <QObject>

class QmlCppInterface : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int cash READ cash WRITE setCash NOTIFY cashChanged)

private:
    explicit QmlCppInterface(QObject *parent = 0);

    static QmlCppInterface *sInstance;
    int mCash;

public:
    static QmlCppInterface *instance();

    int cash() const
    { return mCash; }
    void setCash(int amount)
    {
        if (mCash == amount)
            return;

        mCash = amount;
        emit cashChanged();
    }

public slots:
    void tellJavaToGiveMeMoney();

signals:
    void cashChanged();

};

#endif // QMLCPPINTERFACE_H
