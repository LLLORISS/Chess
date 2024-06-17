#ifndef CHESSMAINWINDOW_H
#define CHESSMAINWINDOW_H

#include <QMainWindow>

class ChessMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    ChessMainWindow(QWidget *parent = nullptr);
    ~ChessMainWindow();
};
#endif // CHESSMAINWINDOW_H
