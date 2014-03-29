#pragma once

#include "cocos2d.h"

USING_NS_CC;

class KCUIlayer : public Layer
{
public:
	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();

	// implement the "static create()" method manually
	CREATE_FUNC(KCUIlayer);

};
