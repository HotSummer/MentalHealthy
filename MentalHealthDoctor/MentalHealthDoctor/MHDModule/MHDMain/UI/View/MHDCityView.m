//
//  MHDCityView.m
//  MentalHealthDoctor
//
//  Created by Summer on 16/2/18.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDCityView.h"
#import "MHDCityCell.h"

@interface MHDCityView ()

@property(nonatomic, strong) NSMutableArray *cities;
@property (weak, nonatomic) IBOutlet UITableView *tableCity;

@end

@implementation MHDCityView

+ (instancetype)initializeUI{
    MHDCityView *cityview = [[[NSBundle mainBundle] loadNibNamed:@"MHDCityView" owner:self options:nil] lastObject];
    return cityview;
}

- (void)sz_setInit{
    _cities = [NSMutableArray arrayWithObjects:@"全国", @"北京", @"上海", @"深圳", @"广州", @"杭州", @"天津", @"重庆", nil];
    [_tableCity reloadData];
    
    UIView *viewHeader = [[UIView alloc] initWithFrame:CGRectMake(0, 0, _tableCity.frame.size.width, 25)];
    viewHeader.backgroundColor = [UIColor clearColor];
    _tableCity.tableHeaderView = viewHeader;
    
    UIView *viewFooter = [[UIView alloc] initWithFrame:CGRectMake(0, 0, _tableCity.frame.size.width, 1)];
    viewFooter.backgroundColor = [UIColor clearColor];
    UIView *viewLine = [[UIView alloc] init];
    viewLine.backgroundColor = [UIColor whiteColor];
    [viewFooter addSubview:viewLine];
    [viewLine mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(@0);
        make.bottom.equalTo(@0);
        make.left.equalTo(@20);
        make.right.equalTo(@(-20));
    }];
    _tableCity.tableFooterView = viewFooter;
}

- (void)sz_updateUIWithModel:(id)model{
    
}

#pragma mark - tableview delegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return _cities.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString *cellIndentifier = @"MHDCityCell";
    MHDCityCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIndentifier];
    if (!cell) {
        cell = [[[NSBundle mainBundle] loadNibNamed:@"MHDCityCell" owner:self options:nil] lastObject];
    }
    cell.cityName = _cities[indexPath.row];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    if ([self.delegate respondsToSelector:@selector(selectedCity:)]) {
        NSString *cityName = _cities[indexPath.row];
        [self.delegate selectedCity:cityName];
    }
}

@end
