#include"Creator.h"

struct ObjectManager
{
public:
    ObjectManager();
    void Create(std::shared_ptr<NodeAST> node, size_t iterator);
    std::shared_ptr<NodeAST> CalcExpr(std::shared_ptr<NodeAST> node);
    void ExecuteVoidFunc(std::shared_ptr<NodeAST> node){}
private:
    void ExecuteFunc(std::shared_ptr<Function> func){}
    std::shared_ptr<ObjectCreator> ObjCreator;
    std::unordered_map<std::string, std::shared_ptr<Object>> objects;
};