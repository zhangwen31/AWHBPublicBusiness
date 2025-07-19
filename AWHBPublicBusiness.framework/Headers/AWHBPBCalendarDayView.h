//
//  AWHBPBCalendarDayView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/12/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCalendarDayView : UIView
/// 天
@property (nonatomic, assign) NSInteger day;
/// 里程
@property (nonatomic, assign) CGFloat mileage;
/// 是否是今天
@property (nonatomic, assign) BOOL isCurrentDay;
/// 是否是选中
@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic, copy) void (^selectDayBlock)(NSInteger day, CGFloat mileage);

@end

NS_ASSUME_NONNULL_END
