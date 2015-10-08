//
//  SBStatusBodySkipPageView.h
//  StockBar
//
//  Created by Chenyz on 14/12/8.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBStatusBodySkipPageView : UIView<UITextFieldDelegate>

@property (nonatomic, copy) void (^jumpToBlock)(NSUInteger pageNumber);
//最大页数
@property (nonatomic, unsafe_unretained) NSUInteger maxPage;

+ (SBStatusBodySkipPageView *)createNew;
//显示页面跳转界面
- (void)showSkipPageView;
//隐藏页面跳转界面
- (void)dismissSkipPageView;

@end
