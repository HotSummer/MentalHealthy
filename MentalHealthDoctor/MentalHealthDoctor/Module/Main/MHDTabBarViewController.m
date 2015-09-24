//
//  MHDTabBarViewController.m
//  MentalHealthDoctor
//
//  Created by zbq on 15-8-23.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDTabBarViewController.h"
#import "MHDSearchTableViewController.h"
#import "MHDActivityViewController.h"
#import "MHDMineViewController.h"
#import "MHDTestViewController.h"

@interface MHDTabBarViewController ()

@end

@implementation MHDTabBarViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    NSMutableArray *viewControllers = [NSMutableArray array];
    
    UIViewController *testVC = [[UIStoryboard storyboardWithName:@"Test" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDTestViewControllerStoryboardId"];
    UINavigationController *navTest = [[UINavigationController alloc] initWithRootViewController:testVC];
    [navTest.tabBarItem setTitle:@"测试"];
    [viewControllers addObject:navTest];
    
    UIViewController *activityVC = [[UIStoryboard storyboardWithName:@"Activity" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDActivityViewControllerStoryboardId"];
    UINavigationController *navActivity = [[UINavigationController alloc] initWithRootViewController:activityVC];
    [navActivity.tabBarItem setTitle:@"活动"];
    [viewControllers addObject:navActivity];
    
    UIViewController *seachVC = [[UIStoryboard storyboardWithName:@"Search" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDSearchTableViewControllerStoryboardId"];
    UINavigationController *navSearch = [[UINavigationController alloc] initWithRootViewController:seachVC];
    [navSearch.tabBarItem setTitle:@"搜索"];
    [viewControllers addObject:navSearch];
    
    UIViewController *mineVC = [[UIStoryboard storyboardWithName:@"Mine" bundle:nil] instantiateViewControllerWithIdentifier:@"MHDMineViewControllerStoryboardId"];
    UINavigationController *navMine = [[UINavigationController alloc] initWithRootViewController:mineVC];
    [navMine.tabBarItem setTitle:@"我的"];
    [viewControllers addObject:navMine];
    
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
