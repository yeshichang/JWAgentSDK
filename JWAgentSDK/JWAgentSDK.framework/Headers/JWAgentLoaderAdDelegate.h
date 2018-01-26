//
//  JWAgentLoaderAdDelegate.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/25.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "JWAgentEnumHeader.h"

@class JWAgentLoader;
@class JWAgentAdvertDataModel;
@protocol JWAgentLoaderAdDelegate <NSObject>

/**
 广告数据加载成功
 
 @param adLoader 加载数据类
 @param adverType 广告类型
 @param advertDataModel 广告数据模型 (model)
 */
- (void)adLoaderDidFinishLoading:(JWAgentLoader *)adLoader
                       adverType:(IAdDataType)adverType
                 advertDataModel:(JWAgentAdvertDataModel *)advertDataModel;

/**
 广告数据加载失败
 
 @param adLoader 加载数据类
 @param error 错误error
 */
- (void)adLoader:(JWAgentLoader *)adLoader didFailToReceiveAdWithError:(NSError *)error;

@end
