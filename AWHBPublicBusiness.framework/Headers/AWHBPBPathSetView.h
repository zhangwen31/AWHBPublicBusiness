//
//  AWHBPBPathSetView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import "AWHBPBPathSpeedSetView.h"
#import "AWHBPBPathWidthSetView.h"
typedef void(^GetSliderValue)(NSInteger sliderValue);
typedef void(^GetSliderValueForSpeed)(NSInteger sliderValue);
typedef void(^ChangeColorBlock)(void);
typedef void(^ChangeMapBlock)(NSString * _Nonnull mapType);

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPathSetView : UIView
@property(nonatomic,strong)AWHBPBPathWidthSetView *widthSetView;
@property(nonatomic,strong)AWHBPBPathSpeedSetView *speedSetView;
@property(nonatomic,copy)GetSliderValue GetSliderValue;
@property(nonatomic,copy)GetSliderValueForSpeed GetSliderValueForSpeed;
@property(nonatomic,copy)ChangeColorBlock ChangeColorBlock;
@property(nonatomic,copy)ChangeMapBlock ChangeMapBlock;
@end

NS_ASSUME_NONNULL_END
