//
//  WelcomeScene.cpp
//  cn.com.we.www-mobile
//
//  Created by WE on 2018/6/21.
//

#include "WelcomeScene.hpp"
#include "WelcomeButtonLayer.hpp"

USING_NS_CC;

Scene* WelcomeScene::createScene() {
    Scene* welcomeScene = Scene::create();
    
    Sprite* background = Sprite::create("img_bg_welcome.jpg");
    background->setAnchorPoint(Point(0,0));
    background->setScale(2);
    welcomeScene->addChild(background);
    
    WelcomeButtonLayer *btn = WelcomeButtonLayer::create();
//    btn->setParent(welcomeScene);
    welcomeScene->addChild(btn);
    
    return welcomeScene;
}
