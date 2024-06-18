#include "chessfield.h"

ChessField::ChessField(QWidget *parent)
    : QGraphicsView{parent}, boardSize(8), squareSize(98){

    scene = new QGraphicsScene(this);
    setScene(scene);

    scene->setBackgroundBrush(QBrush(QPixmap(QCoreApplication::applicationDirPath() + "/resources/background.jpg")));

    drawField();

    initializeField();
    drawPieces();
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

void ChessField::initializeField(){
    field = new ChessPiece*[boardSize];
    for (int i = 0; i < boardSize; ++i) {
        field[i] = new ChessPiece[boardSize];
    }

    for (int i = 0; i < boardSize; ++i) {
        field[1][i].setType(PAWN);
        field[1][i].setColor(WHITE);
        field[6][i].setType(PAWN);
        field[6][i].setColor(BLACK);
    }

    field[0][0].setType(ROOK);
    field[0][0].setColor(WHITE);
    field[0][7].setType(ROOK);
    field[0][7].setColor(WHITE);
    field[7][0].setType(ROOK);
    field[7][0].setColor(BLACK);
    field[7][7].setType(ROOK);
    field[7][7].setColor(BLACK);

    field[0][1].setType(KNIGHT);
    field[0][1].setColor(WHITE);
    field[0][6].setType(KNIGHT);
    field[0][6].setColor(WHITE);
    field[7][1].setType(KNIGHT);
    field[7][1].setColor(BLACK);
    field[7][6].setType(KNIGHT);
    field[7][6].setColor(BLACK);

    field[0][2].setType(BISHOP);
    field[0][2].setColor(WHITE);
    field[0][5].setType(BISHOP);
    field[0][5].setColor(WHITE);
    field[7][2].setType(BISHOP);
    field[7][2].setColor(BLACK);
    field[7][5].setType(BISHOP);
    field[7][5].setColor(BLACK);

    field[0][3].setType(QUEEN);
    field[0][3].setColor(WHITE);
    field[7][3].setType(QUEEN);
    field[7][3].setColor(BLACK);

    field[0][4].setType(KING);
    field[0][4].setColor(WHITE);
    field[7][4].setType(KING);
    field[7][4].setColor(BLACK);
}

void ChessField::drawPieces(){
    for (int row = 0; row < boardSize; ++row) {
        for (int col = 0; col < boardSize; ++col) {
            ChessType type = field[row][col].getType();
            ChessColor color = field[row][col].getColor();
            if (type != NONEType) {
                QString pieceImagePath = QCoreApplication::applicationDirPath() + "/resources/";
                switch (color) {
                case WHITE: pieceImagePath += "white_"; break;
                case BLACK: pieceImagePath += "black_"; break;
                default: break;
                }
                switch (type) {
                case KING: pieceImagePath += "king.png"; break;
                case QUEEN: pieceImagePath += "queen.png"; break;
                case ROOK: pieceImagePath += "rook.png"; break;
                case KNIGHT: pieceImagePath += "knight.png"; break;
                case BISHOP: pieceImagePath += "bishop.png"; break;
                case PAWN: pieceImagePath += "pawn.png"; break;
                default: break;
                }
                QGraphicsPixmapItem *piece = new QGraphicsPixmapItem(QPixmap(pieceImagePath));
                // Set position based on row and col (adjust for correct row placement)
                piece->setPos(col * squareSize, (7 - row) * squareSize);
                // Offset to center the piece in the square
                piece->setOffset((squareSize - piece->boundingRect().width()) / 2,
                                 (squareSize - piece->boundingRect().height()) / 2);
                scene->addItem(piece);
            }
        }
    }
}

ChessField::~ChessField(){
    for(unsigned int i = 0; i < boardSize; i++){
        delete[] field[i];
    }

    delete[] field;
}
