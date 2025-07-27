//
//  AWHBPBSelectTimeView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectTimeView : UIView

@property (nonatomic, copy) void (^startTimeClick)(NSString *startDate);

@property (nonatomic, copy) void (^endTimeClick)(NSString *endDate);

@property (nonatomic, copy) void (^selectTimeBlock)(NSString *startDate, NSString *endDate);
//自定义开始时间
@property (nonatomic, strong) NSString *customStartDate;
//自定义结束时间
@property (nonatomic, strong) NSString *customEndDate;

@end

NS_ASSUME_NONNULL_END
