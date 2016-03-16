//
//  MHDBaseViewController.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/9.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDBaseViewController.h"

@interface MHDBaseViewController ()

@end

@implementation MHDBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.navigationController.navigationBar.translucent = NO;
    
    UIImageView *imageview = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"navTitle.png"]];
    [self showNavTitle:imageview];
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
