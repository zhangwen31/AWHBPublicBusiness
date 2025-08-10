//
//  AWHBPBListMonitoringView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/11.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBasicBusiness.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBListMonitoringView : UIView

@property(nonatomic, weak)UIViewController *viewController;

@property(nonatomic,strong)NSMutableArray *carMapArray;
//选择车队
@property(nonatomic,strong)NSString *selectTabOpinion;

@property(nonatomic,strong)void(^selectModelBlock)(AWHBBCarModel *model);

@end

NS_ASSUME_NONNULL_END
