//
//  WelcomeButtonLayer.cpp
//  cn.com.we.www-mobile
//
//  Created by WE on 2018/6/21.
//

#include "WelcomeButtonLayer.hpp"


USING_NS_CC;

bool WelcomeButtonLayer::init() {
    MenuItemSprite *itemSprite = MenuItemSprite::create(Sprite::create("startGameButton.png"), Sprite::create("startGameButton.png"), CC_CALLBACK_1(WelcomeButtonLayer::btnClick, this));
    
    Menu *btn = Menu::create(itemSprite, NULL);
    btn->setAnchorPoint(Point(0,1));
    btn->setPosition(Director::getInstance()->getWinSize().width/2,100);
    this->addChild(btn);
    
    return true;
}

void WelcomeButtonLayer::btnClick(Ref *sender) {
    Scene *select = TransitionFade::create(2.f, SelectScene::create());
    Director::getInstance()->replaceScene(select);
}
