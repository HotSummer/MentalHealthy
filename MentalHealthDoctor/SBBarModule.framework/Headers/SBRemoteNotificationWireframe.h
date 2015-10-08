//
//  SBRemoteNotificationWireframe.h
//  StockBar
//
//  Created by 缪和光 on 14-9-30.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SBRemoteNotificationWireframe : NSObject

+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;
+ (void)didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
+ (void)applicationDidBecomeActive;

@end
