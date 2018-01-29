//
//  JWAgentMessageFlowView.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/16.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"
#import "JWAgentMessageFlowAdDelegate.h"

@class JWAgentAdvertDataModel;
@interface JWAgentMessageFlowView : UIView

/**
 MessageFlow 代理
 */
@property (nonatomic ,weak) id <JWAgentMessageFlowAdDelegate> delegate;

/**
 @brief  初始化
 @param  messageFlowViewType  信息流View类型
 */
- (instancetype)initWithFrame:(CGRect)frame
          messageFlowViewType:(IAdDataType)messageFlowViewType;


/**
 @brief  广告数据model
 */
@property (nonatomic, strong) JWAgentAdvertDataModel *advertDataModel;

/**
 信息流小图文大图文自身高度
 
 @param adDataType 广告类型
 @param width 自身宽度  ->注意:一定要和初始化宽度保持一致
 @return 返回高度
 */
+ (CGFloat)getMessageFlowViewHeightWithType:(IAdDataType)adDataType
                                      width:(CGFloat)width;
@end
