//
//  MHDMainTableViewViewController.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDMainTableViewViewController.h"
#import "MHDMainController.h"
#import "MHDMainCell.h"

@implementation MHDMainTableViewViewController

- (void)viewDidLoad{
    [super viewDidLoad];
    
    [[MHDMainController shareInstance] loadMentalAds:^(int code, NSString *message, id content, NSError *error) {
        if ([content isKindOfClass:[NSArray class]]) {
            self.dataSource = @[content];
            self.cellClass = @[[MHDMainCell class]];
            [self.tableview reloadData];
        }
    }];
}

@end
