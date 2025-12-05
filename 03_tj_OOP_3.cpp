#include<iostream>
#include<string>

class Reader{};
class Writer{};


class RoutingComponent{
public:
    RoutingComponent(){
        // std::cout<<"RoutingComponent constructor."<<std::endl;
    }
    // RoutingComponent(std::string name){
    //      std::cout<<"RoutingComponent"<<name<<"or."<<std::endl;
    // }
    ~RoutingComponent(){
        // std::cout<<"RoutingComponent desstructor."<<std::endl;
    }
    std::string name_;
    Reader reader_;
    Writer writer_;
    bool Process(){
        std::cout<<name_<<"Process"<<std::endl;
        return true;
    }
    void SetName(const std::string& name){
        name_=name;
    }
    std::string GetName(){
        return name_;
    }
};

class Point{
public:
    double x;
    double y;
};

class Edge{
public:
    Point start;
    Point end;
};

class TopoGraph{
    // Node node_;
    // Edge edge_;
public:
    TopoGraph()=default;
    TopoGraph(TopoGraph& another){  //对于第一个对象来说，即topo_graph_1，没有another这个对象，必须使用&保持同步
        edge=another.edge;
        // std::cout<<"Topo Graph copy constructor"<<std::endl;
    }
    TopoGraph& operator=(TopoGraph& other){
        edge=other.edge;
        // std::cout<<"Topo Graph copy assign operator"<<std::endl;
        return *this;
    }

    Edge edge;
};

int main(){
    TopoGraph top_graph_1;
    TopoGraph top_graph_2(top_graph_1); //复制构造函数
    TopoGraph top_graph_3;
    top_graph_3=top_graph_1; //赋值函数
    RoutingComponent component_1;
    RoutingComponent component_2;
    component_1.SetName("component_1");
    component_2.SetName("component_2");
    std::cout<<"Component_1 is "<<component_1.GetName()<<std::endl;
    std::cout<<"Component_2 is "<<component_2.GetName()<<std::endl;
    return 0;
}
