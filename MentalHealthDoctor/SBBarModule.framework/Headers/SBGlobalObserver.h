//
//  SBGlobalObserver.h
//  StockBar
//
//  Created by 缪和光 on 14-6-16.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>

//发帖成功回调
NSString *const SBNotificationPostStatusSuccess;
//回复成功回调
NSString *const SBNotificationReplyStatusSuccess;

/**
 全局观察者，用来监控一些特定的Notification
 必须在AppDelegate中初始化
 */
@interface SBGlobalObserver : NSObject

+ (SBGlobalObserver *)sharedInstance;

- (void)startObserve;
- (void)stopObserve;

@end
