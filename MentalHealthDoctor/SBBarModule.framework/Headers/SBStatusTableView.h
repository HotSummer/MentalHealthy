/*
 #####################################################################
 # File    : SBStatusTableView.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 股吧帖子列表 （父类，只做继承用）
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


@class SBTableRefreshButton;                //刷新按钮
@class SBTableStickyButton;                //置顶按钮

#define __SB_COLOR_COUNTPOP_BG         RGB_A(0xde, 0xe8, 0xf2, 0.95)          //统计气泡背景色
#define __SB_COLOR_COUNTPOP_BORDER     RGB(0xb5, 0xc3, 0xd6)           //统计气泡边框色
#define __SB_COLOR_COUNTPOP_TEXT     RGB(0x33, 0x81, 0xe3)           //统计气泡文字颜色

extern NSString *const SBStockBarControllerStopRefreshButtonNotification;  //首页消息接受完毕通知

/**
 *  列表扩展
 */
@interface SBTableView(statustableview)


/**
 *  添加帖子数据
 *
 *  @param result 帖子数据
 */
- (void)sbAppendStatusResult:(DataItemResult *)result;

//加载帖子缓存 并且加载
- (void)sbAppendCacheAndLoad:(NSString *)cacheKey;

//加载缓存后是否重新请求
-(void)sbAppendCache:(NSString *)cacheKey andLoad:(BOOL)isLoad;


//最新一条帖子数据，用于计算跟新多少条帖子
@property (nonatomic, strong) NSString *lastPostId;

@end

/**
 *  股吧帖子列表 处理一些帖子的常用方法，如排重等
 */
@interface SBStatusTableView : SBTableView {
    SBTableRefreshButton *_refreshBtn;      //刷新按钮
}

@property (nonatomic, assign) BOOL isFirstViewIn;//首次进入

//置顶按钮
@property (nonatomic, strong) SBTableStickyButton *stickyButton;

//缓存键值
@property (nonatomic, copy) NSString *cacheKey;
//显示更新条数
@property (assign) BOOL showUpdateCount;
@property (assign) NSInteger updataCount ;
//显示右下角刷新按钮
@property (assign) BOOL showRefrshButton;
//显示右下角置顶按钮
@property (assign) BOOL showStickyButton;
//是否已经加载
@property (assign) BOOL hasLoaded;
//列表滑动到的位置
@property (assign) CGFloat preOffset;
//请求了帖子数据
@property (nonatomic, copy) requestDataBlock requestStatus;            //必须实现
//成功获取了帖子数据
@property (nonatomic, copy) receiveDataBlock recievedStatus;       //必须实现
//点击单元格
@property (nonatomic, copy) operateRowBlock selectStatus;       //选择实现
//显示单元格
@property (nonatomic, copy) showRowBlock displayStatus;       //选择实现

/**
 *  显示缓存并加载
 */
- (void)sbAppendCacheAndLoad;

//显示缓存但不加载
- (void)sbAppendCache;

/**
 进入帖子正文
 */
- (void)viewStatusBody:(NSIndexPath *)indexPath;

-(void)resetPopLabel:(UILabel*)label;
@end
