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
- (void)returnTeamId:(NSString *)teamId andTeamName:(NSString *)teamName;
@end

@interface AWHBPBSelectTeamViewController : AWHBBBaseViewController

@property (nonatomic, weak) id <AWHBPBSelectTeamIdDelegate> delegate;
//是否能选择没有车的车队
@property(nonatomic,assign)BOOL isCanNoCar;

@end

NS_ASSUME_NONNULL_END
