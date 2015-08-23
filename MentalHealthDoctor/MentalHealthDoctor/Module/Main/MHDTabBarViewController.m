//
//  MHDTabBarViewController.m
//  MentalHealthDoctor
//
//  Created by zbq on 15-8-23.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDTabBarViewController.h"
#import "MHDCollectedViewController.h"
#import "MHDActivityViewController.h"
#import "MHDSearchViewController.h"
#import "MHDMineViewController.h"

@interface MHDTabBarViewController ()

@end

@implementation MHDTabBarViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    NSMutableArray *viewControllers = [NSMutableArray array];
    
    UINavigationController *seachVC = [[UIStoryboard storyboardWithName:@"Search" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDSearchViewControllerStoryboardID"];
    [seachVC.tabBarItem setTitle:@"搜索"];
    [viewControllers addObject:seachVC];
    
    UINavigationController *activityVC = [[UIStoryboard storyboardWithName:@"Activity" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDActivityViewControllerStoryboardId"];
    [activityVC.tabBarItem setTitle:@"活动"];
    [viewControllers addObject:activityVC];
    
    UINavigationController *collectedVC = [[UIStoryboard storyboardWithName:@"Collected" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDCollectedViewControllerStoryboardId"];
    [collectedVC.tabBarItem setTitle:@"收藏"];
    [viewControllers addObject:collectedVC];
    
    UINavigationController *mineVC = [[UIStoryboard storyboardWithName:@"Mine" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDMineViewControllerStoryboardId"];
    [mineVC.tabBarItem setTitle:@"我的"];
    [viewControllers addObject:mineVC];
    
    [self setViewControllers:viewControllers];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
