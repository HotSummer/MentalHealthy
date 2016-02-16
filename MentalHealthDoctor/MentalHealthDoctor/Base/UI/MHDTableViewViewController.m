//
//  MHDTableViewViewController.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDTableViewViewController.h"

@implementation MHDTableViewViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.navigationController.navigationBar.translucent = NO;
    
    UIImageView *imageview = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"navTitle.png"]];
    [self showNavTitle:imageview];
    
    self.tableview.separatorStyle = UITableViewCellSeparatorStyleNone;
}

@end
