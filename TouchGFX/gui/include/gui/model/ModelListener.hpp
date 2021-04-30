#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void timeMeasureReceived(int dir, float time);
    virtual void leftPositionReached(bool state);
    virtual void rightPositionReached(bool state);
    
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
