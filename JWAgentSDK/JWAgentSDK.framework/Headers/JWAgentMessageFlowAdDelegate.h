//
//  JWAgentMessageFlowAdDelegate.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/26.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JWAgentMessageFlowView;
@protocol JWAgentMessageFlowAdDelegate <NSObject>

@optional

#pragma mark *** 点击 ***

/**
 图文广告点击
 
 @param messageFlowView messageFlowView
 @param adverType 广告类型
 */
- (void)adMessageFlowDidClick:(JWAgentMessageFlowView *)messageFlowView
                    adverType:(IAdDataType)adverType;

/**
 webView点击返回 (从webView返回广告控制器页面)
 
 @param messageFlowView messageFlowView
 */
- (void)adMessageFlowWebViewReturn:(JWAgentMessageFlowView *)messageFlowView;

@end
