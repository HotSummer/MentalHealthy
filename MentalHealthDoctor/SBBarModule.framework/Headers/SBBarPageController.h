/*
 #####################################################################
 # File    : SBBarPageController.h
 # Project : StockBar
 # Created : 14-6-5
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
//SBThemePageSegmentType本来是该放在SBThemePageController 中，但是因为有假数据，在热帖股友界面发帖会有影响
typedef NS_ENUM(NSInteger, SBThemePageSegmentType) {
    SBThemePageSegmentTypeAllPost = 0,//全部
    SBThemePageSegmentTypeHotPost = 1,//热帖
    SBThemePageSegmentTypeFriends = 2,//股友
};


#import <SBModule/SBNavRefreshTitle.h>           //导航条带刷新
#import <SBAppModule/SBSegmentOptionBar.h>

@class SBStatusTableView;


@interface SBBarPageController : SBBasicController <SBHttpDataLoaderDelegate>{
    SBNavRefreshTitle *_navTitle;           //导航标题
    SBRefreshButton *_refreshBtn;           //刷新按钮
}
@property (nonatomic, strong) SBStatusTableView *statusTable;        //全部帖子列表
@property (nonatomic ,copy) NSString *barcode;       //吧代码
@property (nonatomic ,copy) NSString *barname;       //吧名字
@property (nonatomic ,strong) DataItemDetail *barDetail;      //吧信息
@property (assign) SBV3AritlceType barArticleType;     //帖子类型
@property (nonatomic, strong) SBHttpDataLoader *barInfoLoader;      //吧信息请求

@property (nonatomic, strong) SBSegmentOptionBar *themeSegmentOptionBar;            //分隔

@property (nonatomic, assign) SBThemePageSegmentType themePageType; //分隔类型

/**
 *  导航条加载
 */
-(void)navDidLoad;

/**
 *  列表加载
 */
- (void)tableDidLoad;

/**
 *  加载吧信息
 */
- (void)loadBarInfo;

/**
 *  计算置顶帖位置
 *
 *  @return 置顶帖位置
 */
- (NSUInteger)topIndex;

@end
