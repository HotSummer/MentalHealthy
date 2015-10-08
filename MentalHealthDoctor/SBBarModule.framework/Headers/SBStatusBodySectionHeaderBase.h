//
//  SBStatusBodySectionHeaderBase.h
//  StockBar
//
//  Created by 缪和光 on 14-8-22.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBStatusBodySectionHeaderProtocol.h"

@interface SBStatusBodySectionHeaderBase : UIView<SBStatusBodySectionHeaderProtocol>

@property (nonatomic, weak) SBStatusBodyTableView *tableView;

/**
 是否处于“只看楼主”的状态下
 
 处于只看楼主的状态下时，点击评论按钮实际请求的是“只看楼主请求”。
 但由于只看楼主按钮并不在section header或者table view里，所以感知不到。
 只能通过额外变量来判断。
 */
@property (nonatomic, assign) BOOL authorOnlyMode;

@property (nonatomic, strong) UIImageView *indicator;

- (void)moveIndicatorToButton:(UIButton *)button withAnimation:(BOOL)animation;

@end
