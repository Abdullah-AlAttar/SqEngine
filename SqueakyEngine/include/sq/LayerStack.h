#ifndef LAYER_STACK_H
#define LAYER_STACK_H
#include "Core.h"
#include "Layer.h"

namespace sq

{

class LayerStack
{
public:
    LayerStack();
    ~LayerStack();
    void PushLayer(Layer* layer);
    void PushOverlay(Layer* overlay);
    void PopLayer(Layer* layer);
    void PopOverlay(Layer* layer);

    std::vector<Layer*>::iterator begin() { return m_layers.begin(); }
    std::vector<Layer*>::iterator end() { return m_layers.begin(); }

private:
    std::vector<Layer*> m_layers;
    std::vector<Layer*>::iterator m_layer_insert;
};
} // namespace sq

#endif