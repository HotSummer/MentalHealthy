//
//  SBMyStockPostsViewController.h
//  StockBar
//
//  Created by 张松涛 on 14-10-28.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//
#import <SBAppModule/SBBasicController.h>
#import <SBAppModule/SBViewScrollOptionBar.h>
#import "SBMyHotPostsTable.h"
#import "SBMyNewPostsTable.h"

//关注的股
@interface SBMyStockPostsController : SBBasicController

/** 滚动选项卡 */
@property (nonatomic,strong) SBViewScrollOptionBar *viewScrollOptionBar;
/** 热帖的table */
@property (nonatomic,strong) SBMyHotPostsTable *myHotPostsTable;
/** 新帖的table */
@property (nonatomic,strong) SBMyNewPostsTable *myNewPostsTable;

@end
