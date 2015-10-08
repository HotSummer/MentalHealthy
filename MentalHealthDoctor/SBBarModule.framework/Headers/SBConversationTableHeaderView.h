//
//  SBConversationTableHeaderView.h
//  StockBar
//
//  Created by Thomas on 15/1/20.
//  Copyright (c) 2015年 Thomas. All rights reserved.
//

#import <SBModule/SBLinkLabel.h>
#import "SBReplyToolButton.h"

@interface SBConversationTableHeaderView : UIView

@property (nonatomic, strong) SBCacheButton *buttonAvatar;
@property (nonatomic, strong) UILabel *labelUserName;
@property (nonatomic, strong) SBReplyToolButton *toolBtn;
@property (nonatomic, strong) UILabel *labelTime;
@property (nonatomic, strong) SBLinkLabel *labelContent;
@property (nonatomic, strong) UIView *seperateLine;
@property (nonatomic, strong) DataItemDetail *userDetail;

/** 每次更新content的时候要调用一次 */
- (void)updateFrame;

@end