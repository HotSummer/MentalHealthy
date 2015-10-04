//
//  MHDTabbarView.m
//  
//
//  Created by jf on 15/10/4.
//
//

#import "MHDTabbarView.h"
#import <Common/UIImage+TPCategory.h>
#import <Common/UIColor+TPCategory.h>

@interface MHDTabbarView()

@property(nonatomic,strong) NSMutableArray *tabbarsArr;         //菜单的数量

@property(nonatomic,strong) NSMutableArray *tabbarBtnArr;         //添加的tabbar按钮的事件

@property(nonatomic,assign) NSInteger *currentTabbar;         //当前点击的菜单



@end

@implementation MHDTabbarView

- (id)initWithTabbars:(NSArray *)tabbars{
    self = [super init];
    
    if(self){
        _tabbarsArr = [[NSMutableArray alloc] initWithArray:tabbars];
        _currentTabbar = 0;
    }
    
    return self;
}

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    
    [self addShowTabbars];
}

- (void)layoutSubviews{
    [super layoutSubviews];
    
    CGFloat width = CGRectGetWidth(self.bounds);
    CGFloat height = 49.0f;
    CGFloat tabbarHeight = 45.0f;
    CGFloat padding = (width - 45.0f*_tabbarBtnArr.count);
    
    for (int i = 0; i<_tabbarsArr.count; i ++) {
        UIButton *tabbarBtn = _tabbarBtnArr[i];
        [tabbarBtn setFrame:CGRectMake(padding/2+padding*i, (height - tabbarHeight)/2, tabbarHeight, tabbarHeight)];
        [tabbarBtn.layer setCornerRadius:tabbarHeight/2];
        [tabbarBtn.layer setBorderWidth:1.0f];
        [tabbarBtn.layer setBorderColor:[UIColor whiteColor].CGColor];
    }
}

#pragma mark 添加按钮
- (void)addShowTabbars{
    
    if(!_tabbarBtnArr){
        _tabbarBtnArr = [[NSMutableArray alloc] init];
    }
    
    [_tabbarBtnArr removeAllObjects];

    for (int i = 0; i<_tabbarsArr.count; i ++) {
        UIButton *tabbarBtn = [[UIButton alloc] init];
        [tabbarBtn setTag:i];
        [tabbarBtn setTitle:_tabbarsArr[i] forState:UIControlStateNormal];
        [tabbarBtn.titleLabel setFont:[UIFont systemFontOfSize:15.0f]];

        [tabbarBtn setBackgroundColor:[UIColor clearColor]];
        [tabbarBtn setBackgroundImage:[UIImage createImageWithColor:[UIColor clearColor]] forState:UIControlStateNormal];
        [tabbarBtn setBackgroundImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xef8507]] forState:UIControlStateHighlighted];
        [tabbarBtn setBackgroundImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xef8507]] forState:UIControlStateSelected];

        [tabbarBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [tabbarBtn setTitleColor:[UIColor blackColor] forState:UIControlStateHighlighted];
        [tabbarBtn setTitleColor:[UIColor blackColor] forState:UIControlStateSelected];
        
        [_tabbarBtnArr addObject:tabbarBtn];
        
        [self addSubview:tabbarBtn];
    }
}

- (void)didselectedTabbar:(NSInteger )selectedTabbar{
    
    for (UIButton *tabbarBtn in _tabbarBtnArr) {
        
        [tabbarBtn setSelected:tabbarBtn.tag == selectedTabbar];
    }
}


@end
