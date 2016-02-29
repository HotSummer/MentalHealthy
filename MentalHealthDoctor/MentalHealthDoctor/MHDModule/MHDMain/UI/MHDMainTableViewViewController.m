//
//  MHDMainTableViewViewController.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDMainTableViewViewController.h"
#import <Common/FXBlurView.h>
#import "MHDMainController.h"
#import "MHDMainCell.h"
#import "MHDCityView.h"

@interface MHDMainTableViewViewController ()
<
MHDCityDelegate
>

@property (weak, nonatomic) IBOutlet UIButton *btnSearch;
@property (assign, nonatomic) BOOL bSearchRotate;
@property (nonatomic, strong) UILabel *lblCity;
@property (nonatomic, strong) MHDCityView *cityView;
@property (nonatomic, strong) FXBlurView *fxView;

- (IBAction)didPressedBtnSearch:(id)sender;

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
    if (!self.cityView.superview) {
        if (!self.fxView.superview) {
            [self addSubFlurView];
        }
        [self.view addSubview:self.cityView];
        _cityView.delegate = self;
        [_cityView mas_makeConstraints:^(MASConstraintMaker *make) {
            make.top.mas_equalTo(@0);
            make.bottom.mas_equalTo(@0);
            make.left.mas_equalTo(@0);
            make.right.mas_equalTo(@0);
        }];
    }
}

- (MHDCityView *)cityView{
    if (!_cityView) {
        _cityView = [MHDCityView initializeUI];
        _cityView.backgroundColor = [UIColor colorWithWhite:0 alpha:0.8];
    }
    return _cityView;
}

- (FXBlurView *)fxView{
    if (!_fxView){
        _fxView = [[FXBlurView alloc] initWithFrame:self.view.bounds];
        _fxView.dynamic = NO;
        _fxView.blurRadius = 15;
        _fxView.tintColor = [UIColor clearColor];
    }
    return _fxView;
}

- (IBAction)didPressedBtnSearch:(id)sender {
    _bSearchRotate = !_bSearchRotate;
    CGFloat fRotate = 0.0;
    if (!_bSearchRotate) {
        [self removeSubFxView];
        fRotate = -M_PI_4;
    }else{
        [self addSubFlurView];
        [self.view bringSubviewToFront:_btnSearch];
        fRotate = M_PI_4;
    }
    [UIView animateWithDuration:0.3 animations:^{
        _btnSearch.transform = CGAffineTransformRotate(_btnSearch.transform, fRotate);
    }];
}

- (void)addSubFlurView{
    [self.view addSubview:self.fxView];
}

- (void)removeSubFxView{
    [self.fxView removeFromSuperview];
}


#pragma mark - MHDCityDelegate
- (void)selectedCity:(NSString *)cityName{
    _lblCity.text = cityName;
    if (!_bSearchRotate) {
        [self removeSubFxView];
    }
    [_cityView removeFromSuperview];
}

#pragma mark - tableview delegate
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if (indexPath.row == 0) {

        //present出透明背景的viewController
//        UIViewController *vc = [[UIStoryboard storyboardWithName:@"Main" bundle:nil] instantiateViewControllerWithIdentifier:@"SecondViewController"];
//        
//        vc.view.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:.4];
//        vc.modalPresentationStyle = UIModalPresentationOverCurrentContext;
//        [self.navigationController presentViewController:vc animated:NO completion:^{
//            
//        }];
//        [self presentModalViewController:vc animated:YES];
        
        
    }
}

@end
