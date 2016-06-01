#ifndef HUBWINDOW_H
#define HUBWINDOW_H

#include <QMainWindow>

namespace Ui {
class HubWindow;
}

class HubWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HubWindow(QWidget *parent = 0);
    ~HubWindow();

private:
    Ui::HubWindow *ui;
};

#endif // HUBWINDOW_H
