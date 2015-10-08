/*
 #####################################################################
 # File    : SBTableRefreshButton.h
 # Project : StockBar
 # Created : 14-7-5
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 愚蠢的领导要求的根百度帖吧一样的刷新按钮
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

extern CGFloat const SBTableRefreshButtonBoard;       //按钮的边框大小

/**
 *  刷新列表按钮
 */
@interface SBTableRefreshButton : UIButton {
    BOOL _animating;       //是否在转
    NSTimer *_timer_roation;   //定时器
}

/**
 *  开始转圈
 */
- (void)startAnimating;

/**
 *  停止转圈
 */
- (void)stopAnimating;

@end
