//
//  JWAgentEnumHeader.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/15.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#ifndef JWAgentEnumHeader_h
#define JWAgentEnumHeader_h

/// 广告请求成功
#define kJWAgentSDKErrorCodeAdvertSuccess               0

/// 加密值比对失败
#define kJWAgentSDKErrorCodeEncryptFaild                1

/// 应用Appkey不规范
#define kJWAgentSDKErrorCodeAppkeyError                 2

/// 应用Appkey不存在
#define kJWAgentSDKErrorCodeAppkeyNonentity             3

/// 请求广告不是客户端的量
#define kJWAgentSDKErrorCodeNoClientAdvert              5

/// 应用下没有该类型的广告
#define kJWAgentSDKErrorCodeNoTypeAdvert                6

/// 开发者账号不存在或者异常
#define kJWAgentSDKErrorCodeUserException               7

/// 开发者的应用不存在或者异常
#define kJWAgentSDKErrorCodeAbnormalityApp              8

/// 开发者对应的应用不存在或者异常
#define kJWAgentSDKErrorCodeNoMatchAPP                  9

/// 广告被限制限制平台
#define kJWAgentSDKErrorCodeRestrictedPlatform          10

/// 广告被限制会员
#define kJWAgentSDKErrorCodeRestrictedMembership        11

/// 广告被限制站点
#define kJWAgentSDKErrorCodeRestrictedSite              12

/// 广告被限制分类
#define kJWAgentSDKErrorCodeRestrictedClass             13

/// 经过弹出概率之后没有广告
#define kJWAgentSDKErrorCodePOPNoAdvertising            14

/// 经过弹出概率之后没有广告
#define kJWAgentSDKErrorCodeFilterNOAdvertsing          15

/// 广告被限制流量端口
#define kJWAgentSDKErrorCodeLimitFlowPort               16

/// 广告限制运营商
#define kJWAgentSDKErrorCodeLimitFlowOperator           17

/// 请求的广告类型不存在
#define kJWAgentSDKErrorCodeTypeNoExistence             19

/// 广告被限制地区
#define kJWAgentSDKErrorCodeRestrictedArea              22

/// 应用下被限制地区
#define kJWAgentSDKErrorCodeAPPRestrictedArea           23

typedef NS_ENUM (NSInteger, IAdSuccessBack)
{
    OnSuccess = 0,          // 广告加载成功
    OnError,                // 广告失败
    OnClick,                // 点击广告
};

typedef NS_ENUM (NSInteger, IAdDataType)
{
    IAdDataTypeFullScreen,                // 全屏
    IAdDataTypeBannerLow,                 // 横幅(banner)低
    IAdDataTypeBanner,                    // 横幅(banner)
    IAdDataTypeMessageFlowThreeImages,    // 信息流三小图
    IAdDataTypeMessageFlowSmallImage,     // 信息流广告小图
    IAdDataTypeMessageFlowBigImage,       // 信息流广告大图
    IAdDataTypeRedEnvelope,               // 红包
};

// 错误码
typedef NS_ENUM (NSInteger, JWAgentSDKErrorCode)
{
    JWAgentSDKErrorCodeAdvertSuccess            =       kJWAgentSDKErrorCodeAdvertSuccess,
    JWAgentSDKErrorCodeEncryptFaild             =       kJWAgentSDKErrorCodeEncryptFaild,
    JWAgentSDKErrorCodeAppkeyError              =       kJWAgentSDKErrorCodeAppkeyError,
    JWAgentSDKErrorCodeAppkeyNonentity          =       kJWAgentSDKErrorCodeAppkeyNonentity,
    JWAgentSDKErrorCodeNoClientAdvert           =       kJWAgentSDKErrorCodeNoClientAdvert,
    JWAgentSDKErrorCodeNoTypeAdvert             =       kJWAgentSDKErrorCodeNoTypeAdvert,
    JWAgentSDKErrorCodeUserException            =       kJWAgentSDKErrorCodeUserException,
    JWAgentSDKErrorCodeAbnormalityApp           =       kJWAgentSDKErrorCodeAbnormalityApp,
    JWAgentSDKErrorCodeNoMatchAPP               =       kJWAgentSDKErrorCodeNoMatchAPP,
    JWAgentSDKErrorCodeRestrictedPlatform       =       kJWAgentSDKErrorCodeRestrictedPlatform,
    JWAgentSDKErrorCodeRestrictedMembership     =       kJWAgentSDKErrorCodeRestrictedMembership,
    JWAgentSDKErrorCodeRestrictedSite           =       kJWAgentSDKErrorCodeRestrictedSite,
    JWAgentSDKErrorCodeRestrictedClass          =       kJWAgentSDKErrorCodeRestrictedClass,
    JWAgentSDKErrorCodePOPNoAdvertising         =       kJWAgentSDKErrorCodePOPNoAdvertising,
    JWAgentSDKErrorCodeFilterNOAdvertsing       =       kJWAgentSDKErrorCodeFilterNOAdvertsing,
    JWAgentSDKErrorCodeLimitFlowPort            =       kJWAgentSDKErrorCodeLimitFlowPort,
    JWAgentSDKErrorCodeLimitFlowOperator        =       kJWAgentSDKErrorCodeLimitFlowOperator,
    JWAgentSDKErrorCodeTypeNoExistence          =       kJWAgentSDKErrorCodeTypeNoExistence,
    JWAgentSDKErrorCodeRestrictedArea           =       kJWAgentSDKErrorCodeRestrictedArea,
    JWAgentSDKErrorCodeAPPRestrictedArea        =       kJWAgentSDKErrorCodeAPPRestrictedArea,
};

#endif /* JWAgentEnumHeader_h */
