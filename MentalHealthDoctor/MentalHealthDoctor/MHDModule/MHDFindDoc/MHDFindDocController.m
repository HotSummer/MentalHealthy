//
//  MHDFindDocController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDFindDocController.h"

#define bottmViewHeight 60.0f

#define typeTitleArr @[@"家庭关系",@"职业困扰",@"人际关系",@"青少年相关",@"中老年相关",@"情绪",@"成瘾",@"恐惧",@"两性关系",@"失眠",@"其他"]
#define priceTitleArr @[@"500元以下",@"500-1000",@"1000以上"]

@interface MHDFindDocController ()<UIScrollViewDelegate>

@property(nonatomic ,strong) UIScrollView *contentScrollView;
@property(nonatomic ,strong) UILabel *needFindTypeLbl;
@property(nonatomic ,strong) UILabel *needFindPriceLbl;
@property(nonatomic ,strong) UIView *needFindTypeView;
@property(nonatomic ,strong) UIView *needFindPriceView;
@property(nonatomic ,strong) UIView *bottomView;
@property(nonatomic ,strong) UIButton *searchBtn;

@property(nonatomic ,strong) NSMutableArray *typeBtnArr;
@property(nonatomic ,strong) NSMutableArray *priceBtnArr;

@property(nonatomic ,assign) NSInteger typeSelectedTag;
@property(nonatomic ,assign) NSInteger priceSelectedTag;

@end

@implementation MHDFindDocController

- (void)customView{
    [super customView];
    
    [self.navigationItem setTitle:@"找医生"];
    
    _typeBtnArr = [[NSMutableArray alloc] init];
    _priceBtnArr = [[NSMutableArray alloc] init];
    _typeSelectedTag = _priceSelectedTag = 1000;
    
    [self addChooseContentScroll];
    
    [self addNeedFindTypeView];
    
    [self addNeedFindPriceView];
    
    [self addBottomView];
}

- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    
    CGFloat width = CGRectGetWidth(self.view.bounds);
    CGFloat height = CGRectGetHeight(self.view.bounds);
    CGFloat btnPadding = 20.0f;
    CGFloat btnWidth = (width - btnPadding*4)/3;
    CGFloat btnHeight = btnWidth*2/3;
    CGFloat contentScrollViewHeight = 90.0f+10*2+btnHeight*4+btnPadding*3+10*2+btnHeight;
    
    _contentScrollView.frame = CGRectMake(0.0f, 0.0f, width, height - bottmViewHeight);
    _contentScrollView.contentSize = CGSizeMake(width , contentScrollViewHeight);
    
    [_needFindTypeLbl setFrame:CGRectMake(10.0f, 20.0f, width, 20.0f)];
    [_needFindTypeView setFrame:CGRectMake(0.0f, 0.0f, width, 10*2+btnHeight*4+btnPadding*3)];
    [_needFindTypeView sb_bottomOfView:_needFindTypeLbl withMargin:10.0f];
    for(int i=0;i<_typeBtnArr.count;i++){
        UIButton *typeBtn = _typeBtnArr[i];
        [typeBtn setFrame:CGRectMake(btnPadding + i%3*(btnPadding+btnWidth), 10+i/3*(btnPadding+btnHeight), btnWidth, btnHeight)];
        [typeBtn.layer setCornerRadius:5.0f];
        [typeBtn.layer setBorderColor:[UIColor blackColor].CGColor];
        [typeBtn.layer setBorderWidth:1.0f];
        
        UIImage *defaultImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor clearColor]] size:CGSizeMake(btnWidth, btnHeight) radius:5.0f];
        UIImage *highlightmage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xef8507]] size:CGSizeMake(btnWidth, btnHeight) radius:5.0f];
        [typeBtn setBackgroundImage:defaultImage forState:UIControlStateNormal];
        [typeBtn setBackgroundImage:highlightmage forState:UIControlStateHighlighted];
        [typeBtn setBackgroundImage:highlightmage forState:UIControlStateSelected];
    }
    
    [_needFindPriceLbl setFrame:CGRectMake(10.0f, 0.0f, width, 20.0f)];
    [_needFindPriceLbl sb_bottomOfView:_needFindTypeView withMargin:10.0f];
    [_needFindPriceView setFrame:CGRectMake(0.0f, 0.0f, width, 10*2+btnHeight)];
    [_needFindPriceView sb_bottomOfView:_needFindPriceLbl withMargin:10.0f];
    for(int i=0;i<_priceBtnArr.count;i++){
        UIButton *priceBtn = _priceBtnArr[i];
        [priceBtn setFrame:CGRectMake(btnPadding + i%3*(btnPadding+btnWidth), 10+i/3*(btnPadding+btnHeight), btnWidth, btnHeight)];
        [priceBtn.layer setCornerRadius:5.0f];
        [priceBtn.layer setBorderColor:[UIColor blackColor].CGColor];
        [priceBtn.layer setBorderWidth:1.0f];
        
        UIImage *defaultImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor clearColor]] size:CGSizeMake(btnWidth, btnHeight) radius:5.0f];
        UIImage *highlightmage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xef8507]] size:CGSizeMake(btnWidth, btnHeight) radius:5.0f];
        [priceBtn setBackgroundImage:defaultImage forState:UIControlStateNormal];
        [priceBtn setBackgroundImage:highlightmage forState:UIControlStateHighlighted];
        [priceBtn setBackgroundImage:highlightmage forState:UIControlStateSelected];
    }
    
    
    [_bottomView setFrame:CGRectMake(0.0f, height - bottmViewHeight, width, bottmViewHeight)];
    [_searchBtn setFrame:CGRectMake((width - bottmViewHeight)/2, 1.0f, bottmViewHeight-1, bottmViewHeight-1)];
    UIImage *defaultImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor orangeColor]] size:CGSizeMake(bottmViewHeight-2, bottmViewHeight-2) radius:bottmViewHeight/2-1];
    [_searchBtn setBackgroundImage:defaultImage forState:UIControlStateNormal];
    [_searchBtn setBackgroundImage:defaultImage forState:UIControlStateHighlighted];
    [_searchBtn setBackgroundImage:defaultImage forState:UIControlStateSelected];
}

#pragma mark 添加滚动
- (void)addChooseContentScroll{
    _contentScrollView = [[UIScrollView alloc] init];
    CGFloat width = CGRectGetWidth(self.view.bounds);
    CGFloat height = CGRectGetHeight(self.view.bounds) - bottmViewHeight;
    //显示区域
    _contentScrollView.frame = CGRectMake(0.0f, 0.0f, width, height);
    _contentScrollView.contentSize = CGSizeMake(width, height);
    _contentScrollView.scrollsToTop = NO;
    _contentScrollView.pagingEnabled = NO;
    _contentScrollView.delegate = self;
    _contentScrollView.backgroundColor = [UIColor clearColor];
    _contentScrollView.showsHorizontalScrollIndicator = NO;
    _contentScrollView.bounces = NO;
    [self.view addSubview:_contentScrollView];
}

