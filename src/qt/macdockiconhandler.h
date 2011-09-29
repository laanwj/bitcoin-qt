#ifndef MACDOCKICONHANDLER_H
#define MACDOCKICONHANDLER_H

#include <QtCore/QObject>

class QMenu;
class QWidget;
class objc_object;

class MacDockIconHandler : public QObject
{
    Q_OBJECT
public:
    ~MacDockIconHandler();

    QMenu *dockMenu();

    static MacDockIconHandler *instance();

    void handleDockIconClickEvent();

signals:
    void dockIconClicked();

public slots:

private:
    MacDockIconHandler();

    objc_object *m_dockIconClickEventHandler;
    QWidget *m_dummyWidget;
    QMenu *m_dockMenu;
};

#endif // MACDOCKICONCLICKHANDLER_H
