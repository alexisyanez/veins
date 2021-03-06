//
// Copyright (C) 2016 David Eckhoff <david.eckhoff@fau.de>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

#include "veins/modules/application/traci/MyVeinsApp.h"

using namespace Veins;

Define_Module(Veins::MyVeinsApp);

void MyVeinsApp::initialize(int stage)
{
    BaseWaveApplLayer::initialize(stage);
    if (stage == 0) {
        // Initializing members and pointers of your application goes here
        EV << "Initializing " << par("appName").stringValue() << std::endl;
    }
    else if (stage == 1) {
        // Initializing members that require initialized other modules goes here
    }
}

void MyVeinsApp::finish()
{
    BaseWaveApplLayer::finish();
    // statistics recording goes here
}

void MyVeinsApp::onBSM(BasicSafetyMessage* bsm)
{
    // Your application has received a beacon message from another car or RSU
    // code for handling the message goes here
    if (soy la rsu)
        id=bsm->getAddress();
        coord = bsm->getSenderPos();
        angel = bsm->getAngle();
    
        
}

void MyVeinsApp::onWSM(WaveShortMessage* wsm)
{
    // Your application has received a data message from another car or RSU
    // code for handling the message goes here, see TraciDemo11p.cc for examples
}

void MyVeinsApp::onWSA(WaveServiceAdvertisment* wsa)
{
    // Your application has received a service advertisement from another car or RSU
    // code for handling the message goes here, see TraciDemo11p.cc for examples
}

void MyVeinsApp::handleSelfMsg(cMessage* msg)
{
    BaseWaveApplLayer::handleSelfMsg(msg);
    // this method is for self messages (mostly timers)
    // it is important to call the BaseWaveApplLayer function for BSM and WSM transmission
}

void MyVeinsApp::handlePositionUpdate(cObject* obj)
{
    BaseWaveApplLayer::handlePositionUpdate(obj);
    // the vehicle has moved. Code that reacts to new positions goes here.
    // member variables such as currentPosition and currentSpeed are updated in the parent class
}

// Función para descubrir si es ya está indexado como vecino

bool myWaveAppLayer::isNeighbor(std::list<std::pair<int,coord,>>mylist,int addressSearch){
    std::list < std::pair <int,coord >>::iterator it2;
    for (it2 = mylist.begin(); it2 != mylist.end(); it2++) {
        if (it2->first==addressSearch) break;
    }

        if (it2 == mylist.end()) return false;
        else return true;
}
