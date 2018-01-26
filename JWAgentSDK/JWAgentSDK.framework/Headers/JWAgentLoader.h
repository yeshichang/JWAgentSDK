//
//  JWAgentLoader.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/25.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "JWAgentEnumHeader.h"
#import "JWAgentLoaderAdDelegate.h"

@class JWAgentAdvertDataModel;
@interface JWAgentLoader : NSObject

/**
 加载数据类代理
 */
@property (nonatomic ,weak) id <JWAgentLoaderAdDelegate> delegate;

/**
 初始化加载数据类
 
 @param advertType 广告类型
 @return 加载数据类
 */
- (instancetype)initWithIAdDataType:(IAdDataType)advertType;

/**
 获取广告数据(原生广告)
 */
- (void)loadNativeRequest;


/**
 @brief  跳入网页视图
 @param  advertDataModel  广告数据model
 @param  index 索引(除此信息流三小图<IAdDataTypeMessageFlowThreeImages>以外,默认传入0)
 */
- (void)pushJWAgentWebView:(JWAgentAdvertDataModel *)advertDataModel
                 withIndex:(NSInteger)index;

@end
