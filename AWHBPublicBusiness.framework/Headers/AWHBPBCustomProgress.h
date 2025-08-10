//
//  AWHBPBCustomProgress.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^StartSliderValue)(NSInteger sliderValue);
typedef void(^GetSliderValue)(NSInteger sliderValue);
@interface AWHBPBCustomProgress : UIView

@property(nonatomic, retain)UIImageView *leftimg;
@property(nonatomic,assign)NSInteger maxValue;
@property(nonatomic,assign)CGFloat sliderHeight;
@property(nonatomic,assign)BOOL isSliderNoChange;
@property(nonatomic,strong)UISlider *slider;
@property(nonatomic,copy)GetSliderValue GetSliderValue;
@property(nonatomic,copy)StartSliderValue StartSliderValue;
@property(nonatomic,copy)GetSliderValue PhaseSliderValue;
-(void)setPresent:(NSInteger)total andpresent:(NSInteger)present;

@end

NS_ASSUME_NONNULL_END
