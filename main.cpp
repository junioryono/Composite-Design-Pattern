// Name: Amer Yono
// Student ID: 200711334
// Email: yono004@cougars.csusm.edu

#include "LegoProduct.hpp"
using namespace std;

int main() {
    Component *compositeTree = new LegoProduct;

    Component *compositeTreeBranch1 = new LegoProduct;
    Component *compositeTreeBranch2 = new LegoProduct;

    Component *legoBrick1X1 = new LegoBrick1X1;
    Component *legoBrick1X2 = new LegoBrick1X2;
    Component *legoBrick2X2 = new LegoBrick2X2;

    compositeTreeBranch1->Add(legoBrick1X1);
    compositeTreeBranch1->Add(legoBrick1X2);
    compositeTreeBranch1->Add(legoBrick2X2);
    compositeTreeBranch2->Add(legoBrick2X2);

    compositeTree->Add(compositeTreeBranch1);
    compositeTree->Add(compositeTreeBranch2);

    cout << "Compostite Tree: " << endl << compositeTree->Operation() << endl;

    return 0;
}



