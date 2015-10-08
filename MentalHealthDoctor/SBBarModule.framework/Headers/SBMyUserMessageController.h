//
//  SBMyUserController.h
//  StockBar
//
//  Created by 张松涛 on 14-9-11.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//
#import <SBAppModule/SBBasicController.h>
#import <SBAppModule/SBViewScrollOptionBar.h>
#import "SBMyUserReplyTable.h"
#import "SBMyUserStatusTable.h"

//关注的人
@interface SBMyUserMessageController : SBBasicController

/** 滚动选项卡 */
@property (nonatomic,strong) SBViewScrollOptionBar *viewScrollOptionBar;
/** 主帖的table */
@property (nonatomic,strong) SBMyUserStatusTable *myUserStatusTable;
/** 评论的table */
@property (nonatomic,strong) SBMyUserReplyTable *myUserReplyTable;

@end
