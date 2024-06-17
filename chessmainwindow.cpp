#include "chessmainwindow.h"

ChessMainWindow::ChessMainWindow(QWidget *parent)
    : QMainWindow(parent){
    this->field = new ChessField();
}

ChessMainWindow::~ChessMainWindow() {
    delete[] field;
}
