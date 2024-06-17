#ifndef CHESSFIELD_H
#define CHESSFIELD_H

#include <QMainWindow>
#include <vector>
#include <chesspiece.h>

unsigned int rows = cols = 8;

class ChessField : public QMainWindow{
private:
    Q_OBJECT

    std::vector<std::vector<ChessPiece>> field;
public:
    explicit ChessField(QWidget *parent = nullptr);

signals:
};

#endif // CHESSFIELD_H
