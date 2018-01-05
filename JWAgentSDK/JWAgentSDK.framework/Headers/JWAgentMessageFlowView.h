//
//  JWAgentMessageFlowView.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/16.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"

@class JWAgentAdvertDataModel;
@interface JWAgentMessageFlowView : UIView

/**
 @brief  初始化
 @param  messageFlowViewType  信息流View类型
 @param  messageFlowResultCallback 回调结果
 */
-(instancetype)initWithFrame:(CGRect)frame
         messageFlowViewType:(IAdMessageFlowViewType)messageFlowViewType
                 clickResult:(void(^)(IAdSuccessBack successBack,NSString *result))messageFlowResultCallback;

/**
 @brief  广告数据model
 */
@property (nonatomic,strong)JWAgentAdvertDataModel * advertDataModel;


/**
 @brief  信息流小图自身高度
 @param  width  宽度 ->注意:一定要和初始化宽度保持一致
 */
+(CGFloat)getMessageFlowViewSmallImageHeight:(CGFloat)width;


/**
 @brief  信息流大图自身高度
 @param  width  宽度 ->注意:一定要和初始化宽度保持一致
 */
+(CGFloat)getMessageFlowViewBigImageHeight:(CGFloat)width;

@end
