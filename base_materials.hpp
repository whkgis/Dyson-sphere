#program once

namespace Dyson_sphere
{
  //基类
  class Material
  {
    int count;
    Material()
    {
      count = 0;
    }    
  }
  
  //铁矿
  class IronOre : public Material
  {
    static int totalCount;
    IronOre()
    {
      totalCount++；
    }
  }
  //静态成员初始化
  IronOre::totalCount = 0;
  
  //铜矿
  class CopperOre : public Material
  {
    static int totalCount;
    CopperOre()
    {
      totalCount++；
    }
  }
  //静态成员初始化
  CopperOre::totalCount = 0;
  
  //石矿
  
  
  //煤矿
  
  
  //硅矿
  
  
  //钛矿
  
  
  //原油
  
  
  //硫酸
  
  
  //刺笋结晶
  
  
  //金伯利矿石
  
  
  //有机晶体矿
  
  
  //可燃冰
  
  
  //水源
  
  
}
