//
//  JWAgentEnumHeader.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/15.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#ifndef JWAgentEnumHeader_h
#define JWAgentEnumHeader_h

typedef enum : NSUInteger {
    OnSuccess =0,  // 广告加载成功
    OnError,       // 广告失败
    OnClick,       // 点击广告
} IAdSuccessBack;


typedef enum : NSUInteger {
    IAdMessageFlowViewTypeSmallImage =0,  // 信息流广告小图
    IAdMessageFlowViewTypeBigImage,       // 信息流广告大图
} IAdMessageFlowViewType;


typedef enum : NSUInteger {
    IAdDataTypeFullScreen,                // 全屏
    IAdDataTypeBannerLow,                 // 横幅(banner)低
    IAdDataTypeBanner,                    // 横幅(banner)
    IAdDataTypeMessageFlowThreeImages,    // 信息流三小图
    IAdDataTypeMessageFlowSmallImage,     // 信息流广告小图
    IAdDataTypeMessageFlowBigImage,       // 信息流广告大图
    IAdDataTypeRedEnvelope,               // 红包
} IAdDataType;


#endif /* JWAgentEnumHeader_h */
