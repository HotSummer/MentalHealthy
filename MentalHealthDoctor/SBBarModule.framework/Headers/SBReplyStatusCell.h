/*
 #####################################################################
 # File    : SBReplyStatusCell.h
 # Project : StockBar
 # Created : 14-5-30
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 带原回复的帖子单元格
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  :
 # Author:
 # Notes :
 #
 #####################################################################
 */

#import "SBStatusCell.h"

@class SBReplySourceView;
@class SBReplyToolButton;

@interface SBReplyStatusCell : SBStatusCell <SBHttpDataLoaderDelegate> {
    SBReplyToolButton *_toolBtn;                         //更多功能
    SBLinkLabel *replyTextLLbl;                           //回复带链接
    SBReplySourceView *replySourceView;         //原帖
}

@property (strong) SBHttpDataLoader *assistLoader;     //赞操作

/** 查看帖子 */
- (void)viewStatus;

@end
