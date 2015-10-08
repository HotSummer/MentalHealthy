//
//  SBIconButton.h
//  StockBar
//
//  Created by 缪和光 on 14-7-9.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

//按钮类型
typedef NS_ENUM(NSInteger, SBStatusBodyMoreButtonType) {
    SBStatusBodyMoreButtonTypeFavourite,
    SBStatusBodyMoreButtonTypeTurnPage,
    SBStatusBodyMoreButtonTypeAuthorOnly
};

/**
 正文界面“更多”按钮点击之后的更多界面里面的按钮
 @See SBStatusBodyMoreView
 */
@interface SBIconButton : UIButton

@property (nonatomic, strong) UIImage *icon;
@property (nonatomic, strong) UIImage *iconSelected;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleSelected;
@property (nonatomic, assign) SBStatusBodyMoreButtonType type;


@property (nonatomic, strong) UIImageView *iconView;
@property (nonatomic, strong) UILabel *myTitleLabel; //防止跟原本的titleLabel冲突

@end
