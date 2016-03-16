/*
#####################################################################
# File    : AppCoreInfo.h
# Project : 
# Created : 2013-03-30
# DevTeam : Thomas Develop
# Author  : 
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

#import <UIKit/UIKit.h>
#import "SBObjectSingleton.h"

/** 有关内存泄漏的调试信息 */
#define DEBUG_MALLOC_FOR_TABLE_CELL             @"DEBUG_MALLOC_FOR_TABLE_CELL" // 打印 单元格 资源释放和分配的情况
#define DEBUG_MALLOC_FOR_DATA_ITEM              @"DEBUG_MALLOC_FOR_DATA_ITEM"  // 打印 DataItemDetail DataItemResult 资源释放和分配的情况

/** 其他自定义调试信息 */
#define DEBUG_UIVIEWCTRL_STACK_PRINT            @"DEBUG_UIVIEWCTRL_STACK_PRINT"  // 打印 UIViewController 的路径
#define DEBUG_HTTP_REQUEST_URL_PRINT            @"DEBUG_HTTP_REQUEST_URL_PRINT"  // 打印 HTTP 请求的网址
#define DEBUG_HTTP_RECIEVE_RAM                  @"DEBUG_HTTP_RECIEVE_RAM"  // 打印 HTTP 请求的包的大小
#define DEBUG_LOG_CLICK_EVENT                   @"DEBUG_LOG_CLICK_EVENT"  //统计点打印
#define DEBUG_API_USE_TEST                      @"DEBUG_API_USE_TEST"  //使用test 服务器的数据
#define DEBUG_ENABLE_CHAT                       @"DEBUG_ENABLE_CHAT"  //允许聊天
#define DEBUG_API_USE_PORTFOLIO                 @"DEBUG_API_USE_PORTFOLIO"  //是否允许投资组合

#define DEBUG_CURRENT_TEST_API                  @"DEBUG_CURRENT_TEST_API" //如果有多个测试API，这个是当前的
#define DEBUG_TEST_API_CONFIGGED                @"DEBUG_TEST_API_CONFIGGED" //手动配置的多个API数组

#define DEBUG_SN_CHANGE_REQUESTURL              @"DEBUG_SN_CHANGE_REQUESTURL"  //资讯请求地址切换

#define DEBUG_TX_TRADE                          @"DEBUG_TX_TRADE"  //tx交易

#define DEBUG_VOTE_POST                         @"DEBUG_VOTE_POST"//是否显示投票贴

@class DataAppCacheDB;
@class DataAppCoreDB;

/**
 *   1.应用级别的方法
 */
@interface SBAppCoreInfo : NSObject {
@private
}

//app相关
@property (nonatomic, strong) NSMutableArray *controllerStack;       //ctrl路径
@property (nonatomic, assign) NSInteger netWorkIndicatorCount;     //请求转子flag
@property (nonatomic, strong) DataAppCacheDB *appCacheDB;        //缓存数据库
@property (nonatomic, strong) DataAppCoreDB *appCoreDB;      //核心数据库
@property (nonatomic, strong) NSOperationQueue *appCacheQueue;      //缓存任务队列
@property (nonatomic, strong) NSOperationQueue *appCoreQueue;      //核心任务队列
@property (nonatomic, copy) NSString *clientSign;      //客户端标记
@property (nonatomic, copy) NSString *appDownloadUrl;/** 获取字符形式的应用下载地址 */
@property (nonatomic, copy) NSString *appCommentUrl;/** 获取字符形式的应用评论地址 */
@property (nonatomic, copy) NSString *appDisplayName;/** 获取字符形式的应用名 */
@property (nonatomic, copy) NSString *appVersionName;/** 获取字符形式的应用版本号 */
@property (nonatomic, copy) NSString *appProductName;/** 获取字符形式的工程名 */
@property (nonatomic, copy) NSString *appClientName;/** 获取客户端名称 */
@property (nonatomic, assign) NSInteger appVersionCode;/** 获取整数型应用版本号 */
@property (nonatomic, copy) NSString *deviceToken;/** 获取应用的推送token */

//设备相关
@property (nonatomic, assign) float systemVersionCode; //当前系统浮点型版本号

@property (nonatomic, copy) NSString *mac;/** 获取设备的mac地址 */
@property (nonatomic, copy) NSString *idfa;/** 广告标示符 用于app推广 */
@property (nonatomic, copy) NSString *idfv;/** 应用标示符 这个删应用会重置 */
@property (nonatomic, copy) NSString *clientType;/** 获取设备的 deviceType */
@property (nonatomic, copy) NSString *clientOS;/** 获取本地设备的操作系统及版本 */
@property (nonatomic, copy) NSString *clientMachine;/** 获取设备的类型 */
@property (nonatomic, copy) NSString *networkOperators;//获得网络运营商的名称
@property (nonatomic, copy) NSString *deviceIPAdress;/**  设备ip */

SB_NOARC_SINGLETON_DEFINE(SBAppCoreInfo);

/** 开始当前实例 很重要，最好在launch中率先运行 */
+ (void)install;

/** 销毁当前实例 */
+ (void)destroy;

/** 记录 Controller 到堆栈中 */
- (void)recordControllerToStack:(UIViewController *)ctrl;

/** 从堆栈中移除 Controller */
- (void)removeControllerFromStack:(UIViewController *)ctrl;

/** 获取 Controller 堆栈信息 */
- (NSString *)getControllerStackPath;

/** 获取 Controller 最新激活的 */
- (UIViewController *)getLastActiveController;

/** 获取全局缓存数据库对象 */
+ (DataAppCacheDB *)getCacheDB;

/** 获取全局应用设定数据库对象 */
+ (DataAppCoreDB *)getCoreDB;

/** 获取全局缓存任务队列 */
+ (NSOperationQueue *)getCacheQueue;

/** 获取全局应用任务队列 */
+ (NSOperationQueue *)getCoreQueue;

/** 在状态栏上显示网络连接状态的转子 */
+ (void)showNetworkIndicator;

/** 在状态栏上隐藏网络连接状态的转子 */
+ (void)hiddenNetworkIndicator;

/** 从一个 NSError 对象中解析错误信息 */
+ (NSString *)descriptionFromError:(NSError *)error;

/** 语言包提取函数 */
+ (NSString *)getLocalizedString:(NSString *)key;

/** 设置自定义工程配置 **/
+ (void)setAppConfigWithKey:(NSString *)key value:(NSString *)value;

/** 设置自定义工程配置 **/
+ (void)setBooleanWithKey:(NSString *)key value:(BOOL)value;

/** 获取自定义工程配置 **/
+ (NSString *)getAppConfigWithKey:(NSString *)key;

/** 获取自定义工程配置 **/
+ (Boolean)getBooleanWithKey:(NSString *)key;

/** 获取app的描述 **/
+(NSString *)sb_description;

@end
 