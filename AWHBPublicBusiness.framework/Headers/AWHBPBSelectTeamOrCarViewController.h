//
//  AWHBPBSelectTeamOrCarViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2022/10/9.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN
//代理传值地图车辆id
@protocol AWHBPBSelectCarIdTabOpinionDelegate <NSObject>
- (void)returnCarIdTabOpinion:(NSString *)tabOpinion andAllCarIdArray:(NSMutableArray *)allCarIdArr andAllCar:(nonnull NSMutableArray *)carArr andTeamName:(NSString *)teamName;
@end

@interface AWHBPBSelectTeamOrCarViewController : AWHBBBaseViewController

@property (nonatomic, weak) id <AWHBPBSelectCarIdTabOpinionDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
