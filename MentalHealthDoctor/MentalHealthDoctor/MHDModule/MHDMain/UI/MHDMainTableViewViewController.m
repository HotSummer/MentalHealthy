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

@interface MHDMainTableViewViewController ()

@property (weak, nonatomic) IBOutlet UIButton *btnSearch;
@property (nonatomic, strong) UILabel *lblCity;

@end

@implementation MHDMainTableViewViewController

- (void)viewDidLoad{
    [super viewDidLoad];
    [self showNavView];
    [self showSearchIcon];
    [[MHDMainController shareInstance] loadMentalAds:^(int code, NSString *message, id content, NSError *error) {
        if ([content isKindOfClass:[NSArray class]]) {
            self.dataSource = @[content];
            self.cellClass = @[[MHDMainCell class]];
            [self.tableview reloadData];
        }
    }];
}


- (void)showSearchIcon{
    [self.view bringSubviewToFront:_btnSearch];
}

- (void)showNavView{
    UIView *viewTitle = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 116, 20)];
    viewTitle.backgroundColor = [UIColor clearColor];
    UIImageView *imageview = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"navTitle.png"]];
    [viewTitle addSubview:imageview];
    [imageview mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(@0);
        make.top.equalTo(@0);
        make.width.equalTo(@76);
        make.height.equalTo(@20);
    }];
    _lblCity = [[UILabel alloc] init];
    _lblCity.text = @"上海";
    _lblCity.textColor = [UIColor blackColor];
    _lblCity.font = [UIFont systemFontOfSize:10.0];
    [viewTitle addSubview:_lblCity];
    [_lblCity mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(imageview.mas_right);
        make.bottom.equalTo(@0);
        make.width.equalTo(@40);
        make.height.equalTo(@13);
    }];
    [self showNavTitle:viewTitle];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(selectCity:)];
    [viewTitle addGestureRecognizer:tap];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn addTarget:self action:@selector(didPressedBtnPerson:) forControlEvents:UIControlEventTouchUpInside];
    [btn setImage:[UIImage imageNamed:@"main_person.png"] forState:UIControlStateNormal];
    btn.frame = CGRectMake(0, 0, 25, 25);
    [self showLeftBarItem:btn leftBlock:nil];
    
    UIButton *btnCalendar = [UIButton buttonWithType:UIButtonTypeCustom];
    [btnCalendar addTarget:self action:@selector(didPressedBtnCalendar:) forControlEvents:UIControlEventTouchUpInside];
    [btnCalendar setImage:[UIImage imageNamed:@"main_calander"] forState:UIControlStateNormal];
    btnCalendar.frame = CGRectMake(0, 0, 25, 25);
    [self showRightBarItem:btnCalendar rightBlock:nil];
}

- (void)didPressedBtnPerson:(id)sender{
    
}

- (void)didPressedBtnCalendar:(id)sender{
    
}

- (void)selectCity:(UIGestureRecognizer *)gesture{
    
}

#pragma mark - tableview delegate
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (indexPath.row == 0) {
        self.definesPresentationContext = YES; //self is presenting view controller
        UIViewController *vc = [[UIStoryboard storyboardWithName:@"Main" bundle:nil] instantiateViewControllerWithIdentifier:@"SecondViewController"];
        
        vc.view.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:.4];
        vc.modalPresentationStyle = UIModalPresentationOverCurrentContext;
        [self.navigationController presentViewController:vc animated:NO completion:^{
            
        }];
//        [self presentModalViewController:vc animated:YES];
    }
}

@end
