#include "qcarta.h"

QCarta::QCarta(p3::Carta c1)
{
    clicked = c1.mostra();
    verso.load(":/images/Cartas/back.jpg");

    if(c1.numero() == 0){
        frente.load(":/images/Cartas/truco.jpg");
    }
    if(c1.numero() == 1){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/A_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/A_Copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/A_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/A_ouros.jpg");
        }
    }
    if(c1.numero() == 2){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/2_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/2_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/2_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/2_ouros.jpg");
        }
    }
    if(c1.numero() == 3){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/3_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/3_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/3_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/3_ouros.jpg");
        }
    }
    if(c1.numero() == 4){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/4_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/4_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/4_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/4_ouros.jpg");
        }
    }
    if(c1.numero()== 5){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/5_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/5_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/5_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/5_ouros.jpg");
        }
    }
    if(c1.numero() == 6){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/6_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/6_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/6_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/6_ouros.jpg");
        }
    }
    if(c1.numero() == 7){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/7_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/7_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/7_paus.jpg");
        }
        else if((int)c1.naipe()== 3){
            frente.load(":/images/Cartas/7_ouros.jpg");
        }
    }
    if(c1.numero() == 8){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/Q_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/Q_copas.jpg");
        }
        else if((int)c1.naipe()== 2){
            frente.load(":/images/Cartas/Q_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/Q_ouros.jpg");
        }
    }
    if(c1.numero() == 9){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/J_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/J_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/J_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/J_ouros.jpg");
        }
    }
    if(c1.numero() == 10){
        if((int)c1.naipe() == 0){
            frente.load(":/images/Cartas/K_espadas.jpg");
        }
        else if((int)c1.naipe() == 1){
            frente.load(":/images/Cartas/K_copas.jpg");
        }
        else if((int)c1.naipe() == 2){
            frente.load(":/images/Cartas/K_paus.jpg");
        }
        else if((int)c1.naipe() == 3){
            frente.load(":/images/Cartas/K_ouros.jpg");
        }
    }

    clickable = false;
    selected = false;
    selectable = false;
    verso = verso.scaled(90,120);
    frente = frente.scaled(90,120);
    setFlag( QGraphicsItem::ItemIsFocusable );
    setAcceptedMouseButtons(Qt::AllButtons);
    setPos(0,0);
}


QRectF QCarta::boundingRect() const{
    return QRectF(x(),y(),90,120);
}

void QCarta::setClickable(){
    clickable = !clickable;
}

bool QCarta::getClickable(){
    return clickable;
}

void QCarta::setSelected(bool status){
    selected = status;
}

bool QCarta::getSelected(){
    return selected;
}

bool QCarta::getClicked(){
    return clicked;
}

void QCarta::setSelectable(){
    selectable = !selectable;
}

bool QCarta::getSelectable(){
    return selectable;
}

void QCarta::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(!clicked){
        painter->drawPixmap(x(),y(),verso);
    }else{
        painter->drawPixmap(x(),y(),frente);
    }
}


void QCarta::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if(event->button() == Qt::RightButton && clickable == true){
        clicked = !clicked;
    }
    else if(event->button() == Qt::LeftButton && selectable == true){
        if(getSelected()){
            this->setSelected(false);
            this->setPos(this->x(), this->y() + 30);
        }
       else{
            this->setPos(this->x(), this->y() - 30);
            this->setSelected(true);
        }
    }
    update();
    QGraphicsItem::mousePressEvent(event);
}


