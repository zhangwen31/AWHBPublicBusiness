//
//  AWHBPBDayListView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDayListView : UIView

@property(nonatomic,assign)NSInteger max;
/// 天数数组
@property(nonatomic,strong)NSMutableArray *dayArr;
@property(nonatomic, copy) void (^selectDayBlock)(NSString *day);
- (void)setupDay:(NSString *)day;

@end

NS_ASSUME_NONNULL_END
