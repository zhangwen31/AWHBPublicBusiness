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

-(void)getCarModel:(AWHBBCarModel *)model canSelectCar:(BOOL)canSelectCar;

@end

NS_ASSUME_NONNULL_END
