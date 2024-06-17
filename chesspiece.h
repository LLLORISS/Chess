#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <map>

enum ChessType{
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN,
    NONEType
};

enum ChessColor{
    WHITE,
    BLACK,
    NONEColor
};

class ChessPiece{
private:
    ChessType pieceType;
    ChessColor pieceColor;
    std::pair<unsigned int, unsigned int> coords;
public:
    ChessPiece();

    void move(unsigned int, unsigned int);

    void setType(ChessType);
    ChessType getType();

    void setColor(ChessColor);
    ChessColor getColor();
};

#endif // CHESSPIECE_H
