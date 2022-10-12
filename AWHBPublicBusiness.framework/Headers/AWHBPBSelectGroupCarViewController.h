//
//  AWHBPBSelectGroupCarViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/2/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN
//代理传值地图车辆id
@protocol AWHBPBTeamIdDelegate <NSObject>
- (void)returnTeamId:(NSString *)teamId andTeamName:(NSString *)teamName;
@end

//代理传值地图车辆id
@protocol AWHBPBCarIdTabOpinionDelegate <NSObject>
-(void)returnCarIdTabOpinion:(NSString *)tabOpinion andSelectCarId:(nonnull NSString *)carId andAllCarIdArray:(NSMutableArray *)allCarIdArr andAllCar:(nonnull NSMutableArray *)carArr andTeamName:(NSString *)teamName;
@end

@interface AWHBPBSelectGroupCarViewController : AWHBBBaseViewController
@property (nonatomic, weak) id <AWHBPBTeamIdDelegate> delegate;
@property (nonatomic, weak) id <AWHBPBCarIdTabOpinionDelegate> delegate2;
@end

NS_ASSUME_NONNULL_END
