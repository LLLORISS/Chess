#ifndef CHESSFIELD_H
#define CHESSFIELD_H

#include <QMainWindow>
#include <chesspiece.h>

class ChessField : public QMainWindow{
private:
    Q_OBJECT

    ChessPiece** field;
public:
    explicit ChessField(QWidget *parent = nullptr);
    ~ChessField();

signals:
};

#endif // CHESSFIELD_H
