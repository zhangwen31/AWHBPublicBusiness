//
//  AWHBPBBaseTabBarViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBMonomerMonitoringHeadView.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN

@protocol AWHBPBTabrBarBackDelegate <UITabBarControllerDelegate>
-(void)tabbarBackToVC;
@end

@interface AWHBPBBaseTabBarViewController : UITabBarController
@property(nonatomic,strong)AWHBBCarModel *model;
/** */
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *fromVC;
@property(nonatomic,strong)AWHBPBMonomerMonitoringHeadView *headView;
@property(nonatomic,weak)id<AWHBPBTabrBarBackDelegate>delegate;
@end

NS_ASSUME_NONNULL_END
