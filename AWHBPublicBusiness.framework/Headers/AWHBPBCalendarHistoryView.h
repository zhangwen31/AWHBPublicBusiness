//
//  AWHBPBCalendarHistoryView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/12/28.
//

#import <UIKit/UIKit.h>
#import "AWHBPBQueryMileModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCalendarHistoryView : UIView

@property (nonatomic, strong) AWHBPBQueryMileModel *queryMileModel;

@property (nonatomic, copy) void (^selectDayTimeBlock)(NSString *selectDayTime);

@property (nonatomic, copy) void (^selectTimeBlock)(NSInteger year, NSInteger month);

@property (nonatomic, copy) NSString *selectDayTime;

@end

NS_ASSUME_NONNULL_END
