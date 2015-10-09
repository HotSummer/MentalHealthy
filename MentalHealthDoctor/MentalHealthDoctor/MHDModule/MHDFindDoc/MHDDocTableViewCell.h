//
//  MHDDocTableViewCell.h
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/9.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#define _DocTableViewCell 100.0f

@interface MHDDocTableViewCell : SBDataTableCell

@property(nonatomic ,strong) UIImageView *headImageView;
@property(nonatomic ,strong) UIView *detaiView;

@property(nonatomic ,strong) UILabel *docNameLbl;
@property(nonatomic ,strong) UIView *docLevelLbl;
@property(nonatomic ,strong) UIView *docSummaryLbl;

@property(nonatomic ,strong) UIImageView *star1ImageView;
@property(nonatomic ,strong) UIImageView *star2ImageView;
@property(nonatomic ,strong) UIImageView *star3ImageView;
@property(nonatomic ,strong) UIImageView *star4ImageView;
@property(nonatomic ,strong) UIImageView *star5ImageView;

@end
