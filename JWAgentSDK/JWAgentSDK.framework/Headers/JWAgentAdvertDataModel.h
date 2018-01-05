//
//  JWAgentAdvertDataModel.h
//  JWAgentSDK
//
//  Created by ShaoYueZhang on 2017/12/15.
//  Copyright © 2017年 JWAgentSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JWAgentAdvertDataModel : NSObject

/* 广告名字 */
@property (nonatomic,strong)NSString * title;

/* 广告id */
@property (nonatomic,strong)NSString * planid;

/* 广告图片数组 */
@property (nonatomic,strong)NSArray  * imagesDataArray;

/* 跳入链接 */
@property (nonatomic,strong)NSString * gotourl;

/* 点弹概率 */
@property (nonatomic, copy) NSString *pnum;

@end
