#pragma once
#include "Controller.h"
class PadInput :
    public Controller
{
public:
    PadInput();
    ~PadInput();

    void Update(void) override;
    ControllerType GetControllerType(void) override 
    {
        return ControllerType::Pad1;
    }
private:
    std::unordered_map<KeyID, unsigned int> inputTable_;

};

