//
//  AWHBPBCalendarHistoryPopupView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/4/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCalendarHistoryPopupView : UIView

@property(nonatomic,strong) AWHBBCarModel *model;

@property (nonatomic, strong) NSString *selectDayTime;

@property (nonatomic, copy) void (^selectDayTimeBlock)(NSString *selectDayTime);

@property (nonatomic, copy) void (^closeClick)(void);

@end

NS_ASSUME_NONNULL_END
