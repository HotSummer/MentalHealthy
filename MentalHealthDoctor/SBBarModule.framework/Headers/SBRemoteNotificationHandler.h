//
//  SBRemoteNotificationHandler.h
//  StockBar
//
//  Created by 缪和光 on 14-9-17.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SBModule/SBObjectSingleton.h>
#import <EMInfoPushModule/EMRemoteNotificationHandlerProtocol.h>

@interface SBRemoteNotificationHandler : NSObject<EMRemoteNotificationHandlerProtocol>

SB_ARC_SINGLETON_DEFINE(SBRemoteNotificationHandler)

@property (nonatomic, assign, readonly) int badgeCount;

/**
 用于寻找最上层的ViewController，以保证财富通兼容性
 */
@property (nonatomic, weak) UIWindow *mainWindow;

+ (BOOL)isPushNotificationOpen;//判断系统推送是否打开

- (void)handleRemoteNotificationInfo:(NSDictionary *)notificationInfo;

@end
