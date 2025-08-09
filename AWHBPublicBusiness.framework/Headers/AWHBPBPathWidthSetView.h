//
//  AWHBPBPathWidthSetView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

typedef void(^GetSliderValue)(NSInteger sliderValue);
typedef void(^ChangeColorBlock)(void);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPathWidthSetView : UIView
@property(nonatomic,strong)UIButton *colorBtn;
@property(nonatomic,strong)UILabel *label2;
@property(nonatomic,strong)UISlider *slider;
@property(nonatomic,copy)GetSliderValue GetSliderValue;
@property(nonatomic,copy)ChangeColorBlock ChangeColorBlock;

@end

NS_ASSUME_NONNULL_END
