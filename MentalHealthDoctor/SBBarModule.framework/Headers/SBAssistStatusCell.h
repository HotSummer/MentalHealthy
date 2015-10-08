/*
 #####################################################################
 # File    : SBAssistStatusCell.h
 # Project : StockBar
 # Created : 14/11/13
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
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

//赞的单元格
@interface SBAssistStatusCell : SBStatusCell {
    SBLinkLabel *replyTextLLbl;                           //回复带链接
    SBReplySourceView *replySourceView;
}

/** 查看帖子 */
- (void)viewStatus;

@end

//赞帖子的单元格
@interface SBAssistStatusPostCell : SBAssistStatusCell {
}

@end

//赞回复的单元格
@interface SBAssistStatusReplyCell : SBAssistStatusCell {
}

@end