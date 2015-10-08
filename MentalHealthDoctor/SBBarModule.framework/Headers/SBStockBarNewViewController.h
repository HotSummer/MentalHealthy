//
//  SBStockBarNewViewController.h
//  SBBarModule
//
//  Created by 张松涛 on 15/4/28.
//  Copyright (c) 2015年 thomas. All rights reserved.
//

#import <SBAppModule/SBBasicController.h>
@class SBStatusTableView;
@class SBStatusNewTable;

@interface SBStockBarNewViewController : SBBasicController

@property (nonatomic, strong) SBStatusNewTable *stockTable;//当前table

//刷新帖子数据
- (void)refreshStatus;
@end
