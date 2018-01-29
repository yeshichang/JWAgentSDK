//
//  JWAgentEnumHeader.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/15.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#ifndef JWAgentEnumHeader_h
#define JWAgentEnumHeader_h

#define kJWAgentSDKErrorCodeAdvertSuccess               0
#define kJWAgentSDKErrorCodeEncryptFaild                1
#define kJWAgentSDKErrorCodeAppkeyError                 2
#define kJWAgentSDKErrorCodeAppkeyNonentity             3
#define kJWAgentSDKErrorCodeNoClientAdvert              5
#define kJWAgentSDKErrorCodeNoTypeAdvert                6
#define kJWAgentSDKErrorCodeUserException               7
#define kJWAgentSDKErrorCodeAbnormalityApp              8
#define kJWAgentSDKErrorCodeNoMatchAPP                  9
#define kJWAgentSDKErrorCodeRestrictedPlatform          10
#define kJWAgentSDKErrorCodeRestrictedMembership        11
#define kJWAgentSDKErrorCodeRestrictedSite              12
#define kJWAgentSDKErrorCodeRestrictedClass             13
#define kJWAgentSDKErrorCodePOPNoAdvertising            14
#define kJWAgentSDKErrorCodeFilterNOAdvertsing          15
#define kJWAgentSDKErrorCodeLimitFlowPort               16
#define kJWAgentSDKErrorCodeLimitFlowOperator           17
#define kJWAgentSDKErrorCodeTypeNoExistence             19
#define kJWAgentSDKErrorCodeRestrictedArea              22
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
