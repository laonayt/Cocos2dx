//
//  WelcomeButtonLayer.hpp
//  cn.com.we.www-mobile
//
//  Created by WE on 2018/6/21.
//

#ifndef WelcomeButtonLayer_hpp
#define WelcomeButtonLayer_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "SelectScene.hpp"

class WelcomeButtonLayer:public::cocos2d::Layer {
public:
    CREATE_FUNC(WelcomeButtonLayer);
private:
    void btnClick(Ref *sender);
    virtual bool init() override;
};

#endif /* WelcomeButtonLayer_hpp */
