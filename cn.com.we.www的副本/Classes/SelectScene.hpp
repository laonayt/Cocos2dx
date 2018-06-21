//
//  SelectScene.hpp
//  cn.com.we.www-mobile
//
//  Created by WE on 2018/6/21.
//

#ifndef SelectScene_hpp
#define SelectScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class SelectScene:public cocos2d::Scene {
public:
    static Scene *create();
private:
    static Scene *selectScene;
};

#endif /* SelectScene_hpp */
