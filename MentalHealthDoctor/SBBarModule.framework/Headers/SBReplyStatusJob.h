//
//  SBReplyStatusJob.h
//  StockBar
//
//  Created by 缪和光 on 14-6-16.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import "SBStatusJobBase.h"

@interface SBReplyStatusJob : SBStatusJobBase

@property (nonatomic, copy) NSString *postId;//帖子id
@property (nonatomic, copy) NSString *newsId;//新接口不用了
@property (nonatomic, copy) NSString *floorReplyId;//子回复
@property (nonatomic, copy) NSString *text;//内容
//@property (nonatomic, copy) NSString *user;
@property (nonatomic, assign) BOOL alsoRepost; //同时转发
@property (nonatomic, assign) SBV3AritlceType aritlceType;//类型

/** 摘要 新闻 */
@property (nonatomic, assign) SBV3AritlceSpecialType aritlceSpecialType;

@end
