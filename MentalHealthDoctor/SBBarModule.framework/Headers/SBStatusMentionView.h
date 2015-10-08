//
//  SBStatusMentionView.h
//  StockBar
//
//  Created by 张松涛 on 14/12/25.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//
/**
 *  文中提到的吧
 */
#import <UIKit/UIKit.h>
@class DataItemDetail;
@interface SBStatusMentionView : UIView
@property (nonatomic, strong) NSArray *mentionBarNames;
@property (nonatomic, strong) DataItemDetail *mentionDetail;
@end
