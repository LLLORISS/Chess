#include "chessfield.h"

ChessField::ChessField(QWidget *parent)
    : QGraphicsView{parent}, boardSize(8), squareSize(98){

    scene = new QGraphicsScene(this);
    setScene(scene);

    scene->setBackgroundBrush(QBrush(QPixmap(QCoreApplication::applicationDirPath() + "/resources/background.jpg")));

    drawField();
}

void ChessField::drawField(){
    for(int row = 0; row < boardSize; ++row){
        for(int col = 0; col < boardSize; ++col){
            QGraphicsRectItem *square = new QGraphicsRectItem(col * squareSize, row * squareSize, squareSize, squareSize);
            if((row + col) % 2 == 0){
                square->setBrush(Qt::white);
            }
            else{
                square->setBrush(Qt::gray);
            }
            scene->addItem(square);
        }
    }
}
