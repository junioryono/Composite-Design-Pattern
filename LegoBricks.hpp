#ifndef LEGOBRICKS_H
#define LEGOBRICKS_H

class LegoBrick1X1: public Component {
    std::string Operation() const override {
        return "Lego Brick 1x1";
    }
};

class LegoBrick1X2: public Component {
    std::string Operation() const override {
        return "Lego Brick 1x2";
    }
};

class LegoBrick2X2: public Component {
    std::string Operation() const override {
        return "Lego Brick 2x2";
    }
};

#endif