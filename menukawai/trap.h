#ifndef TRAP_H
#define TRAP_H

#include <QObject>

class trap : public QObject
{
    Q_OBJECT
public:
    explicit trap(QObject *parent = nullptr);

signals:

public slots:
};

#endif // TRAP_H