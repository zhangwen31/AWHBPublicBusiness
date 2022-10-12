//
//  AWHBPBPathCalloutView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPathCalloutView : UIView
@property (strong,nonatomic)UILabel *timeL;
@property (strong,nonatomic)UILabel *addrL;
@property (strong,nonatomic)UILabel *speedL;
@property (strong,nonatomic)UILabel *preMileL;
@property (strong,nonatomic)AWHBBCarModel *model;
@property (nonatomic, copy) void (^closeClick)(void);
@end

NS_ASSUME_NONNULL_END
