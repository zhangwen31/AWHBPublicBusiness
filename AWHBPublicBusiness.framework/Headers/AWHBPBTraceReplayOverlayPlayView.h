//
//  AWHBPBTraceReplayOverlayPlayView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import "AWHBPBCustomProgress.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^StartSliderValue)(NSInteger sliderValue);
typedef void(^GetSliderValue)(NSInteger sliderValue);
typedef void(^PlayOrStopBlock)(NSString *string);
@interface AWHBPBTraceReplayOverlayPlayView : UIView

@property (nonatomic, strong) AWHBPBCustomProgress *custompro;
@property (nonatomic, strong) UIButton *playButton;
@property (nonatomic, strong) UIButton *setBtn;
@property (nonatomic, strong) UIButton *showInforBtn;
@property (nonatomic, copy) PlayOrStopBlock PlayOrStopBlock;
@property(nonatomic,copy)GetSliderValue GetSliderValue;
@property(nonatomic,copy)StartSliderValue StartSliderValue;

@end

NS_ASSUME_NONNULL_END
