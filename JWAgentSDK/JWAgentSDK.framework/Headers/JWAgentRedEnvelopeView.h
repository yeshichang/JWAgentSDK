//
//  JWAgentRedEnvelopeView.h
//  JWAgentSDK
//
//  Created by mac on 2018/1/6.
//  Copyright © 2018年 JWAgentSDK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"

@interface JWAgentRedEnvelopeView : UIView

/* 关闭按钮 默认:展示YES */
@property (nonatomic,assign)BOOL isShowCloseButton;

/* 动画 默认:开启YES */
@property (nonatomic,assign)BOOL isAnimation;

/* 关闭按钮字体颜色 默认:[UIColor grayColor]  */
@property (nonatomic,strong)UIColor  * closeButtonTitleColor;

/* 关闭按钮字体大小 默认:[UIFont systemFontOfSize:10] */
@property (nonatomic,strong)UIFont  * closeButtonTitleFont;


/* 回调结果 */
@property (nonatomic,copy) void(^redEnvelopeAdvertResultCallback)(IAdSuccessBack successBack,NSString * result);

/* 关闭回调 */
@property (nonatomic ,copy) void(^redEnvelopeAdvertCloseClickCallback)(void);

@end
