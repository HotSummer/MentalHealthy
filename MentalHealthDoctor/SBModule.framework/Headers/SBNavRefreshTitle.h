/*
 #####################################################################
 # File    : SBNavRefreshTitle.h
 # Project : StockBar
 # Created : 14-6-10
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 导航条上的刷新
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

#define __SB_WIDTH_REFRESHNAV_VIEW          APPCONFIG_UI_SCREEN_FWIDTH / 2

#define __SB_BOARD_REFRESH_BUTTON           20.0f

#define __SB_FONT_REFRESH_TITLE          17.0f
#define __SB_FONT_REFRESH_SUBTITLE           13.0f

#define __SB_FONT_REFRESH_ONLY_TITLE          18.0f

@class SBRefreshButton;
@protocol RefreshButtonDelegate <NSObject>

- (void) refreshBtnClicked;

@end


/**
 *  刷新转圈
 */
@interface SBRefreshButton : UIButton {
    BOOL _animating;       //是否在转
    int  _animatedRadius;  //转动角度
    
    NSTimer *_timer_roation;   //定时器
}
@property (nonatomic,weak) id<RefreshButtonDelegate>delegate;
@property (nonatomic,strong) UIImage *btnImage;
@property (nonatomic,assign) BOOL animating;       //是否在转

//开始转
- (void) startAnimate;
//结束转
- (void) stopAnimate;
//结束转直到原来位置
- (void) stopAnimateWaitUntilOriginPosition;

@end

/**
 *  刷新界面
 */
@interface SBNavRefreshTitle : UIView

@property (nonatomic, strong) SBRefreshButton *refreshButton;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *subTitleLabel;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;

- (id)initWithTitle:(NSString *)title subTitle:(NSString *)subTitle;

/**
 导航条刷新按钮
 
 @param title    主标题
 @param subTitle 副标题
 @param target   方法接收
 @param action   方法
 
 @return 导航标题
 */
- (id)initWithTitle:(NSString *)title subTitle:(NSString *)subTitle target:(id)target action:(SEL)action;

/**
 *  开始加载
 */
- (void)startAnimatingRefreshButton;
/**
 *  停止加载
 */
- (void)stopAnimatingRefreshButton;
- (void)enableRefreshButton;
- (void)disableRefreshButton;

//是否在加载中
- (BOOL)isRefreshing;

@end
