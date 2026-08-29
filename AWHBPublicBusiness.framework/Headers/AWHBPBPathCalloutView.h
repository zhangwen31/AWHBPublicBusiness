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
@property (assign,nonatomic)CGFloat firstMile;
@property (strong,nonatomic)AWHBBCarModel *model;
@property (nonatomic, copy) void (^closeClick)(void);
@end

NS_ASSUME_NONNULL_END
