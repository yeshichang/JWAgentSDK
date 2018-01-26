//
//  JWAgentAdvertDataModel.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/15.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JWAgentAdvertDataImageModel;
@interface JWAgentAdvertDataModel : NSObject

/** 广告名字 */
@property (nonatomic,strong)NSString * title;

/** 广告id */
@property (nonatomic,strong)NSString * planid;

/** 广告图片数组 */
@property (nonatomic,strong)NSArray<JWAgentAdvertDataImageModel *>  * imagesDataArray;

/** 跳入链接 */
@property (nonatomic,strong)NSString * gotourl;

/** 点弹 */
@property (nonatomic, copy) NSString *pnum;

/** 暗弹 */
@property (nonatomic ,copy) NSString *dktips;

@end
