//
//  MHDSearchTableViewController.m
//  MentalHealthDoctor
//
//  Created by zbq on 15-8-25.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDSearchTableViewController.h"

@interface MHDSearchTableViewController ()

@property (nonatomic, strong) UISearchController *searchController;

@end

@implementation MHDSearchTableViewController
- (void)viewDidLoad{
    [super viewDidLoad];
    self.title = @"搜索";
    _searchController = [[UISearchController alloc] initWithSearchResultsController:nil];
    _searchController.searchResultsUpdater = self;
//    _searchController.dimsBackgroundDuringPresentation = NO;
    [_searchController.searchBar sizeToFit];
    self.tableView.tableHeaderView = _searchController.searchBar;
//    _searchController.searchBar = _searchBar;
}

#pragma mark - UISearchResultsUpdating
- (void)updateSearchResultsForSearchController:(UISearchController *)searchController{
}

#pragma mark - tableview delegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 3;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString *cellIndentifier = @"cellIndentifier";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIndentifier];
    cell.textLabel.text = [NSString stringWithFormat:@"%ld", indexPath.row];
    return cell;
}

@end
