//
//  AWHMMNoticeNewView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnUrlBlock)(NSString *urlStr);
@interface AWHMMNoticeNewView : UIView

@property(nonatomic,strong)UIScrollView *scrollView;
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)NSMutableSet *readSet;
//从0开始
@property(nonatomic,assign)NSInteger selectIndex;
@property(nonatomic,copy)AWHMMReturnUrlBlock ReturnUrlBlock;
@property(nonatomic,copy)void(^closeClick)(void);
@property(nonatomic,copy)void(^readNoticeBlock)(id model);

@end

NS_ASSUME_NONNULL_END
