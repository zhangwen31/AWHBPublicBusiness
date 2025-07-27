//
//  AWHBPBWebViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/9.
//

#import "AWHBBBaseViewController.h"

/** */
@protocol AWHBPPasteCopiedContentDelegate <NSObject>
-(void)returnPasteCopiedContent:(NSString*)string;
@end

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBWebViewController : AWHBBBaseViewController

@property (nonatomic,copy)NSString *urlstring;
@property (nonatomic,copy)NSString *defultUrlstring;
@property(nonatomic,weak)id<AWHBPPasteCopiedContentDelegate>delegate;
@property (nonatomic,strong)UIImage *rightImage;
@property (nonatomic,assign)BOOL isShowRight;
//是否不支持缩放
@property (nonatomic,assign)BOOL isNoZooming;
//是否不支持滑动返回 默认支持
@property(nonatomic,assign)BOOL allowsNoBackForwardNavigationGestures;
- (void)setupWebViewBottom:(CGFloat)bottom;
/// 学习课堂需要相关权限
+ (BOOL)checkAccessAuthority;

@end

NS_ASSUME_NONNULL_END
