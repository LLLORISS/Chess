#ifndef CHESSFIELD_H
#define CHESSFIELD_H

#include <QMainWindow>
#include <chesspiece.h>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QCoreApplication>
#include <QFile>
#include <QGraphicsPixmapItem>

class ChessField : public QGraphicsView{
private:
    Q_OBJECT

    QGraphicsScene *scene;
    int boardSize;
    int squareSize;
    ChessPiece **field;

    void initializeField();
    void drawPieces();
public:
    explicit ChessField(QWidget *parent = nullptr);
    ~ChessField();

    void drawField();

signals:
};

#endif // CHESSFIELD_H
