//
// Created by valentin on 10/11/16.
//

#ifndef TP4_IM_H
#define TP4_IM_H


class Im {
private:
    const int h;
    const int l;

};


class Tr : virtual public Im {
private:
    const static int H=100;
    const static int L=30;
    const int rg;
public:
    static int getH();
    static int getL();
};


class Br : virtual public Im {
private:
    const static int H=30;
    const static int L=100;
public:
    static int getH();
};


class TrBr : virtual public Im {

};


#endif //TP4_IM_H
