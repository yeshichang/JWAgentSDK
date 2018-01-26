//
//  JWAgentMessageThreeImagesView.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/16.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"
#import "JWAgentMessageThreeImagesAdDelegate.h"

@class JWAgentAdvertDataModel;
@interface JWAgentMessageThreeImagesView : UIView

/**
 MessageThreeImages 代理
 */
@property (nonatomic, weak) id <JWAgentMessageThreeImagesAdDelegate> delegate;

/**
 @brief  初始化
 */
- (instancetype)initWithFrame:(CGRect)frame;

/**
 @brief  广告数据model
 */
@property (nonatomic, strong) JWAgentAdvertDataModel *advertDataModel;

/**
 @brief  信息流小图自身高度
 @param  width  宽度 ->注意:一定要和初始化宽度保持一致
 */
+ (CGFloat)getMessageThreeImagesViewHeight:(CGFloat)width;

@end
