//
//  JWAgentRedEnvelopeAdDelegate.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/26.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JWAgentRedEnvelopeView;
@protocol JWAgentRedEnvelopeAdDelegate <NSObject>

@optional

#pragma mark *** 展示 点击 ***

/**
 红包广告展示
 
 @param redEnvelopeView redEnvelopeView
 @param adverType 广告类型
 @param error 错误error
 */
- (void)adRedEnvelopeshowed:(JWAgentRedEnvelopeView *)redEnvelopeView
                  adverType:(IAdDataType)adverType
         receiveAdWithError:(NSError *)error;

/**
 红包广告点击
 
 @param redEnvelopeView redEnvelopeView
 @param adverType 广告类型
 */
- (void)adRedEnvelopeDidClick:(JWAgentRedEnvelopeView *)redEnvelopeView
                    adverType:(IAdDataType)adverType;

/**
 红包广告关闭按钮被点击
 
 @param redEnvelopeView redEnvelopeView
 */
- (void)adRedEnvelopeDidClickCloseButton:(JWAgentRedEnvelopeView *)redEnvelopeView;

/**
 webView点击返回 (从webView返回广告控制器页面)
 
 @param redEnvelopeView redEnvelopeView
 */
- (void)adRedEnvelopeWebViewReturn:(JWAgentRedEnvelopeView *)redEnvelopeView;

@end
