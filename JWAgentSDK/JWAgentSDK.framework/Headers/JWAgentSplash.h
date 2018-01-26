//
//  JWAgentSplash.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/25.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"
#import "JWAgentSplashAdDelegate.h"

@interface JWAgentSplash :NSObject

@property (nonatomic ,weak) id <JWAgentSplashAdDelegate> delegate;

/*!
 @brief      显示倒计时按钮
 @discussion 默认值为YES
 */
@property(nonatomic, assign) BOOL showSplashscreenAdvertCountdown;

/**
 尺寸
 */
@property (nonatomic ,assign) CGRect splashFrame;

/**
 初始化开屏广告类
 
 @param splashFrame 开屏广告尺寸
 @return 开屏广告类
 */
- (instancetype)initWithFrame:(CGRect)splashFrame;

/**
 加载开屏广告
 */
- (void)loadSplashRequest;

@end
