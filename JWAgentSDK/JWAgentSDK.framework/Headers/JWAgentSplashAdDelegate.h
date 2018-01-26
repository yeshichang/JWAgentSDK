//
//  JWAgentSplashAdDelegate.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/25.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JWAgentEnumHeader.h"

@class JWAgentSplash;
@protocol JWAgentSplashAdDelegate <NSObject>

@optional

#pragma mark *** 数据 ***

/**
 开屏广告数据加载缓存成功
 
 @param agentSplash agentSplash
 @param adverType 广告类型
 */
- (void)adSplashDidFinishLoading:(JWAgentSplash *)agentSplash adverType:(IAdDataType)adverType;

/**
 开屏广告数据加载缓存失败
 
 @param agentSplash agentSplash
 @param error 错误error
 */
- (void)adSplash:(JWAgentSplash *)agentSplash didFailToReceiveAdWithError:(NSError *)error;


#pragma mark *** 展示  点击 ***

/**
 开屏广告展示
 
 @param agentSplash agentSplash
 @param adverType 广告类型
 */
- (void)adSplashshowed:(JWAgentSplash *)agentSplash adverType:(IAdDataType)adverType;

/**
 开屏广告点击
 
 @param agentSplash agentSplash
 @param adverType 广告类型
 */
- (void)adSplashDidClick:(JWAgentSplash *)agentSplash adverType:(IAdDataType)adverType;


#pragma mark *** 返回 回调 ***

/**
 广告视图消失 (返回主控制器)
 
 @param agentSplash agentSplash
 */
- (void)adSplashscreenDismiss:(JWAgentSplash *)agentSplash;

/**
 webView点击返回 (从webView返回广告控制器页面)
 
 @param agentSplash agentSplash
 */
- (void)adSplashWebViewReturn:(JWAgentSplash *)agentSplash;

@end
