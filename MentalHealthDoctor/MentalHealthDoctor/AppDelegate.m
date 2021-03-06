//
//  AppDelegate.m
//  MentalHealthDoctor
//
//  Created by zbq on 15-8-19.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "AppDelegate.h"
#import <Common/SZBaseTabBarViewController.h>
#import "MHDActivityController.h"
#import "MHDMainTableViewViewController.h"
#import "MHDNavigationViewController.h"
#import "TableTestViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];

    
    NSDecimalNumber *fNumber = [NSDecimalNumber zero];//[NSDecimalNumber decimalNumberWithString:nil];
    NSDecimalNumber *jiafa2 = [NSDecimalNumber decimalNumberWithString:@"0.11111"];

    NSDecimalNumber *jiafa = [fNumber decimalNumberByAdding:jiafa2];
//    MHDActivityController *transitionControl = [[MHDActivityController alloc] init];
//    UINavigationController *rootNavigation = [[UINavigationController alloc] initWithRootViewController:transitionControl];
    TableTestViewController *mainVC = [[UIStoryboard storyboardWithName:@"Main" bundle:nil] instantiateViewControllerWithIdentifier:@"TableTestViewControllerStoryboardId"];
    MHDNavigationViewController *nav = [[MHDNavigationViewController alloc] initWithRootViewController:mainVC];
    [self.window setRootViewController:nav];
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
