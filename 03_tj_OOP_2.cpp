#include<iostream>
#include<string>

class Reader{};
class Writer{};


class RoutingComponent{
public:
    RoutingComponent(){
        std::cout<<"RoutingComponent constructor."<<std::endl;
    }
    // RoutingComponent(std::string name){
    //      std::cout<<"RoutingComponent"<<name<<"or."<<std::endl;
    // }
    ~RoutingComponent(){
        std::cout<<"RoutingComponent desstructor."<<std::endl;
    }
    std::string name_;
    Reader reader_;
    Writer writer_;
    bool Process(){
        std::cout<<"Process"<<std::endl;
        return 0;
    }
};

class TopoGraph{
    // Node node_;
    // Edge edge_;
};

int main(){
    RoutingComponent routing_component;
    // RoutingComponent routing_component_2("routing_2");
    routing_component.Process();
    // routing_component.RoutingComponent();
    return 0;
}