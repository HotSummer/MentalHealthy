/*
 #####################################################################
 # File    : SBTableTabController.h
 # Project : StockBar
 # Created : 14-6-21
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 列表切换的父类，参考@谢的代码
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


@class SBTabBar;

/**
 *  切换tab协议
 */
@protocol SBTabBarDelegate <NSObject>
@optional
- (BOOL)tabBar:(SBTabBar *)tabBar shouldSelectItem:(UITabBarItem *)item;
- (void)tabBar:(SBTabBar *)tabBar didSelectItem:(UITabBarItem *)item;
@end

/**
 *  切换tab
 */
@interface SBTabBar : UIView

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) UITabBarItem *selectedItem;
@property (weak, nonatomic) id<SBTabBarDelegate> delegate;
@property (copy, nonatomic) NSArray *tabBarItemButtons;
@property (strong, nonatomic) UIFont *tabBarButtonFont;

- (void)setTintColor:(UIColor *)tintColor;
- (UIColor *)tintColor;

@end

@class SBTableTabController;

/**
 *  切换tabCtrl协议
 */
@protocol SBTableTabControllerDelegate <NSObject>
@optional
- (BOOL)tableTab:(SBTableTabController *)sbTableTabController shouldSelectItem:(UIViewController *)controller;
- (void)tableTab:(SBTableTabController *)sbTableTabController didSelectItem:(UIViewController *)controller;
@end

/**
 *  列表切换Ctrl
 */
@interface SBTableTabController : SBBasicController <UIScrollViewDelegate, SBTabBarDelegate>

@property (nonatomic) NSUInteger selectedIndex;
@property (strong, nonatomic) UIViewController *selectedViewController;
@property (copy, nonatomic) NSArray *viewControllers;

@property (readonly, nonatomic) SBTabBar *tabBar;
@property (strong, nonatomic) UIScrollView *containerView;
@property (weak, nonatomic) id<SBTableTabControllerDelegate> delegate;

// Layout
- (void)layoutTabBar;
- (void)layoutViewControllers;
- (void)layoutSubViewControllerToSelectedViewController;

@end
