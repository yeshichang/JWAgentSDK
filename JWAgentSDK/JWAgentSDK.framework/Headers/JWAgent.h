//
//  JWAgent.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/15.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JWAgentEnumHeader.h"

@class JWAgentAdvertDataModel;
@class JWAgentBannerView;
@interface JWAgent : NSObject

/**
 @brief  初始化单例
 */
+ (JWAgent*)sharedInstance;

/**
 @brief  获取SDK版本号
 */
+ (NSString*)getJWAgentSDK_version;

/**
 @brief  设置应用的日志输出的开关（默认关闭）
 @param value 是否开启标志，注意App发布时请关闭日志输出
 */
+ (void)setLogEnabled:(BOOL)value;

/**
 @param appkey 应用程序appkey，需要向开发者后台申请
 */
- (void)registerApp:(NSString *)appkey;

/*!
 @brief      显示倒计时按钮
 @discussion 默认值为YES
 */
@property(nonatomic, assign)BOOL  showSplashscreenAdvertCountdown;


/**
 @brief  获取广告数据(原生广告)
 @param  advertType   广告类型
 @param  advertDataResultCallback 回调结果
 */
- (void)getJWAgentAdvertData:(IAdDataType)advertType
                     result:(void(^)(JWAgentAdvertDataModel * advertDataModel,IAdSuccessBack successBack,NSString *result))advertDataResultCallback;


/**
 @brief  开屏广告
 @param  advertFrame  广告尺寸大小
 @param  splashscreenAdvertResultCallback 回调结果
 @parma  splashscreenDismissCallback      5s开屏自动消失的回调
 @param  splashscreenRecutnCallback       网页视图返回点击回调
 */
- (void)showSplashscreenAdvertWithFrame:(CGRect)advertFrame
                                 result:(void(^)(IAdSuccessBack successBack,NSString * result))splashscreenAdvertResultCallback
            splashscreenDismissCallback:(void(^)(void))splashscreenDismissCallback
                  webViewReturnCallback:(void(^)(void))splashscreenRecutnCallback;


/*!
 @brief      当前视图控制器导航
 @discussion 谨用:如果rootViewController(根视图控制器)父类不是UITabbarController或UINavigationController,必须设置当前显示广告界面的视图控制器导航
 [DRAgent sharedInstance].pushWebViewNavigationController =self.navigationController
 */
@property(nonatomic, strong)UINavigationController * pushWebViewNavigationController;


/**
 @brief  跳入网页视图
 @param  advertDataModel  广告数据model
 @param  index 索引(除此信息流三小图<IAdDataTypeMessageFlowThreeImages>以外,默认传入0)
 @param  clickCallback 点击回调,计费是否成功
 */
- (void)pushJWAgentWebView:(JWAgentAdvertDataModel *)advertDataModel
                withIndex:(NSInteger)index
            clickCallback:(void(^)(NSString * result))clickCallback;


/*!
 @brief      SDK中全局的网页视图减去的高度
 @discussion 默认为0
 */
@property(nonatomic, assign) CGFloat  webViewSubtractHeight;


/*!
 @brief      SDK中全局的导航背景色颜色
 @discussion 默认为自身APP导航颜色
 */
@property(nonatomic, strong) UIColor * globalNavigationBarTintColor;

/*!
 @brief      SDK中全局的导航title字体颜色
 @discussion 默认为[UIColor whiteColor]
 */
@property(nonatomic, strong) UIColor * globalNavigationBarTitleColor;


@end