#pragma mark 需要咨询的方面
- (void)addNeedFindTypeView{
    _needFindTypeLbl = [[UILabel alloc] init];
    [_needFindTypeLbl setBackgroundColor:[UIColor clearColor]];
    [_needFindTypeLbl setText:@"需要咨询的方面"];
    [_needFindTypeLbl setTextColor:[UIColor blackColor]];
    [_needFindTypeLbl setFont:[UIFont boldSystemFontOfSize:20.0f]];
    [_contentScrollView addSubview:_needFindTypeLbl];
    
    
    _needFindTypeView = [[UIView alloc] init];
    [_needFindTypeView setBackgroundColor:[UIColor clearColor]];
    [_contentScrollView addSubview:_needFindTypeView];
    
    for(int i=0;i<typeTitleArr.count;i++){
        UIButton *typeBtn = [[UIButton alloc] init];
        [typeBtn setTag:i];
        [typeBtn setBackgroundColor:[UIColor clearColor]];
        [typeBtn setTitle:typeTitleArr[i] forState:UIControlStateNormal];
        [typeBtn.titleLabel setFont:[UIFont systemFontOfSize:15.0f]];
        [typeBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        [typeBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateHighlighted];
        [typeBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateSelected];
        [typeBtn addTarget:self action:@selector(typeBtnClicked:) forControlEvents:UIControlEventTouchUpInside];
        [_needFindTypeView addSubview:typeBtn];
        [_typeBtnArr addObject:typeBtn];
    }
}

#pragma mark 需要咨询的价格
- (void)addNeedFindPriceView{
    _needFindPriceLbl = [[UILabel alloc] init];
    [_needFindPriceLbl setBackgroundColor:[UIColor clearColor]];
    [_needFindPriceLbl setText:@"选择的价格区间(按小时收费)"];
    [_needFindPriceLbl setTextColor:[UIColor blackColor]];
    [_needFindPriceLbl setFont:[UIFont boldSystemFontOfSize:20.0f]];
    [_contentScrollView addSubview:_needFindPriceLbl];
    
    
    _needFindPriceView = [[UIView alloc] init];
    [_needFindPriceView setBackgroundColor:[UIColor clearColor]];
    [_contentScrollView addSubview:_needFindPriceView];
    
    for(int i=0;i<priceTitleArr.count;i++){
        UIButton *priceBtn = [[UIButton alloc] init];
        [priceBtn setTag:100+i];
        [priceBtn setBackgroundColor:[UIColor clearColor]];
        [priceBtn setTitle:priceTitleArr[i] forState:UIControlStateNormal];
        [priceBtn.titleLabel setFont:[UIFont systemFontOfSize:15.0f]];
        [priceBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        [priceBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateHighlighted];
        [priceBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateSelected];
        [priceBtn addTarget:self action:@selector(priceBtnClicked:) forControlEvents:UIControlEventTouchUpInside];
        [_needFindPriceView addSubview:priceBtn];
        [_priceBtnArr addObject:priceBtn];
    }
}

#pragma mark 底部搜索
- (void)addBottomView{
    _bottomView = [[UIView alloc] init];
    [_bottomView setBackgroundColor:[UIColor grayColor]];
    [self.view addSubview:_bottomView];
    
    _searchBtn = [[UIButton alloc] init];
    [_searchBtn setBackgroundColor:[UIColor clearColor]];
    [_searchBtn setTitle:@"搜索" forState:UIControlStateNormal];
    [_searchBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [_bottomView addSubview:_searchBtn];
}

#pragma mark 类型按钮点击事件
- (void)typeBtnClicked:(id)sender{
    UIButton *typeBtn = (UIButton *)sender;
    if(typeBtn.tag == _typeSelectedTag){
        _typeSelectedTag = 1000;
        for(UIButton *btn in _typeBtnArr){
            [btn setSelected:NO];
        }
        return;
    }
    _typeSelectedTag = typeBtn.tag;
    for(UIButton *btn in _typeBtnArr){
        [btn setSelected:typeBtn.tag == btn.tag];
    }
}

#pragma mark 价格按钮点击事件
- (void)priceBtnClicked:(id)sender{
    UIButton *priceBtn = (UIButton *)sender;
    if(priceBtn.tag == _priceSelectedTag){
        _priceSelectedTag = 1000;
        for(UIButton *btn in _priceBtnArr){
            [btn setSelected:NO];
        }
        return;
    }
    _priceSelectedTag = priceBtn.tag;
    for(UIButton *btn in _priceBtnArr){
        [btn setSelected:priceBtn.tag == btn.tag];
    }
}

@end
