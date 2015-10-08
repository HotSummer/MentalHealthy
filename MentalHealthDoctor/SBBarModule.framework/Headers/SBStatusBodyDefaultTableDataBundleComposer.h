//
//  SBStatusBodyDefaultTableDataBundleComposer.h
//  StockBar
//
//  Created by 缪和光 on 14-8-22.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import "SBStatusBodyTableDataBundleComposerProtocol.h"

@interface SBStatusBodyDefaultTableDataBundleComposer : NSObject<SBStatusBodyTableDataBundleComposerProtocol>

/**
 正文所在的股吧名
 */
@property (nonatomic, copy) NSString *stockBarName;
/**
 正文所在的股吧id
 */
@property (nonatomic, copy) NSString *stockBarId;
/**
 正文所在的股吧类型
 */
@property (nonatomic, unsafe_unretained) NSInteger stockBarType;

/**
 帖子id
 */
@property (nonatomic, copy) NSString *postId;

/**
 楼主id
 */
@property (nonatomic, copy) NSString *postAuthorId;

/**
 嘉宾信息
 */
@property (nonatomic, copy) NSArray *guestInfoArray;

/**
 帖子类型 0：普通帖，1：新闻，2：研报，3：公告，9：投资组合
 */
@property (nonatomic, assign) SBV3AritlceType type;

- (NSArray *)composeTableDataBundles;

@end
