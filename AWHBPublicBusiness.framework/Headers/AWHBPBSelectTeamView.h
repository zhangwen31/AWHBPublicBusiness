//
//  AWHBPBSelectTeamView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectTeamBlock)(NSString *string,NSString *teamIName,NSInteger num);
@interface AWHBPBSelectTeamView : UIView
@property(nonatomic,copy)AWHBPBSelectTeamBlock selectTeamBlock;
//是否能选择没有车的车队
@property(nonatomic,assign)BOOL isCanNoCar;
//是否是新增车辆功能选择车队
@property(nonatomic,assign)BOOL isNewAdd;
@end

NS_ASSUME_NONNULL_END
