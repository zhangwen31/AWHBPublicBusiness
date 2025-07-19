//
//  AWHBPBSelectTeamViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

//代理传值地图车辆id
@protocol AWHBPBSelectTeamIdDelegate <NSObject>
- (void)returnTeamId:(NSString *)teamId andTeamName:(NSString *)teamName carNum:(NSInteger)carNum;
@end

@interface AWHBPBSelectTeamViewController : AWHBBBaseViewController

@property (nonatomic, weak) id <AWHBPBSelectTeamIdDelegate> delegate;
//是否能选择没有车的车队
@property(nonatomic,assign)BOOL isCanNoCar;
//是否是新增车辆功能选择车队
@property(nonatomic,assign)BOOL isNewAdd;
//是否是修改车辆功能选择车队
@property(nonatomic,assign)BOOL isChangeCar;

@end

NS_ASSUME_NONNULL_END
