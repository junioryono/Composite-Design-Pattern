#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <iostream>
#include <list>

class Component {
    private:
        Component *Parent;

    public:
        void SetParent(Component *parent) {
            this->Parent = parent;
        }

        Component *GetParent() const {
            return this->Parent;
        }
        
        virtual void Add(Component *component) {}
        virtual void Remove(Component *component) {}
        virtual std::string Operation() const = 0;
};

#endif