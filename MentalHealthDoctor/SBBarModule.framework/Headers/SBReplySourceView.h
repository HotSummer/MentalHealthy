/*
 #####################################################################
 # File    : SBReplySourceView.h
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

#define __SB_IMG_STATUS_SOURCE_BG    [UIImage imageNamed:@"sb_status_cell_source.png"]       //原帖背景

#import <SBModule/SBLinkLabel.h>                       //图文标签，点击使用

extern CGFloat const SBMaxSourceHeight;             //原帖最大高度

@interface SBReplySourceView : UIButton <SBLinkLabelDelegate> {
    SBLinkLabel *sourceReplyTextLbl;                        //原回复内容
}

@property (nonatomic, assign) UITableViewCell<SBLinkLabelDelegate> *cell;        //所在单元格

@property (nonatomic, copy) NSAttributedString *sourceReplyText;        //回复的内容

@end
