//
//  SecondViewController.m
//  MentalHealthDoctor
//
//  Created by Summer on 16/2/17.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.tableview.hidden = YES;
    
    self.navigationController.navigationBarHidden = YES;
//    self.view.backgroundColor = [UIColor clearColor];
//    self.view.layer.opacity = 0.5;
//    self.view.opaque = NO;
//    self.view.alpha = 0.5;
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
