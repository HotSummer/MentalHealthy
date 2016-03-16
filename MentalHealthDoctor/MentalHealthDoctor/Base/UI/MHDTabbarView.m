//
//  MHDTabbarView.m
//  
//
//  Created by jf on 15/10/4.
//
//

#import "MHDTabbarView.h"

@interface MHDTabbarView()

@property(nonatomic,strong) NSMutableArray *tabbarsArr;         //菜单的数量

@property(nonatomic,strong) NSMutableArray *tabbarBtnArr;         //添加的tabbar按钮的事件

@property(nonatomic,assign) NSInteger *currentTabbar;         //当前点击的菜单



@end

@implementation MHDTabbarView

- (id)initWithTabbars:(NSArray *)tabbars{
    self = [super init];
    
    if(self){
        [self setBackgroundColor:[UIColor clearColor]];
        
        _tabbarsArr = [[NSMutableArray alloc] initWithArray:tabbars];
        _tabbarBtnArr = [[NSMutableArray alloc] init];
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
    CGFloat height = 80.0f;
    CGFloat tabbarHeight = 60.0f;
    CGFloat padding = (width - tabbarHeight*_tabbarBtnArr.count)/_tabbarBtnArr.count;
    
    for (int i = 0; i<_tabbarBtnArr.count; i ++) {
        UIButton *tabbarBtn = _tabbarBtnArr[i];
        [tabbarBtn setFrame:CGRectMake(padding/2+padding*i+tabbarHeight*i, (height - tabbarHeight)/2, tabbarHeight, tabbarHeight)];
        [tabbarBtn.layer setCornerRadius:tabbarHeight/2];
        [tabbarBtn.layer setBorderWidth:1.2f];
        [tabbarBtn.layer setBorderColor:[UIColor whiteColor].CGColor];
        UIImage *defaultImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor clearColor]] size:CGSizeMake(tabbarHeight, tabbarHeight) radius:tabbarHeight/2];
        UIImage *highlightmage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xef8507]] size:CGSizeMake(tabbarHeight, tabbarHeight) radius:tabbarHeight/2];
        
        [tabbarBtn setBackgroundImage:defaultImage forState:UIControlStateNormal];
        [tabbarBtn setBackgroundImage:highlightmage forState:UIControlStateHighlighted];
        [tabbarBtn setBackgroundImage:highlightmage forState:UIControlStateSelected];
    }
}

#pragma mark 添加按钮
- (void)addShowTabbars{    
    [_tabbarBtnArr removeAllObjects];

    for (int i = 0; i<_tabbarsArr.count; i ++) {
        UIButton *tabbarBtn = [[UIButton alloc] init];
        [tabbarBtn setTag:i];
        [tabbarBtn setTitle:_tabbarsArr[i] forState:UIControlStateNormal];
        [tabbarBtn.titleLabel setFont:[UIFont systemFontOfSize:15.0f]];

        [tabbarBtn setBackgroundColor:[UIColor clearColor]];
        
        [tabbarBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [tabbarBtn setTitleColor:[UIColor blackColor] forState:UIControlStateHighlighted];
        [tabbarBtn setTitleColor:[UIColor blackColor] forState:UIControlStateSelected];
        
        [tabbarBtn addTarget:self action:@selector(tabbarDidSelected:) forControlEvents:UIControlEventTouchUpInside];
        [_tabbarBtnArr addObject:tabbarBtn];
        
        [self addSubview:tabbarBtn];
    }
    
}

#pragma mark 按钮点击事件
- (void)tabbarDidSelected:(id)sender{
    UIButton *tabbarBtn = (UIButton *)sender;
    if(self.didSelectedTab){
        self.didSelectedTab(tabbarBtn.tag);
    }
}

//- (void)didselectedTabbar:(NSInteger )selectedTabbar{
//    
//    for (UIButton *tabbarBtn in _tabbarBtnArr) {
//        
//        [tabbarBtn setSelected:tabbarBtn.tag == selectedTabbar];
//    }
//}


@end
