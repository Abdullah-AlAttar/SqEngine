#ifndef LAYER_H
#define LAYER_H


#include "Core.h"
#include "events/Event.h"
namespace sq
{

class Layer
{
protected:
    std::string m_debug_name;
public:
    Layer(const std::string& name = "Layer");
    virtual ~Layer();
    virtual void OnAttach() {}
    virtual void OnDetach() {}
    virtual void OnUpdate() {}
    virtual void OnEvent(sq::Event& event) {}
    inline const std::string& GetName() const {return m_debug_name; }

};


} // namespace sq

#endif