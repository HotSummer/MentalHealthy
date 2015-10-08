//
//  SBStatusBodySectionHeader.h
//  StockBar
//
//  Created by 缪和光 on 14-6-17.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBStatusBodySectionHeaderBase.h"

@class SBStatusBodyTableView;

/**
 普通帖的section header
 */
@interface SBStatusBodySectionHeader : SBStatusBodySectionHeaderBase

@property (nonatomic, strong) UIButton *buttonComments;
@property (nonatomic, strong) UIButton *buttonReposts;
@property (nonatomic, strong) UIButton *buttonReverseOrder;

// ----------- 按钮显示控制 ------------
// 所有默认值都是YES
@property (nonatomic, unsafe_unretained) BOOL showButtonComments;
@property (nonatomic, unsafe_unretained) BOOL showButtonReposts;
@property (nonatomic, unsafe_unretained) BOOL showButtonReverseOrder;
@property (nonatomic, unsafe_unretained) BOOL isSBComment;

@end
