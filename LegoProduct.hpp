#ifndef LEGOPRODUCT_H
#define LEGOPRODUCT_H

#include "Component.hpp"
#include "LegoBricks.hpp"

class LegoProduct: public Component {
    private:
        std::list<Component*> brick;

    public:
        void Add(Component *component) override {
            this->brick.push_back(component);
            component->SetParent(this);
        }

        void Remove(Component *component) override {
            brick.remove(component);
            component->SetParent(nullptr);
        }
  
        std::string Operation() const override {
            std::string result;

            for (const Component *component : brick) 
                if (component == brick.back()) result += component->Operation();
                else result += component->Operation() + " + ";

            return "Branch(" + result + ")";
        }
};

#endif