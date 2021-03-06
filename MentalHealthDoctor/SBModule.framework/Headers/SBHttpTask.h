
/*
 #####################################################################
 # File    : SBHttpTask.h
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

#import <Foundation/Foundation.h>
#import <Foundation/NSObject.h>


typedef enum {
    SBHttpTaskStateReady = 1,               //开始
    SBHttpTaskStateExecuting = 2,           //执行中
    SBHttpTaskStateFinished = 3             //结束
} SBHttpTaskState;

/**
 缓存类型
 */
typedef enum {
    // 不使用缓存
    SBCacheTypeDisabled = 0,
    
    // 标准缓存，过期会被清除
    SBCacheTypeNormal = 1,
    
    // 持久化缓存，不会过期，超过一定时间会自动更新
    SBCacheTypePersistent = 2,
    
    // 关键业务缓存，不会过期，当网络失效的情况下才会命中
    SBCacheTypeCritical = 3,
    
    // 和SBCacheTypeNormal类似，但持续时间为当天，每天0:00:00过期
    SBCacheTypeDaily = 4,
    
    // SBCacheTypeThumbnail	5
    // SBCacheTypePhoto		6
} SBCacheType;

// 网络连接用到的常量
#define APPCONFIG_CONN_ADD_PREFIX           @"/"                    // WAP 接口前缀 东方财富网没有专门为客户端的接口前缀
#define APPCONFIG_CONN_USER_AGENT           @"app-iphone-client"      // 连接WAP接口的客户端声明
#define APPCONFIG_CONN_TIMEOUT              30                          // 连接超时时间
#define APPCONFIG_CONN_URL_CACHE              (60*60*24*7)                          // 缓存失效时间

@class SBHttpTask;

//该协议用于约束响应 SBHttpTask 事件的类，确保其拥有 onError 和 onReceived 两个方法。
@protocol SBHttpTaskDelegate <NSObject>

@required

/** onError 方法，在 SBHttpTask 请求出错时回调的方法 */
- (void)task:(SBHttpTask *)task onError:(NSError *)error;

/** onReceived 方法，在 SBHttpTask 数据加载完成后回调的方法 */
- (void)task:(SBHttpTask *)task onReceived:(NSData *)data;

@optional

/** 请求即将开始 第一次开始，不包括重试） */
- (void)taskWillStart:(SBHttpTask *)task;

/** 请求即将重试 （重试前会等待5秒，不包括等待的时间） */
- (void)taskWillRetry:(SBHttpTask *)task;

/**  请求失败，但是5秒后会重试 （不是最终失败） */
- (void)taskDidFailWithRetry:(SBHttpTask *)task;

/** 请求已经发出字节 */
- (void)task:(SBHttpTask *)task didSendData:(NSInteger)sendedBytes totalData:(NSInteger)totalBytes;

@end

/**
 *   1.该类用于响应网络请求。
 *   2.该类会封装超时时间，用户代理和处理请求异常。
 */
@interface SBHttpTask : NSOperation <NSURLConnectionDataDelegate>

/** 网络*/
@property (nonatomic, strong) NSURLConnection *urlConnection;
@property (nonatomic, strong) NSMutableURLRequest *urlRequest;

/** url为最基本的参数，必须指定 */
@property (nonatomic, strong) NSString *aURLString;

/** 接收到的网络数据 */
@property (nonatomic, strong) NSMutableData *recieveData;

/** 代理 */
@property (nonatomic, weak) id<SBHttpTaskDelegate> delegate;
//
///** 是否加载完毕 */
@property (nonatomic, assign) BOOL completed;

/** 网络请求状态码 */
@property (nonatomic, assign) NSInteger statusCode;

/** 网络下载数据预估大小 */
@property (nonatomic, assign) NSUInteger expectedContentLength;

/** 错误信息 */
@property (strong, nonatomic) NSError *httpError;

/** 标签，用以区分同一个delegate的不同task */
@property (nonatomic, assign) NSInteger tag;

/** 附带的用户信息 */
@property (nonatomic, retain) id userInfo;

/**  带缓存的类型 */
@property (nonatomic, assign) SBCacheType defaultCacheType;

/** post请求的post数据 */
@property (nonatomic, strong) NSData *postData;

/** 超时时间，默认为xx秒 */
@property (nonatomic, assign) NSTimeInterval timeout;

/** 数据压缩  */
@property (nonatomic, assign) BOOL gzip;

/** 网络操作状态 */
@property (nonatomic, assign) SBHttpTaskState sbHttpTaskState;

/** 初始化一个HTTP请求 */
- (id)initWithURLString:(NSString *)aURLString
             httpMethod:(NSString *)method
               delegate:(id<SBHttpTaskDelegate>)delegate;

/** 终止数据加载 */
- (void)stopLoading;

/** 网络任务描述 */
- (NSString *)sbHttpDescribe;

//获取http请求过的数据
+ (NSString *)getHttpRecord;

@end
