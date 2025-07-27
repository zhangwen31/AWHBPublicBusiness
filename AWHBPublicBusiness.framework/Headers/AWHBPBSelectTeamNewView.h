//
//  AWHBPBSelectTeamNewView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/9/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectTeamNewBlock)(NSString *string,NSString *teamIName,NSInteger num);
@interface AWHBPBSelectTeamNewView : UIView
@property(nonatomic,copy)AWHBPBSelectTeamNewBlock selectTeamBlock;
//是否能选择没有车的车队
@property(nonatomic,assign)BOOL isCanNoCar;
//是否是新增车辆功能选择车队
@property(nonatomic,assign)BOOL isNewAdd;
//是否是修改车辆功能选择车队
@property(nonatomic,assign)BOOL isChangeCar;
@end

NS_ASSUME_NONNULL_END
