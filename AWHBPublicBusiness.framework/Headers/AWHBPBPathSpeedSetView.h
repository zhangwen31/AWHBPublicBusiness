//
//  AWHBPBPathSpeedSetView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
typedef void(^GetSliderValue)(NSInteger sliderValue);
typedef void(^ChangeMapBlock)(NSString * _Nullable mapType);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPathSpeedSetView : UIView
@property(nonatomic,strong)UIButton *titleBtn;
@property(nonatomic,strong)UILabel *label2;
@property(nonatomic,strong)UISlider *slider;
@property(nonatomic,copy)GetSliderValue GetSliderValue;
@property(nonatomic,copy)ChangeMapBlock ChangeMapBlock;
@end

NS_ASSUME_NONNULL_END
