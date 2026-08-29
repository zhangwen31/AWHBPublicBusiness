//
//  AWHBPBAverageHistoryPathView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/12/28.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAverageHistoryPathView : UIView

@property (nonatomic, strong) UINavigationController *navigationController;

@property (nonatomic, copy) void (^selectCarModelBlock)(AWHBBCarModel *model);

@property (nonatomic, copy) void (^changeFilterBlock)(NSString *speed, NSString *stopTime);

-(void)getCarModel:(AWHBBCarModel *)model canSelectCar:(BOOL)canSelectCar;
//修改过滤定位
- (void)changeFilterWithSpeed:(NSString *)speed stopTime:(NSString *)stopTime;

@end

NS_ASSUME_NONNULL_END
