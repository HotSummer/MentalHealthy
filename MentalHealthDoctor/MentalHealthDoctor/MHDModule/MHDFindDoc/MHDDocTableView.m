//
//  MHDDocTableView.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/9.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocTableView.h"
#import "MHDDocTableViewCell.h"
#import "MHDDocDetailController.h"

@implementation MHDDocTableView

- (id)initWithStyle:(BOOL)isGrouped {
    self = [super initWithStyle:isGrouped];
    
    self.scrollsToTop = NO;
    self.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.isRefreshType = NO;
    
    //列表接收网络数据
    self.receiveData = ^(SBTableView *tableView ,SBTableData *tableViewData, DataItemResult *result) {
        
    };
    
    //点击单元格
    self.didSelectRow = ^(SBTableView *tableView, NSIndexPath *indexPath) {
        MHDDocDetailController *docDetailCtrl = [[MHDDocDetailController alloc] init];
        [tableView.ctrl.navigationController pushViewController:docDetailCtrl animated:YES];
    };
    
    //临时修改单元格样式
    self.modifiRowClass = ^ (SBTableView *tableView, Class originClass, NSIndexPath *indexPath) {
        return [MHDDocTableViewCell class];
    };
    
    //计算单元格的高度
    self.heightForRow = ^CGFloat(SBTableView *tableView, NSIndexPath *indexPath) {
        return _DocTableViewCell;
    };
    
    SBTableData *tableViewData = [[SBTableData alloc] init];
    tableViewData.mDataCellClass = [MHDDocTableViewCell class];
    for(int i = 0;i <= 10;i++){
        DataItemDetail *detail = [DataItemDetail detail];
        [tableViewData.tableDataResult addItem:detail];
    }
    [self addSectionWithData:tableViewData];
    
    return self;
}


@end
