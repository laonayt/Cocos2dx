//
//  SelectScene.cpp
//  cn.com.we.www-mobile
//
//  Created by WE on 2018/6/21.
//

#include "SelectScene.hpp"

USING_NS_CC;

Scene *SelectScene::selectScene = nullptr;

Scene *SelectScene::create() {
    selectScene = Scene::create();
    
//    Sprite* background = Sprite::create("selectSceneBackground.jpg");
//    background->setScale(2.0f);
//    background->setAnchorPoint(Point(0, 0));
//    selectScene->addChild(background);
    
    Sprite* blank1 = Sprite::create("img_bg_1.jpg");
    blank1->setScale(0.5);
    //blank1->setAnchorPoint(Point(0, 0));
    blank1->setPosition(165, 860);
    selectScene->addChild(blank1);
    
    Sprite* blank2 = Sprite::create("img_bg_2.jpg");
    blank2->setScale(0.5);
    blank2->setPosition(365, 860);
    selectScene->addChild(blank2);
    Sprite* blank2_locked = Sprite::create("locked.png");
    blank2_locked->setPosition(365, 860);
    selectScene->addChild(blank2_locked);
    
    Sprite* blank3 = Sprite::create("img_bg_3.jpg");
    blank3->setScale(0.5);
    blank3->setPosition(565, 860);
    selectScene->addChild(blank3);
    Sprite* blank3_locked = Sprite::create("locked.png");
    blank3_locked->setPosition(565, 860);
    selectScene->addChild(blank3_locked);
    
    Sprite* blank4 = Sprite::create("img_bg_4.jpg");
    blank4->setScale(0.5);
    blank4->setPosition(165, 510);
    selectScene->addChild(blank4);
    Sprite* blank4_locked = Sprite::create("locked.png");
    blank4_locked->setPosition(165, 510);
    selectScene->addChild(blank4_locked);
    
    Sprite* blank5 = Sprite::create("img_bg_5.jpg");
    blank5->setScale(0.5);
    blank5->setPosition(365, 510);
    selectScene->addChild(blank5);
    Sprite* blank5_locked = Sprite::create("locked.png");
    blank5_locked->setPosition(365, 510);
    selectScene->addChild(blank5_locked);
    
    Sprite* blank6 = Sprite::create("blank.png");
    blank6->setPosition(565, 510);
    selectScene->addChild(blank6);
    Sprite* blank6_locked = Sprite::create("locked.png");
    blank6_locked->setPosition(565, 510);
    selectScene->addChild(blank6_locked);
    
    TTFConfig ttfConfig("fonts/SIMLI.TTF", 100);
    Label* titleLabel = Label::createWithTTF(ttfConfig, "选择关卡", TextHAlignment::CENTER);
    titleLabel->enableShadow();
    titleLabel->setColor(Color3B(255, 201, 37));
    titleLabel->setPosition(Director::getInstance()->getWinSize().width / 2, Director::getInstance()->getWinSize().height - 100);
    selectScene->addChild(titleLabel);
    
    return selectScene;
}
