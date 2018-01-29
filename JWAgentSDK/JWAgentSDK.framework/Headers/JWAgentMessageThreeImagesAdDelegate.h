//
//  JWAgentMessageThreeImagesAdDelegate.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/26.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JWAgentMessageThreeImagesView;
@protocol JWAgentMessageThreeImagesAdDelegate <NSObject>

@optional

#pragma mark *** 点击 ***

/**
 三小图广告点击
 
 @param messageThreeImagesView messageThreeImagesView
 @param adverType 广告类型
 */
- (void)adMessageThreeImagesDidClick:(JWAgentMessageThreeImagesView *)messageThreeImagesView
                           adverType:(IAdDataType)adverType;

/**
 webView点击返回 (从webView返回广告控制器页面)
 
 @param messageThreeImagesView messageThreeImagesView
 */
- (void)adMessageThreeImagesWebViewReturn:(JWAgentMessageThreeImagesView *)messageThreeImagesView;

@end
