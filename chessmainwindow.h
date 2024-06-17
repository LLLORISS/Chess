#ifndef CHESSMAINWINDOW_H
#define CHESSMAINWINDOW_H

#include <QMainWindow>
#include <chessfield.h>

class ChessMainWindow : public QMainWindow
{
    Q_OBJECT
    ChessField* field;

public:
    ChessMainWindow(QWidget *parent = nullptr);
    ~ChessMainWindow();
};
#endif // CHESSMAINWINDOW_H
