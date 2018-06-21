//
//  WelcomeScene.hpp
//  cn.com.we.www-mobile
//
//  Created by WE on 2018/6/21.
//

#ifndef WelcomeScene_hpp
#define WelcomeScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class WelcomeScene : public cocos2d::Scene{
public:
    static cocos2d::Scene* createScene();
private:
    static Scene* welcomeScene;
    
};

#endif /* WelcomeScene_hpp */
