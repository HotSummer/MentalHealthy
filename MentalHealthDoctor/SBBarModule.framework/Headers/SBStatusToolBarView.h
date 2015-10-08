/*
 #####################################################################
 # File    : SBStatusToolBarView.h
 # Project : StockBar
 # Created : 15-3-13
 # DevTeam : chenwenqi
 # Author  : chenwenqi
 # Notes   : 工具条
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

#import <UIKit/UIKit.h>

@interface SBStatusToolBarView : UIView

// 数据
@property (nonatomic, strong) DataItemDetail *postDetail;
@property (nonatomic, strong) NSString *postId;

//父视图
@property (nonatomic, weak) UIViewController *parentController;

@end
