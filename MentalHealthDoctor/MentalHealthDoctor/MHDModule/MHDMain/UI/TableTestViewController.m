//
//  TableTestViewController.m
//  MentalHealthDoctor
//
//  Created by Summer on 16/6/1.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "TableTestViewController.h"
#import <Common/TableViewManager.h>
#import "TestCell.h"

@interface TableTestViewController ()
<
UITableViewDelegate
>

@property (weak, nonatomic) IBOutlet UITableView *tableTest;
@property (nonatomic, strong) TableViewManager *tableManager;

@end

@implementation TableTestViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    _tableManager = [[TableViewManager alloc] initWithDataSource:@[@[@"1", @"fdf", @"asdas", @"wqeqw"]] cellTypes:@[[TestCell class]] tableDelegateTarget:self];

    _tableTest.dataSource = _tableManager.dataSourceTarget;
    _tableTest.delegate = _tableManager.tableDelegateTarget;
    [_tableTest reloadData];
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

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    NSLog(@"didSelectRowAtIndexPath");
}

@end
