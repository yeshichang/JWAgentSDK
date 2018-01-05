//
//  JWAgentBannerView.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/16.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"

@interface JWAgentBannerView : UIView

/* 回调结果 */
@property (nonatomic,copy) void(^bannerViewAdvertResultCallback)(IAdSuccessBack successBack,NSString * result);

/* 关闭回调 */
@property (nonatomic,copy) void(^bannerViewAdvertCloseClickCallback)(void);

/* 关闭按钮是否展示 默认为YES展示*/
@property (nonatomic,assign) BOOL  isShowCloseButton;

/**
 */
-(instancetype)initWithFrame:(CGRect)frame AdDataType:(IAdDataType)adDataType;

/* 打开定时器 */
-(void)openTimer;

/* 关闭定时器 */
-(void)closeTimer;


@end
